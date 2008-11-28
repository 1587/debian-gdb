# Filtering backtrace.

# Copyright (C) 2008 Free Software Foundation, Inc.

# This program is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 3 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.

import gdb
import itertools

# Our only exports.
__all__ = ['push_frame_filter', 'create_frame_filter']

frame_filter = None

def push_frame_filter (constructor):
    """Register a new backtrace filter class with the 'backtrace' command.
The filter will be passed an iterator as an argument.  The iterator
will return gdb.Frame-like objects.  The filter should in turn act as
an iterator returning such objects."""
    if frame_filter == None:
        frame_filter = constructor
    else:
        frame_filter = lambda iterator: constructor (frame_filter (iterator))

def create_frame_filter (iter):
    if frame_filter is None:
        return iter
    return frame_filter (iter)

