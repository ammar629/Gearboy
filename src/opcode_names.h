/*
 * Gearboy - Nintendo Game Boy Emulator
 * Copyright (C) 2012  Ignacio Sanchez

 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see http://www.gnu.org/licenses/ 
 * 
 */

#ifndef OPCODE_NAMES_H
#define	OPCODE_NAMES_H

struct stOPCodeInfo
{
    const char* name;
    int size;
    int type;
};

static const stOPCodeInfo kOPCodeNames[256] = {
    { "NOP", 1, 0 },
    { "LD BC,$%04X", 3, 2 },
    { "LD (BC),A", 1, 0 },
    { "INC BC", 1, 0 },
    { "INC B", 1, 0 },
    { "DEC B", 1, 0 },
    { "LD B,$%02X", 2, 1 },
    { "RLCA", 1, 0 },
    { "LD ($%04X),SP", 3, 2 },
    { "ADD HL,BC", 1, 0 },
    { "LD A,(BC)", 1, 0 },
    { "DEC BC", 1, 0 },
    { "INC C", 1, 0 },
    { "DEC C", 1, 0 },
    { "LD C,$%02X", 2, 1 },
    { "RRCA", 1, 0 },

    { "STOP", 2, 0 },
    { "LD DE,$%04X", 3, 2 },
    { "LD (DE),A", 1, 0 },
    { "INC DE", 1, 0 },
    { "INC D", 1, 0 },
    { "DEC D", 1, 0 },
    { "LD D,$%02X", 2, 1 },
    { "RLA", 1, 0 },
    { "JR %+d  [$%04X]", 2, 4 },
    { "ADD HL,DE", 1, 0 },
    { "LD A,(DE)", 1, 0 },
    { "DEC DE", 1, 0 },
    { "INC E", 1, 0 },
    { "DEC E", 1, 0 },
    { "LD E,$%02X", 2, 1 },
    { "RRA", 1, 0 },

    { "JR NZ,%+d  [$%04X]", 2, 4 },
    { "LD HL,$%04X", 3, 2 },
    { "LD (HL+),A", 1, 0 },
    { "INC HL", 1, 0 },
    { "INC H", 1, 0 },
    { "DEC H", 1, 0 },
    { "LD H,$%02X", 2, 1 },
    { "DAA", 1, 0 },
    { "JR Z,%+d [$%04X]", 2, 4 },
    { "ADD HL,HL", 1, 0 },
    { "LD A,(HL+)", 1, 0 },
    { "DEC HL", 1, 0 },
    { "INC L", 1, 0 },
    { "DEC L", 1, 0 },
    { "LD L,$%02X", 2, 1 },
    { "CPL", 1, 0 },

    { "JR NC,%+d  [$%04X]", 2, 4 },
    { "LD SP,$%04X", 3, 2 },
    { "LD (HL-),A", 1, 0 },
    { "INC SP", 1, 0 },
    { "INC (HL)", 1, 0 },
    { "DEC (HL)", 1, 0 },
    { "LD (HL),$%02X", 2, 1 },
    { "SCF", 1, 0 },
    { "JR C,%+d  [$%04X]", 2, 4 },
    { "ADD HL,SP", 1, 0 },
    { "LD A,(HL-)", 1, 0 },
    { "DEC SP", 1, 0 },
    { "INC A", 1, 0 },
    { "DEC A", 1, 0 },
    { "LD A,$%02X", 2, 1 },
    { "CCF", 1, 0 },

    { "LD B,B", 1, 0 },
    { "LD B,C", 1, 0 },
    { "LD B,D", 1, 0 },
    { "LD B,E", 1, 0 },
    { "LD B,H", 1, 0 },
    { "LD B,L", 1, 0 },
    { "LD B,(HL)", 1, 0 },
    { "LD B,A", 1, 0 },
    { "LD C,B", 1, 0 },
    { "LD C,C", 1, 0 },
    { "LD C,D", 1, 0 },
    { "LD C,E", 1, 0 },
    { "LD C,H", 1, 0 },
    { "LD C,L", 1, 0 },
    { "LD C,(HL)", 1, 0 },
    { "LD C,A", 1, 0 },

    { "LD D,B", 1, 0 },
    { "LD D,C", 1, 0 },
    { "LD D,D", 1, 0 },
    { "LD D,E", 1, 0 },
    { "LD D,H", 1, 0 },
    { "LD D,L", 1, 0 },
    { "LD D,(HL)", 1, 0 },
    { "LD D,A", 1, 0 },
    { "LD E,B", 1, 0 },
    { "LD E,C", 1, 0 },
    { "LD E,D", 1, 0 },
    { "LD E,E", 1, 0 },
    { "LD E,H", 1, 0 },
    { "LD E,L", 1, 0 },
    { "LD E,(HL)", 1, 0 },
    { "LD E,A", 1, 0 },

    { "LD H,B", 1, 0 },
    { "LD H,C", 1, 0 },
    { "LD H,D", 1, 0 },
    { "LD H,E", 1, 0 },
    { "LD H,H", 1, 0 },
    { "LD H,L", 1, 0 },
    { "LD H,(HL)", 1, 0 },
    { "LD H,A", 1, 0 },
    { "LD L,B", 1, 0 },
    { "LD L,C", 1, 0 },
    { "LD L,D", 1, 0 },
    { "LD L,E", 1, 0 },
    { "LD L,H", 1, 0 },
    { "LD L,L", 1, 0 },
    { "LD L,(HL)", 1, 0 },
    { "LD L,A", 1, 0 },

    { "LD (HL),B", 1, 0 },
    { "LD (HL),C", 1, 0 },
    { "LD (HL),D", 1, 0 },
    { "LD (HL),E", 1, 0 },
    { "LD (HL),H", 1, 0 },
    { "LD (HL),L", 1, 0 },
    { "HALT", 1, 0 },
    { "LD (HL),A", 1, 0 },
    { "LD A,B", 1, 0 },
    { "LD A,C", 1, 0 },
    { "LD A,D", 1, 0 },
    { "LD A,E", 1, 0 },
    { "LD A,H", 1, 0 },
    { "LD A,L", 1, 0 },
    { "LD A,(HL)", 1, 0 },
    { "LD A,A", 1, 0 },

    { "ADD A,B", 1, 0 },
    { "ADD A,C", 1, 0 },
    { "ADD A,D", 1, 0 },
    { "ADD A,E", 1, 0 },
    { "ADD A,H", 1, 0 },
    { "ADD A,L", 1, 0 },
    { "ADD A,(HL)", 1, 0 },
    { "ADD A,A", 1, 0 },
    { "ADC A,B", 1, 0 },
    { "ADC A,C", 1, 0 },
    { "ADC A,D", 1, 0 },
    { "ADC A,E", 1, 0 },
    { "ADC A,H", 1, 0 },
    { "ADC A,L", 1, 0 },
    { "ADC A,(HL)", 1, 0 },
    { "ADC A,A", 1, 0 },

    { "SUB B", 1, 0 },
    { "SUB C", 1, 0 },
    { "SUB D", 1, 0 },
    { "SUB E", 1, 0 },
    { "SUB H", 1, 0 },
    { "SUB L", 1, 0 },
    { "SUB (HL)", 1, 0 },
    { "SUB A", 1, 0 },
    { "SBC A,B", 1, 0 },
    { "SBC A,C", 1, 0 },
    { "SBC A,D", 1, 0 },
    { "SBC A,E", 1, 0 },
    { "SBC A,H", 1, 0 },
    { "SBC A,L", 1, 0 },
    { "SBC A,(HL)", 1, 0 },
    { "SBC A,A", 1, 0 },

    { "AND B", 1, 0 },
    { "AND C", 1, 0 },
    { "AND D", 1, 0 },
    { "AND E", 1, 0 },
    { "AND H", 1, 0 },
    { "AND L", 1, 0 },
    { "AND (HL)", 1, 0 },
    { "AND A", 1, 0 },
    { "XOR B", 1, 0 },
    { "XOR C", 1, 0 },
    { "XOR D", 1, 0 },
    { "XOR E", 1, 0 },
    { "XOR H", 1, 0 },
    { "XOR L", 1, 0 },
    { "XOR (HL)", 1, 0 },
    { "XOR A", 1, 0 },

    { "OR B", 1, 0 },
    { "OR C", 1, 0 },
    { "OR D", 1, 0 },
    { "OR E", 1, 0 },
    { "OR H", 1, 0 },
    { "OR L", 1, 0 },
    { "OR (HL)", 1, 0 },
    { "OR A", 1, 0 },
    { "CP B", 1, 0 },
    { "CP C", 1, 0 },
    { "CP D", 1, 0 },
    { "CP E", 1, 0 },
    { "CP H", 1, 0 },
    { "CP L", 1, 0 },
    { "CP (HL)", 1, 0 },
    { "CP A", 1, 0 },

    { "RET NZ", 1, 0 },
    { "POP BC", 1, 0 },
    { "JP NZ,$%04X", 3, 2 },
    { "JP $%04X", 3, 2 },
    { "CALL NZ,$%04X", 3, 2 },
    { "PUSH BC", 1, 0 },
    { "ADD A,$%02X", 2, 1 },
    { "RST ", 1, 0 },
    { "RET Z", 1, 0 },
    { "RET", 1, 0 },
    { "JP Z,$%04X", 3, 2 },
    { "cb opcode", 1, 0 },
    { "CALL Z,$%04X", 3, 2 },
    { "CALL $%04X", 3, 2 },
    { "ADC A,$%02X", 2, 1 },
    { "RST $08", 1, 0 },

    { "RET NC", 1, 0 },
    { "POP DE", 1, 0 },
    { "JP NC,$%04X", 3, 2 },
    { "[UNUSED]", 1, 0 },
    { "CALL NC,$%04X", 3, 2 },
    { "PUSH DE", 1, 0 },
    { "SUB $%02X", 2, 1 },
    { "RST $10", 1, 0 },
    { "RET C", 1, 0 },
    { "RETI", 1, 0 },
    { "JP C,$%04X", 3, 2 },
    { "[UNUSED]", 1, 0 },
    { "CALL C,$%04X", 3, 2 },
    { "[UNUSED]", 1, 0 },
    { "SBC A,$%02X", 2, 1 },
    { "RST $18", 1, 0 },

    { "LD ($FF00+$%02X),A  [%s]", 2, 5 },
    { "POP HL", 1, 0 },
    { "LD ($FF00+C),A", 1, 0 },
    { "[UNUSED]", 1, 0 },
    { "[UNUSED]", 1, 0 },
    { "PUSH HL", 1, 0 },
    { "AND $%02X", 2, 1 },
    { "RST $20", 1, 0 },
    { "ADD SP,%+d", 2, 3 },
    { "JP (HL)", 1, 0 },
    { "LD ($%04X),A", 3, 2 },
    { "[UNUSED]", 1, 0 },
    { "[UNUSED]", 1, 0 },
    { "[UNUSED]", 1, 0 },
    { "XOR $%02X", 2, 1 },
    { "RST $28", 1, 0 },

    { "LD A,($FF00+$%02X)  [%s]", 2, 5 },
    { "POP AF", 1, 0 },
    { "LD A,($FF00+C)", 1, 0 },
    { "DI", 1, 0 },
    { "[UNUSED]", 1, 0 },
    { "PUSH AF", 1, 0 },
    { "OR $%02X", 2, 1 },
    { "RST $30", 1, 0 },
    { "LD HL,SP%+d", 2, 3 },
    { "LD SP,HL", 1, 0 },
    { "LD A,($%04X)", 3, 2 },
    { "EI", 1, 0 },
    { "[UNUSED]", 1, 0 },
    { "[UNUSED]", 1, 0 },
    { "CP $%02X", 2, 1 },
    { "RST $38", 1, 0 }
};

static const stOPCodeInfo kOPCodeCBNames[256] = {
    { "RLC B", 2, 0 },
    { "RLC C", 2, 0 },
    { "RLC D", 2, 0 },
    { "RLC E", 2, 0 },
    { "RLC H", 2, 0 },
    { "RLC L", 2, 0 },
    { "RLC (HL)", 2, 0 },
    { "RLC A", 2, 0 },
    { "RRC B", 2, 0 },
    { "RRC C", 2, 0 },
    { "RRC D", 2, 0 },
    { "RRC E", 2, 0 },
    { "RRC H", 2, 0 },
    { "RRC L", 2, 0 },
    { "RRC (HL)", 2, 0 },
    { "RRC A", 2, 0 },

    { "RL B", 2, 0 },
    { "RL C", 2, 0 },
    { "RL D", 2, 0 },
    { "RL E", 2, 0 },
    { "RL H", 2, 0 },
    { "RL L ", 2, 0 },
    { "RL (HL)", 2, 0 },
    { "RL A", 2, 0 },
    { "RR B", 2, 0 },
    { "RR C", 2, 0 },
    { "RR D", 2, 0 },
    { "RR E", 2, 0 },
    { "RR H", 2, 0 },
    { "RR L", 2, 0 },
    { "RR (HL)", 2, 0 },
    { "RR A", 2, 0 },

    { "SLA B", 2, 0 },
    { "SLA C", 2, 0 },
    { "SLA D", 2, 0 },
    { "SLA E", 2, 0 },
    { "SLA H", 2, 0 },
    { "SLA L", 2, 0 },
    { "SLA (HL)", 2, 0 },
    { "SLA A", 2, 0 },
    { "SRA B", 2, 0 },
    { "SRA C", 2, 0 },
    { "SRA D", 2, 0 },
    { "SRA E", 2, 0 },
    { "SRA H", 2, 0 },
    { "SRA L", 2, 0 },
    { "SRA (HL)", 2, 0 },
    { "SRA A", 2, 0 },

    { "SWAP B", 2, 0 },
    { "SWAP C", 2, 0 },
    { "SWAP D", 2, 0 },
    { "SWAP E", 2, 0 },
    { "SWAP H", 2, 0 },
    { "SWAP L", 2, 0 },
    { "SWAP (HL)", 2, 0 },
    { "SWAP A", 2, 0 },
    { "SRL B", 2, 0 },
    { "SRL C", 2, 0 },
    { "SRL D", 2, 0 },
    { "SRL E", 2, 0 },
    { "SRL H", 2, 0 },
    { "SRL L", 2, 0 },
    { "SRL (HL)", 2, 0 },
    { "SRL A", 2, 0 },

    { "BIT 0 B", 2, 0 },
    { "BIT 0 C", 2, 0 },
    { "BIT 0 D", 2, 0 },
    { "BIT 0 E", 2, 0 },
    { "BIT 0 H", 2, 0 },
    { "BIT 0 L", 2, 0 },
    { "BIT 0 (HL)", 2, 0 },
    { "BIT 0 A", 2, 0 },
    { "BIT 1 B", 2, 0 },
    { "BIT 1 C", 2, 0 },
    { "BIT 1 D", 2, 0 },
    { "BIT 1 E", 2, 0 },
    { "BIT 1 H", 2, 0 },
    { "BIT 1 L", 2, 0 },
    { "BIT 1 (HL)", 2, 0 },
    { "BIT 1 A", 2, 0 },

    { "BIT 2 B", 2, 0 },
    { "BIT 2 C", 2, 0 },
    { "BIT 2 D", 2, 0 },
    { "BIT 2 E", 2, 0 },
    { "BIT 2 H", 2, 0 },
    { "BIT 2 L", 2, 0 },
    { "BIT 2 (HL)", 2, 0 },
    { "BIT 2 A", 2, 0 },
    { "BIT 3 B", 2, 0 },
    { "BIT 3 C", 2, 0 },
    { "BIT 3 D", 2, 0 },
    { "BIT 3 E", 2, 0 },
    { "BIT 3 H", 2, 0 },
    { "BIT 3 L", 2, 0 },
    { "BIT 3 (HL)", 2, 0 },
    { "BIT 3 A", 2, 0 },

    { "BIT 4 B", 2, 0 },
    { "BIT 4 C", 2, 0 },
    { "BIT 4 D", 2, 0 },
    { "BIT 4 E", 2, 0 },
    { "BIT 4 H", 2, 0 },
    { "BIT 4 L", 2, 0 },
    { "BIT 4 (HL)", 2, 0 },
    { "BIT 4 A", 2, 0 },
    { "BIT 5 B", 2, 0 },
    { "BIT 5 C", 2, 0 },
    { "BIT 5 D", 2, 0 },
    { "BIT 5 E", 2, 0 },
    { "BIT 5 H", 2, 0 },
    { "BIT 5 L", 2, 0 },
    { "BIT 5 (HL)", 2, 0 },
    { "BIT 5 A", 2, 0 },

    { "BIT 6 B", 2, 0 },
    { "BIT 6 C", 2, 0 },
    { "BIT 6 D", 2, 0 },
    { "BIT 6 E", 2, 0 },
    { "BIT 6 H", 2, 0 },
    { "BIT 6 L", 2, 0 },
    { "BIT 6 (HL)", 2, 0 },
    { "BIT 6 A", 2, 0 },
    { "BIT 7 B", 2, 0 },
    { "BIT 7 C", 2, 0 },
    { "BIT 7 D", 2, 0 },
    { "BIT 7 E", 2, 0 },
    { "BIT 7 H", 2, 0 },
    { "BIT 7 L", 2, 0 },
    { "BIT 7 (HL)", 2, 0 },
    { "BIT 7 A", 2, 0 },

    { "RES 0 B", 2, 0 },
    { "RES 0 C", 2, 0 },
    { "RES 0 D", 2, 0 },
    { "RES 0 E", 2, 0 },
    { "RES 0 H", 2, 0 },
    { "RES 0 L", 2, 0 },
    { "RES 0 (HL)", 2, 0 },
    { "RES 0 A", 2, 0 },
    { "RES 1 B", 2, 0 },
    { "RES 1 C", 2, 0 },
    { "RES 1 D", 2, 0 },
    { "RES 1 E", 2, 0 },
    { "RES 1 H", 2, 0 },
    { "RES 1 L", 2, 0 },
    { "RES 1 (HL)", 2, 0 },
    { "RES 1 A", 2, 0 },

    { "RES 2 B", 2, 0 },
    { "RES 2 C", 2, 0 },
    { "RES 2 D", 2, 0 },
    { "RES 2 E", 2, 0 },
    { "RES 2 H", 2, 0 },
    { "RES 2 L", 2, 0 },
    { "RES 2 (HL)", 2, 0 },
    { "RES 2 A", 2, 0 },
    { "RES 3 B", 2, 0 },
    { "RES 3 C", 2, 0 },
    { "RES 3 D", 2, 0 },
    { "RES 3 E", 2, 0 },
    { "RES 3 H", 2, 0 },
    { "RES 3 L", 2, 0 },
    { "RES 3 (HL)", 2, 0 },
    { "RES 3 A", 2, 0 },

    { "RES 4 B", 2, 0 },
    { "RES 4 C", 2, 0 },
    { "RES 4 D", 2, 0 },
    { "RES 4 E", 2, 0 },
    { "RES 4 H", 2, 0 },
    { "RES 4 L", 2, 0 },
    { "RES 4 (HL)", 2, 0 },
    { "RES 4 A", 2, 0 },
    { "RES 5 B", 2, 0 },
    { "RES 5 C", 2, 0 },
    { "RES 5 D", 2, 0 },
    { "RES 5 E", 2, 0 },
    { "RES 5 H", 2, 0 },
    { "RES 5 L", 2, 0 },
    { "RES 5 (HL)", 2, 0 },
    { "RES 5 A", 2, 0 },

    { "RES 6 B", 2, 0 },
    { "RES 6 C", 2, 0 },
    { "RES 6 D", 2, 0 },
    { "RES 6 E", 2, 0 },
    { "RES 6 H", 2, 0 },
    { "RES 6 L", 2, 0 },
    { "RES 6 (HL)", 2, 0 },
    { "RES 6 A", 2, 0 },
    { "RES 7 B", 2, 0 },
    { "RES 7 C", 2, 0 },
    { "RES 7 D", 2, 0 },
    { "RES 7 E", 2, 0 },
    { "RES 7 H", 2, 0 },
    { "RES 7 L", 2, 0 },
    { "RES 7 (HL)", 2, 0 },
    { "RES 7 A", 2, 0 },

    { "SET 0 B", 2, 0 },
    { "SET 0 C", 2, 0 },
    { "SET 0 D", 2, 0 },
    { "SET 0 E", 2, 0 },
    { "SET 0 H", 2, 0 },
    { "SET 0 L", 2, 0 },
    { "SET 0 (HL)", 2, 0 },
    { "SET 0 A", 2, 0 },
    { "SET 1 B", 2, 0 },
    { "SET 1 C", 2, 0 },
    { "SET 1 D", 2, 0 },
    { "SET 1 E", 2, 0 },
    { "SET 1 H", 2, 0 },
    { "SET 1 L", 2, 0 },
    { "SET 1 (HL)", 2, 0 },
    { "SET 1 A", 2, 0 },

    { "SET 2 B", 2, 0 },
    { "SET 2 C", 2, 0 },
    { "SET 2 D", 2, 0 },
    { "SET 2 E", 2, 0 },
    { "SET 2 H", 2, 0 },
    { "SET 2 L", 2, 0 },
    { "SET 2 (HL)", 2, 0 },
    { "SET 2 A", 2, 0 },
    { "SET 3 B", 2, 0 },
    { "SET 3 C", 2, 0 },
    { "SET 3 D", 2, 0 },
    { "SET 3 E", 2, 0 },
    { "SET 3 H", 2, 0 },
    { "SET 3 L", 2, 0 },
    { "SET 3 (HL)", 2, 0 },
    { "SET 3 A", 2, 0 },

    { "SET 4 B", 2, 0 },
    { "SET 4 C", 2, 0 },
    { "SET 4 D", 2, 0 },
    { "SET 4 E", 2, 0 },
    { "SET 4 H", 2, 0 },
    { "SET 4 L", 2, 0 },
    { "SET 4 (HL)", 2, 0 },
    { "SET 4 A", 2, 0 },
    { "SET 5 B", 2, 0 },
    { "SET 5 C", 2, 0 },
    { "SET 5 D", 2, 0 },
    { "SET 5 E", 2, 0 },
    { "SET 5 H", 2, 0 },
    { "SET 5 L", 2, 0 },
    { "SET 5 (HL)", 2, 0 },
    { "SET 5 A", 2, 0 },

    { "SET 6 B", 2, 0 },
    { "SET 6 C", 2, 0 },
    { "SET 6 D", 2, 0 },
    { "SET 6 E", 2, 0 },
    { "SET 6 H", 2, 0 },
    { "SET 6 L", 2, 0 },
    { "SET 6 (HL)", 2, 0 },
    { "SET 6 A", 2, 0 },
    { "SET 7 B", 2, 0 },
    { "SET 7 C", 2, 0 },
    { "SET 7 D", 2, 0 },
    { "SET 7 E", 2, 0 },
    { "SET 7 H", 2, 0 },
    { "SET 7 L", 2, 0 },
    { "SET 7 (HL)", 2, 0 },
    { "SET 7 A", 2, 0 }
};

static const char* kRegisterNames[256] = {
    "P1", "SB", "SC", "UNKNOWN", "DIV", "TIMA", "TMA", "TAC", "UNKNOWN", "UNKNOWN", "UNKNOWN", "UNKNOWN", "UNKNOWN", "UNKNOWN", "UNKNOWN", "IF",
    "NR10", "NR11", "NR12", "NR13", "NR14", "UNKNOWN", "NR21", "NR22", "NR23", "NR24", "NR30", "NR31", "NR32", "NR33", "NR34", "UNKNOWN",
    "NR41", "NR42", "NR43", "NR44", "NR50", "NR51", "NR52", "UNKNOWN", "UNKNOWN", "UNKNOWN", "UNKNOWN", "UNKNOWN", "UNKNOWN", "UNKNOWN", "UNKNOWN", "UNKNOWN",
    "WAVE 0", "WAVE 1", "WAVE 2", "WAVE 3", "WAVE 4", "WAVE 5", "WAVE 6", "WAVE 7", "WAVE 8", "WAVE 9", "WAVE A", "WAVE B", "WAVE C", "WAVE D", "WAVE E", "WAVE F",
    "LCDC", "STAT", "SCY", "SCX", "LY", "LYC", "DMA", "BGP", "OBP0", "OBP1", "WY", "WX", "UNKNOWN", "KEY1", "UNKNOWN", "VBK",
    "UNKNOWN", "HDMA SOURCE HI", "HDMA SOURCE LOW", "HDMA DEST HI", "HDMA DEST LOW", "HDMA LEN", "RP", "UNKNOWN", "UNKNOWN", "UNKNOWN", "UNKNOWN", "UNKNOWN", "UNKNOWN", "UNKNOWN", "UNKNOWN", "UNKNOWN",
    "UNKNOWN", "UNKNOWN", "UNKNOWN", "UNKNOWN", "UNKNOWN", "UNKNOWN", "UNKNOWN", "UNKNOWN", "BCPS", "BCPD", "OCPS", "OCPD", "UNKNOWN", "UNKNOWN", "UNKNOWN", "UNKNOWN",
    "SVBK", "UNKNOWN", "UNKNOWN", "UNKNOWN", "UNKNOWN", "UNKNOWN", "PCM12", "PCM34", "UNKNOWN", "UNKNOWN", "UNKNOWN", "UNKNOWN", "UNKNOWN", "UNKNOWN", "UNKNOWN", "UNKNOWN",
    "HRAM", "HRAM", "HRAM", "HRAM", "HRAM", "HRAM", "HRAM", "HRAM", "HRAM", "HRAM", "HRAM", "HRAM", "HRAM", "HRAM", "HRAM", "HRAM",
    "HRAM", "HRAM", "HRAM", "HRAM", "HRAM", "HRAM", "HRAM", "HRAM", "HRAM", "HRAM", "HRAM", "HRAM", "HRAM", "HRAM", "HRAM", "HRAM",
    "HRAM", "HRAM", "HRAM", "HRAM", "HRAM", "HRAM", "HRAM", "HRAM", "HRAM", "HRAM", "HRAM", "HRAM", "HRAM", "HRAM", "HRAM", "HRAM",
    "HRAM", "HRAM", "HRAM", "HRAM", "HRAM", "HRAM", "HRAM", "HRAM", "HRAM", "HRAM", "HRAM", "HRAM", "HRAM", "HRAM", "HRAM", "HRAM",
    "HRAM", "HRAM", "HRAM", "HRAM", "HRAM", "HRAM", "HRAM", "HRAM", "HRAM", "HRAM", "HRAM", "HRAM", "HRAM", "HRAM", "HRAM", "HRAM",
    "HRAM", "HRAM", "HRAM", "HRAM", "HRAM", "HRAM", "HRAM", "HRAM", "HRAM", "HRAM", "HRAM", "HRAM", "HRAM", "HRAM", "HRAM", "HRAM",
    "HRAM", "HRAM", "HRAM", "HRAM", "HRAM", "HRAM", "HRAM", "HRAM", "HRAM", "HRAM", "HRAM", "HRAM", "HRAM", "HRAM", "HRAM", "HRAM",
    "HRAM", "HRAM", "HRAM", "HRAM", "HRAM", "HRAM", "HRAM", "HRAM", "HRAM", "HRAM", "HRAM", "HRAM", "HRAM", "HRAM", "HRAM", "IE"
};

#endif	/* OPCODE_NAMES_H */

