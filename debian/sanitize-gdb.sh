#!/bin/bash

set -e

tarball=$1
if ! test -f "$tarball"; then
  echo "Could not open $tarball"
  exit 1
fi

tardir=$(dirname "$tarball")
tardir=$(cd "$tardir" && pwd)
version=$(basename "$tarball" | sed "s/^gdb-//; s/\.tar\.bz2\$//")
debversion=${version}
tarball="$tardir"/gdb-$version.tar.bz2
dfsg="$tardir/gdb_$debversion.orig.tar.xz"
doc="$tardir/gdb-doc_$version.orig.tar.xz"

dir=`cd $(dirname "$0") && pwd`

temp=$(mktemp -d)
olddir=`pwd`

cd "$temp"
mkdir src
cd src
tar -xf "$tarball"
cd ..

src=src/gdb-$version
dest=gdb-$debversion

if ! test -d "$src"; then
  echo "Could not find source directory $src"
  exit 1
fi

if test -z "$dest" || test -e "$dest"; then
  echo "Could not create dest directory $dest"
  exit 1
fi

src=`cd "$src" && pwd`

cp -a "$src" "$dest"
pushd "$dest" > /dev/null

# All of the manpages are GFDL'd now
rm -f $(find . \( -name '*.[1-9]' \))

# Almost all of the texinfo documentation is GFDL.  PSIM's is not, but
# we don't need that manual especially anyway.  Special care must be taken
# with observer.texi, which is necessary for the build process.  Remove
# all pregenerated info files, then replace all texinfo files with dummy
# versions.

rm -f $(find . \( -name \*.info -o -name \*.info-\* \))

for f in $(find . \( -name \*.texinfo -o -name \*.texi \)); do
  if test $(basename $f) = observer.texi; then
    sed -ne '/@c This/,/@c any later/p; /@deftype/p' "$src/$f" > $f
    continue
  fi

  echo > "$f"
done

popd > /dev/null

tar --auto-compress -cf "$dfsg" gdb-$debversion
bzcat "$tarball" | xz > "$doc"

cd "$olddir"
rm -rf $temp
