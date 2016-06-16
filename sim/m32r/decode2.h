/* Decode header for m32r2f.

THIS FILE IS MACHINE GENERATED WITH CGEN.

Copyright 1996-2016 Free Software Foundation, Inc.

This file is part of the GNU simulators.

   This file is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3, or (at your option)
   any later version.

   It is distributed in the hope that it will be useful, but WITHOUT
   ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
   or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public
   License for more details.

   You should have received a copy of the GNU General Public License along
   with this program; if not, see <http://www.gnu.org/licenses/>.

*/

#ifndef M32R2F_DECODE_H
#define M32R2F_DECODE_H

extern const IDESC *m32r2f_decode (SIM_CPU *, IADDR,
                                  CGEN_INSN_WORD, CGEN_INSN_WORD,
                                  ARGBUF *);
extern void m32r2f_init_idesc_table (SIM_CPU *);
extern void m32r2f_sem_init_idesc_table (SIM_CPU *);
extern void m32r2f_semf_init_idesc_table (SIM_CPU *);

/* Enum declaration for instructions in cpu family m32r2f.  */
typedef enum m32r2f_insn_type {
  M32R2F_INSN_X_INVALID, M32R2F_INSN_X_AFTER, M32R2F_INSN_X_BEFORE, M32R2F_INSN_X_CTI_CHAIN
 , M32R2F_INSN_X_CHAIN, M32R2F_INSN_X_BEGIN, M32R2F_INSN_ADD, M32R2F_INSN_ADD3
 , M32R2F_INSN_AND, M32R2F_INSN_AND3, M32R2F_INSN_OR, M32R2F_INSN_OR3
 , M32R2F_INSN_XOR, M32R2F_INSN_XOR3, M32R2F_INSN_ADDI, M32R2F_INSN_ADDV
 , M32R2F_INSN_ADDV3, M32R2F_INSN_ADDX, M32R2F_INSN_BC8, M32R2F_INSN_BC24
 , M32R2F_INSN_BEQ, M32R2F_INSN_BEQZ, M32R2F_INSN_BGEZ, M32R2F_INSN_BGTZ
 , M32R2F_INSN_BLEZ, M32R2F_INSN_BLTZ, M32R2F_INSN_BNEZ, M32R2F_INSN_BL8
 , M32R2F_INSN_BL24, M32R2F_INSN_BCL8, M32R2F_INSN_BCL24, M32R2F_INSN_BNC8
 , M32R2F_INSN_BNC24, M32R2F_INSN_BNE, M32R2F_INSN_BRA8, M32R2F_INSN_BRA24
 , M32R2F_INSN_BNCL8, M32R2F_INSN_BNCL24, M32R2F_INSN_CMP, M32R2F_INSN_CMPI
 , M32R2F_INSN_CMPU, M32R2F_INSN_CMPUI, M32R2F_INSN_CMPEQ, M32R2F_INSN_CMPZ
 , M32R2F_INSN_DIV, M32R2F_INSN_DIVU, M32R2F_INSN_REM, M32R2F_INSN_REMU
 , M32R2F_INSN_REMH, M32R2F_INSN_REMUH, M32R2F_INSN_REMB, M32R2F_INSN_REMUB
 , M32R2F_INSN_DIVUH, M32R2F_INSN_DIVB, M32R2F_INSN_DIVUB, M32R2F_INSN_DIVH
 , M32R2F_INSN_JC, M32R2F_INSN_JNC, M32R2F_INSN_JL, M32R2F_INSN_JMP
 , M32R2F_INSN_LD, M32R2F_INSN_LD_D, M32R2F_INSN_LDB, M32R2F_INSN_LDB_D
 , M32R2F_INSN_LDH, M32R2F_INSN_LDH_D, M32R2F_INSN_LDUB, M32R2F_INSN_LDUB_D
 , M32R2F_INSN_LDUH, M32R2F_INSN_LDUH_D, M32R2F_INSN_LD_PLUS, M32R2F_INSN_LD24
 , M32R2F_INSN_LDI8, M32R2F_INSN_LDI16, M32R2F_INSN_LOCK, M32R2F_INSN_MACHI_A
 , M32R2F_INSN_MACLO_A, M32R2F_INSN_MACWHI_A, M32R2F_INSN_MACWLO_A, M32R2F_INSN_MUL
 , M32R2F_INSN_MULHI_A, M32R2F_INSN_MULLO_A, M32R2F_INSN_MULWHI_A, M32R2F_INSN_MULWLO_A
 , M32R2F_INSN_MV, M32R2F_INSN_MVFACHI_A, M32R2F_INSN_MVFACLO_A, M32R2F_INSN_MVFACMI_A
 , M32R2F_INSN_MVFC, M32R2F_INSN_MVTACHI_A, M32R2F_INSN_MVTACLO_A, M32R2F_INSN_MVTC
 , M32R2F_INSN_NEG, M32R2F_INSN_NOP, M32R2F_INSN_NOT, M32R2F_INSN_RAC_DSI
 , M32R2F_INSN_RACH_DSI, M32R2F_INSN_RTE, M32R2F_INSN_SETH, M32R2F_INSN_SLL
 , M32R2F_INSN_SLL3, M32R2F_INSN_SLLI, M32R2F_INSN_SRA, M32R2F_INSN_SRA3
 , M32R2F_INSN_SRAI, M32R2F_INSN_SRL, M32R2F_INSN_SRL3, M32R2F_INSN_SRLI
 , M32R2F_INSN_ST, M32R2F_INSN_ST_D, M32R2F_INSN_STB, M32R2F_INSN_STB_D
 , M32R2F_INSN_STH, M32R2F_INSN_STH_D, M32R2F_INSN_ST_PLUS, M32R2F_INSN_STH_PLUS
 , M32R2F_INSN_STB_PLUS, M32R2F_INSN_ST_MINUS, M32R2F_INSN_SUB, M32R2F_INSN_SUBV
 , M32R2F_INSN_SUBX, M32R2F_INSN_TRAP, M32R2F_INSN_UNLOCK, M32R2F_INSN_SATB
 , M32R2F_INSN_SATH, M32R2F_INSN_SAT, M32R2F_INSN_PCMPBZ, M32R2F_INSN_SADD
 , M32R2F_INSN_MACWU1, M32R2F_INSN_MSBLO, M32R2F_INSN_MULWU1, M32R2F_INSN_MACLH1
 , M32R2F_INSN_SC, M32R2F_INSN_SNC, M32R2F_INSN_CLRPSW, M32R2F_INSN_SETPSW
 , M32R2F_INSN_BSET, M32R2F_INSN_BCLR, M32R2F_INSN_BTST, M32R2F_INSN_PAR_ADD
 , M32R2F_INSN_WRITE_ADD, M32R2F_INSN_PAR_AND, M32R2F_INSN_WRITE_AND, M32R2F_INSN_PAR_OR
 , M32R2F_INSN_WRITE_OR, M32R2F_INSN_PAR_XOR, M32R2F_INSN_WRITE_XOR, M32R2F_INSN_PAR_ADDI
 , M32R2F_INSN_WRITE_ADDI, M32R2F_INSN_PAR_ADDV, M32R2F_INSN_WRITE_ADDV, M32R2F_INSN_PAR_ADDX
 , M32R2F_INSN_WRITE_ADDX, M32R2F_INSN_PAR_BC8, M32R2F_INSN_WRITE_BC8, M32R2F_INSN_PAR_BL8
 , M32R2F_INSN_WRITE_BL8, M32R2F_INSN_PAR_BCL8, M32R2F_INSN_WRITE_BCL8, M32R2F_INSN_PAR_BNC8
 , M32R2F_INSN_WRITE_BNC8, M32R2F_INSN_PAR_BRA8, M32R2F_INSN_WRITE_BRA8, M32R2F_INSN_PAR_BNCL8
 , M32R2F_INSN_WRITE_BNCL8, M32R2F_INSN_PAR_CMP, M32R2F_INSN_WRITE_CMP, M32R2F_INSN_PAR_CMPU
 , M32R2F_INSN_WRITE_CMPU, M32R2F_INSN_PAR_CMPEQ, M32R2F_INSN_WRITE_CMPEQ, M32R2F_INSN_PAR_CMPZ
 , M32R2F_INSN_WRITE_CMPZ, M32R2F_INSN_PAR_JC, M32R2F_INSN_WRITE_JC, M32R2F_INSN_PAR_JNC
 , M32R2F_INSN_WRITE_JNC, M32R2F_INSN_PAR_JL, M32R2F_INSN_WRITE_JL, M32R2F_INSN_PAR_JMP
 , M32R2F_INSN_WRITE_JMP, M32R2F_INSN_PAR_LD, M32R2F_INSN_WRITE_LD, M32R2F_INSN_PAR_LDB
 , M32R2F_INSN_WRITE_LDB, M32R2F_INSN_PAR_LDH, M32R2F_INSN_WRITE_LDH, M32R2F_INSN_PAR_LDUB
 , M32R2F_INSN_WRITE_LDUB, M32R2F_INSN_PAR_LDUH, M32R2F_INSN_WRITE_LDUH, M32R2F_INSN_PAR_LD_PLUS
 , M32R2F_INSN_WRITE_LD_PLUS, M32R2F_INSN_PAR_LDI8, M32R2F_INSN_WRITE_LDI8, M32R2F_INSN_PAR_LOCK
 , M32R2F_INSN_WRITE_LOCK, M32R2F_INSN_PAR_MACHI_A, M32R2F_INSN_WRITE_MACHI_A, M32R2F_INSN_PAR_MACLO_A
 , M32R2F_INSN_WRITE_MACLO_A, M32R2F_INSN_PAR_MACWHI_A, M32R2F_INSN_WRITE_MACWHI_A, M32R2F_INSN_PAR_MACWLO_A
 , M32R2F_INSN_WRITE_MACWLO_A, M32R2F_INSN_PAR_MUL, M32R2F_INSN_WRITE_MUL, M32R2F_INSN_PAR_MULHI_A
 , M32R2F_INSN_WRITE_MULHI_A, M32R2F_INSN_PAR_MULLO_A, M32R2F_INSN_WRITE_MULLO_A, M32R2F_INSN_PAR_MULWHI_A
 , M32R2F_INSN_WRITE_MULWHI_A, M32R2F_INSN_PAR_MULWLO_A, M32R2F_INSN_WRITE_MULWLO_A, M32R2F_INSN_PAR_MV
 , M32R2F_INSN_WRITE_MV, M32R2F_INSN_PAR_MVFACHI_A, M32R2F_INSN_WRITE_MVFACHI_A, M32R2F_INSN_PAR_MVFACLO_A
 , M32R2F_INSN_WRITE_MVFACLO_A, M32R2F_INSN_PAR_MVFACMI_A, M32R2F_INSN_WRITE_MVFACMI_A, M32R2F_INSN_PAR_MVFC
 , M32R2F_INSN_WRITE_MVFC, M32R2F_INSN_PAR_MVTACHI_A, M32R2F_INSN_WRITE_MVTACHI_A, M32R2F_INSN_PAR_MVTACLO_A
 , M32R2F_INSN_WRITE_MVTACLO_A, M32R2F_INSN_PAR_MVTC, M32R2F_INSN_WRITE_MVTC, M32R2F_INSN_PAR_NEG
 , M32R2F_INSN_WRITE_NEG, M32R2F_INSN_PAR_NOP, M32R2F_INSN_WRITE_NOP, M32R2F_INSN_PAR_NOT
 , M32R2F_INSN_WRITE_NOT, M32R2F_INSN_PAR_RAC_DSI, M32R2F_INSN_WRITE_RAC_DSI, M32R2F_INSN_PAR_RACH_DSI
 , M32R2F_INSN_WRITE_RACH_DSI, M32R2F_INSN_PAR_RTE, M32R2F_INSN_WRITE_RTE, M32R2F_INSN_PAR_SLL
 , M32R2F_INSN_WRITE_SLL, M32R2F_INSN_PAR_SLLI, M32R2F_INSN_WRITE_SLLI, M32R2F_INSN_PAR_SRA
 , M32R2F_INSN_WRITE_SRA, M32R2F_INSN_PAR_SRAI, M32R2F_INSN_WRITE_SRAI, M32R2F_INSN_PAR_SRL
 , M32R2F_INSN_WRITE_SRL, M32R2F_INSN_PAR_SRLI, M32R2F_INSN_WRITE_SRLI, M32R2F_INSN_PAR_ST
 , M32R2F_INSN_WRITE_ST, M32R2F_INSN_PAR_STB, M32R2F_INSN_WRITE_STB, M32R2F_INSN_PAR_STH
 , M32R2F_INSN_WRITE_STH, M32R2F_INSN_PAR_ST_PLUS, M32R2F_INSN_WRITE_ST_PLUS, M32R2F_INSN_PAR_STH_PLUS
 , M32R2F_INSN_WRITE_STH_PLUS, M32R2F_INSN_PAR_STB_PLUS, M32R2F_INSN_WRITE_STB_PLUS, M32R2F_INSN_PAR_ST_MINUS
 , M32R2F_INSN_WRITE_ST_MINUS, M32R2F_INSN_PAR_SUB, M32R2F_INSN_WRITE_SUB, M32R2F_INSN_PAR_SUBV
 , M32R2F_INSN_WRITE_SUBV, M32R2F_INSN_PAR_SUBX, M32R2F_INSN_WRITE_SUBX, M32R2F_INSN_PAR_TRAP
 , M32R2F_INSN_WRITE_TRAP, M32R2F_INSN_PAR_UNLOCK, M32R2F_INSN_WRITE_UNLOCK, M32R2F_INSN_PAR_PCMPBZ
 , M32R2F_INSN_WRITE_PCMPBZ, M32R2F_INSN_PAR_SADD, M32R2F_INSN_WRITE_SADD, M32R2F_INSN_PAR_MACWU1
 , M32R2F_INSN_WRITE_MACWU1, M32R2F_INSN_PAR_MSBLO, M32R2F_INSN_WRITE_MSBLO, M32R2F_INSN_PAR_MULWU1
 , M32R2F_INSN_WRITE_MULWU1, M32R2F_INSN_PAR_MACLH1, M32R2F_INSN_WRITE_MACLH1, M32R2F_INSN_PAR_SC
 , M32R2F_INSN_WRITE_SC, M32R2F_INSN_PAR_SNC, M32R2F_INSN_WRITE_SNC, M32R2F_INSN_PAR_CLRPSW
 , M32R2F_INSN_WRITE_CLRPSW, M32R2F_INSN_PAR_SETPSW, M32R2F_INSN_WRITE_SETPSW, M32R2F_INSN_PAR_BTST
 , M32R2F_INSN_WRITE_BTST, M32R2F_INSN__MAX
} M32R2F_INSN_TYPE;

/* Enum declaration for semantic formats in cpu family m32r2f.  */
typedef enum m32r2f_sfmt_type {
  M32R2F_SFMT_EMPTY, M32R2F_SFMT_ADD, M32R2F_SFMT_ADD3, M32R2F_SFMT_AND3
 , M32R2F_SFMT_OR3, M32R2F_SFMT_ADDI, M32R2F_SFMT_ADDV, M32R2F_SFMT_ADDV3
 , M32R2F_SFMT_ADDX, M32R2F_SFMT_BC8, M32R2F_SFMT_BC24, M32R2F_SFMT_BEQ
 , M32R2F_SFMT_BEQZ, M32R2F_SFMT_BL8, M32R2F_SFMT_BL24, M32R2F_SFMT_BCL8
 , M32R2F_SFMT_BCL24, M32R2F_SFMT_BRA8, M32R2F_SFMT_BRA24, M32R2F_SFMT_CMP
 , M32R2F_SFMT_CMPI, M32R2F_SFMT_CMPZ, M32R2F_SFMT_DIV, M32R2F_SFMT_JC
 , M32R2F_SFMT_JL, M32R2F_SFMT_JMP, M32R2F_SFMT_LD, M32R2F_SFMT_LD_D
 , M32R2F_SFMT_LDB, M32R2F_SFMT_LDB_D, M32R2F_SFMT_LDH, M32R2F_SFMT_LDH_D
 , M32R2F_SFMT_LD_PLUS, M32R2F_SFMT_LD24, M32R2F_SFMT_LDI8, M32R2F_SFMT_LDI16
 , M32R2F_SFMT_LOCK, M32R2F_SFMT_MACHI_A, M32R2F_SFMT_MULHI_A, M32R2F_SFMT_MV
 , M32R2F_SFMT_MVFACHI_A, M32R2F_SFMT_MVFC, M32R2F_SFMT_MVTACHI_A, M32R2F_SFMT_MVTC
 , M32R2F_SFMT_NOP, M32R2F_SFMT_RAC_DSI, M32R2F_SFMT_RTE, M32R2F_SFMT_SETH
 , M32R2F_SFMT_SLL3, M32R2F_SFMT_SLLI, M32R2F_SFMT_ST, M32R2F_SFMT_ST_D
 , M32R2F_SFMT_STB, M32R2F_SFMT_STB_D, M32R2F_SFMT_STH, M32R2F_SFMT_STH_D
 , M32R2F_SFMT_ST_PLUS, M32R2F_SFMT_STH_PLUS, M32R2F_SFMT_STB_PLUS, M32R2F_SFMT_TRAP
 , M32R2F_SFMT_UNLOCK, M32R2F_SFMT_SATB, M32R2F_SFMT_SAT, M32R2F_SFMT_SADD
 , M32R2F_SFMT_MACWU1, M32R2F_SFMT_MSBLO, M32R2F_SFMT_MULWU1, M32R2F_SFMT_SC
 , M32R2F_SFMT_CLRPSW, M32R2F_SFMT_SETPSW, M32R2F_SFMT_BSET, M32R2F_SFMT_BTST
} M32R2F_SFMT_TYPE;

/* Function unit handlers (user written).  */

extern int m32r2f_model_m32r2_u_store (SIM_CPU *, const IDESC *, int /*unit_num*/, int /*referenced*/, INT /*src1*/, INT /*src2*/);
extern int m32r2f_model_m32r2_u_load (SIM_CPU *, const IDESC *, int /*unit_num*/, int /*referenced*/, INT /*sr*/, INT /*dr*/);
extern int m32r2f_model_m32r2_u_cti (SIM_CPU *, const IDESC *, int /*unit_num*/, int /*referenced*/, INT /*sr*/);
extern int m32r2f_model_m32r2_u_mac (SIM_CPU *, const IDESC *, int /*unit_num*/, int /*referenced*/, INT /*src1*/, INT /*src2*/);
extern int m32r2f_model_m32r2_u_cmp (SIM_CPU *, const IDESC *, int /*unit_num*/, int /*referenced*/, INT /*src1*/, INT /*src2*/);
extern int m32r2f_model_m32r2_u_exec (SIM_CPU *, const IDESC *, int /*unit_num*/, int /*referenced*/, INT /*sr*/, INT /*dr*/, INT /*dr*/);

/* Profiling before/after handlers (user written) */

extern void m32r2f_model_insn_before (SIM_CPU *, int /*first_p*/);
extern void m32r2f_model_insn_after (SIM_CPU *, int /*last_p*/, int /*cycles*/);

#endif /* M32R2F_DECODE_H */
