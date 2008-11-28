/* CRIS ELF support for BFD.
   Copyright 2000, 2001, 2004 Free Software Foundation, Inc.
   Contributed by Axis Communications AB, Lund, Sweden.
   Written by Hans-Peter Nilsson.

This file is part of BFD, the Binary File Descriptor library.

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software Foundation, Inc.,
51 Franklin Street - Fifth Floor, Boston, MA 02110-1301, USA.  */

#ifndef _ELF_CRIS_H
#define _ELF_CRIS_H

#include "elf/reloc-macros.h"

/* Relocations.  */
START_RELOC_NUMBERS (elf_cris_reloc_type)
  RELOC_NUMBER (R_CRIS_NONE,		0)
  RELOC_NUMBER (R_CRIS_8,		1)
  RELOC_NUMBER (R_CRIS_16,		2)
  RELOC_NUMBER (R_CRIS_32,		3)

  /* The "PC" position is the location right after the relocation.  */
  RELOC_NUMBER (R_CRIS_8_PCREL,		4)
  RELOC_NUMBER (R_CRIS_16_PCREL,	5)
  RELOC_NUMBER (R_CRIS_32_PCREL,	6)

  RELOC_NUMBER (R_CRIS_GNU_VTINHERIT,	7)
  RELOC_NUMBER (R_CRIS_GNU_VTENTRY,	8)

  /* Copy contents at dynlinking.  Generated by the linker.
     The BFD equivalent is BFD_RELOC_CRIS_COPY.  */
  RELOC_NUMBER (R_CRIS_COPY, 9)

  /* Create GOT entry.  Generated by the linker.
     The BFD equivalent is BFD_RELOC_CRIS_GLOB_DAT.  */
  RELOC_NUMBER (R_CRIS_GLOB_DAT, 10)

  /* Create PLT entry.  Generated by the linker.
     The BFD equivalent is BFD_RELOC_CRIS_JUMP_SLOT.  */
  RELOC_NUMBER (R_CRIS_JUMP_SLOT, 11)

  /* Adjust by program base.  Generated by the linker.
     The BFD equivalent is BFD_RELOC_CRIS_RELATIVE.  */
  RELOC_NUMBER (R_CRIS_RELATIVE, 12)

  /* A 16-bit offset to entry in GOT and request to create GOT entry for
     that symbol.
     The BFD equivalent is BFD_RELOC_CRIS_16_GOT.  */
  RELOC_NUMBER (R_CRIS_16_GOT, 13)

  /* A 32-bit offset to entry in GOT and request to create GOT entry for
     that symbol.
     The BFD equivalent is BFD_RELOC_CRIS_32_GOT.  */
  RELOC_NUMBER (R_CRIS_32_GOT, 14)

  /* A 16-bit offset to entry in PLT part of GOT and request to create PLT
     entry for that symbol.
     The BFD equivalent is BFD_RELOC_CRIS_16_GOTPLT.  */
  RELOC_NUMBER (R_CRIS_16_GOTPLT, 15)

  /* A 32-bit offset to entry in PLT part of GOT and request to create PLT
     entry for that symbol.
     The BFD equivalent is BFD_RELOC_CRIS_32_GOTPLT.  */
  RELOC_NUMBER (R_CRIS_32_GOTPLT, 16)

  /* A 32-bit offset from GOT to (local) symbol: no GOT entry should be
     necessary.
     The BFD equivalent is BFD_RELOC_CRIS_32_GOTREL.  */
  RELOC_NUMBER (R_CRIS_32_GOTREL, 17)

  /* A 32-bit offset from GOT to entry for this symbol in PLT and request
     to create PLT entry for symbol.
     The BFD equivalent is BFD_RELOC_CRIS_32_GOTREL.  */
  RELOC_NUMBER (R_CRIS_32_PLT_GOTREL, 18)

  /* A 32-bit offset from location after this relocation (addend specifies
     offset) to entry for this symbol in PLT and request to create PLT
     entry for symbol.
     The BFD equivalent is BFD_RELOC_CRIS_32_PLT_PCREL.  */
  RELOC_NUMBER (R_CRIS_32_PLT_PCREL, 19)

  /* An assembler-generated-only relocation, instructing the linker to
     reserve two GOT slots, carrying the R_CRIS_DTP relocation for the
     symbol (pointing to the first slot, the relocation fills in
     both).  The value is a 32-bit-value, relative to the start of the
     GOT.  Assembly syntax: "sym:GDGOTREL".  */
  RELOC_NUMBER (R_CRIS_32_GOT_GD, 20)

  /* Similar to R_CRIS_32_GOT_GD, but the value is a 16-bit unsigned
     number, limiting access to 65536/4 global symbols per module (or
     65536/8 thread variables; loosely speaking G*4+T*8 < 65536, where
     T is the number of thread variables and G is the number of other
     external global variables and functions).  Assembly syntax:
     "sym:GDGOTREL16".  */
  RELOC_NUMBER (R_CRIS_16_GOT_GD, 21)

  /* Similar to R_CRIS_32_GOT_GD, but the value is the absolute
     address of the GOT entry.  Disallowed in DSOs created with
     -shared.  Assembly syntax: "sym:GD".  */
  RELOC_NUMBER (R_CRIS_32_GD, 22)

  /* A linker-generated-only relocation, instructing the dynamic
     linker to fill in the module ID and module-relative-TLS-block
     offset of the symbol in question, used for GOT entries.  Note
     that this relocation instructs to fill in two 32-bit values.  */
  RELOC_NUMBER (R_CRIS_DTP, 23)

  /* An assembler-generated-only relocation, instructing the linker to
     reserve the first two GOT slots, and attach the R_CRIS_DTPMOD
     relocation(*) for the module to the first slot, the second
     containing zero.  The value is 32 bits, the offset from the start
     of the TLS block of the module to the thread-local symbol
     mentioned in the relocation.  This relocation must only be applied
     to module-local symbols.  Assembly syntax: "expr:DTPREL".  */
  RELOC_NUMBER (R_CRIS_32_DTPREL, 24)

  /* Similar to R_CRIS_32_DTPREL, but the value is a 16-bit signed
     number, limiting the size of thread-variables of the DSO to 32768
     bytes.  (Note: matches both model 1 and 2 and allows use of addo.w
     as the instruction where this relocation is used.)  Assembly
     syntax: "expr:DTPREL16".  */
  RELOC_NUMBER (R_CRIS_16_DTPREL, 25)

  /* An assembler-generated-only relocation, instructing the linker to
     reserve a GOT slot and attach the R_CRIS_32_TPREL relocation for
     the symbol in question.  The value is 32 bits, which is the
     GOT-relative offset of the slot.  Assembly syntax:
     "sym:TPOFFGOT".  */
  RELOC_NUMBER (R_CRIS_32_GOT_TPREL, 26)

  /* Similar to R_CRIS_32_TPREL, but the value is a 16-bit positive
     number, limiting the number of thread- and global variables of
     the DSO to 32768/4.  Assembly syntax: "sym:TPOFFGOT16".  */
  RELOC_NUMBER (R_CRIS_16_GOT_TPREL, 27)

  /* An assembler- and linker-generated relocation, instructing to
     resolve the symbol in question yielding the TLS offset of the
     thread variable; relative to the module's TLS data if in a DSO,
     but relative to the executable's thread data if in an
     executable. Not allowed as input when generating a DSO.  Assembly
     syntax: "expr:TPOFF".  */
  RELOC_NUMBER (R_CRIS_32_TPREL, 28)

  /* Similar to R_CRIS_32_TPREL, but only applicable to executables
     compiled with -msmall-tls. Not allowed in a DSO. The value is a
     16-bit signed number, limiting the size of thread-variables of
     the executable to 32768 bytes. (Note: being signed makes it match
     both model 1 and 2 and allows use of addo.w as the instruction
     where this relocation is applied.)  Assembly syntax:
     "expr:TPOFF16".  */
  RELOC_NUMBER (R_CRIS_16_TPREL, 29)

  /* A linker-generated-only relocation, instructing the dynamic
     linker to fill in the current module ID, used for GOT entries
     (always the fourth one).  */
  RELOC_NUMBER (R_CRIS_DTPMOD, 30)

  /* No other relocs must be visible outside the assembler.  */

END_RELOC_NUMBERS (R_CRIS_max)

/* User symbols in this file have a leading underscore.  */
#define EF_CRIS_UNDERSCORE		0x00000001

/* This is a mask for different incompatible machine variants.  */
#define EF_CRIS_VARIANT_MASK		0x0000000e

/* Variant 0; may contain v0..10 object.  */
#define EF_CRIS_VARIANT_ANY_V0_V10	0x00000000

/* Variant 1; contains v32 object.  */
#define EF_CRIS_VARIANT_V32		0x00000002

/* Variant 2; contains object compatible with v32 and v10.  */
#define EF_CRIS_VARIANT_COMMON_V10_V32	0x00000004

#endif /* _ELF_CRIS_H */
