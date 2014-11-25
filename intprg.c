/***********************************************************************/
/*                                                                     */
/*  FILE        :intprg.c                                              */
/*  DATE        :Sun, Oct 06, 2013                                     */
/*  DESCRIPTION :Interrupt Program                                     */
/*  CPU TYPE    :SH7125                                                */
/*                                                                     */
/*  This file is generated by Renesas Project Generator (Ver.4.16).    */
/*                                                                     */
/***********************************************************************/
                  


#include <machine.h>
#include "vect.h"

#pragma section IntPRG
// 4 Illegal code
void INT_Illegal_code(void){/* sleep(); */}
// 5 Reserved

// 6 Illegal slot
void INT_Illegal_slot(void){/* sleep(); */}
// 7 Reserved

// 8 Reserved

// 9 CPU Address error
void INT_CPU_Address(void){/* sleep(); */}
// 10 Reserved

// 11 NMI
void INT_NMI(void){/* sleep(); */}
// 12 User breakpoint trap
void INT_User_Break(void){/* sleep(); */}
// 13 Reserved

// 14 Reserved

// 15 Reserved

// 16 Reserved

// 17 Reserved

// 18 Reserved

// 19 Reserved

// 20 Reserved

// 21 Reserved

// 22 Reserved

// 23 Reserved

// 24 Reserved

// 25 Reserved

// 26 Reserved

// 27 Reserved

// 28 Reserved

// 29 Reserved

// 30 Reserved

// 31 Reserved

// 32 TRAPA (User Vecter)
void INT_TRAPA32(void){/* sleep(); */}
// 33 TRAPA (User Vecter)
void INT_TRAPA33(void){/* sleep(); */}
// 34 TRAPA (User Vecter)
void INT_TRAPA34(void){/* sleep(); */}
// 35 TRAPA (User Vecter)
void INT_TRAPA35(void){/* sleep(); */}
// 36 TRAPA (User Vecter)
void INT_TRAPA36(void){/* sleep(); */}
// 37 TRAPA (User Vecter)
void INT_TRAPA37(void){/* sleep(); */}
// 38 TRAPA (User Vecter)
void INT_TRAPA38(void){/* sleep(); */}
// 39 TRAPA (User Vecter)
void INT_TRAPA39(void){/* sleep(); */}
// 40 TRAPA (User Vecter)
void INT_TRAPA40(void){/* sleep(); */}
// 41 TRAPA (User Vecter)
void INT_TRAPA41(void){/* sleep(); */}
// 42 TRAPA (User Vecter)
void INT_TRAPA42(void){/* sleep(); */}
// 43 TRAPA (User Vecter)
void INT_TRAPA43(void){/* sleep(); */}
// 44 TRAPA (User Vecter)
void INT_TRAPA44(void){/* sleep(); */}
// 45 TRAPA (User Vecter)
void INT_TRAPA45(void){/* sleep(); */}
// 46 TRAPA (User Vecter)
void INT_TRAPA46(void){/* sleep(); */}
// 47 TRAPA (User Vecter)
void INT_TRAPA47(void){/* sleep(); */}
// 48 TRAPA (User Vecter)
void INT_TRAPA48(void){/* sleep(); */}
// 49 TRAPA (User Vecter)
void INT_TRAPA49(void){/* sleep(); */}
// 50 TRAPA (User Vecter)
void INT_TRAPA50(void){/* sleep(); */}
// 51 TRAPA (User Vecter)
void INT_TRAPA51(void){/* sleep(); */}
// 52 TRAPA (User Vecter)
void INT_TRAPA52(void){/* sleep(); */}
// 53 TRAPA (User Vecter)
void INT_TRAPA53(void){/* sleep(); */}
// 54 TRAPA (User Vecter)
void INT_TRAPA54(void){/* sleep(); */}
// 55 TRAPA (User Vecter)
void INT_TRAPA55(void){/* sleep(); */}
// 56 TRAPA (User Vecter)
void INT_TRAPA56(void){/* sleep(); */}
// 57 TRAPA (User Vecter)
void INT_TRAPA57(void){/* sleep(); */}
// 58 TRAPA (User Vecter)
void INT_TRAPA58(void){/* sleep(); */}
// 59 TRAPA (User Vecter)
void INT_TRAPA59(void){/* sleep(); */}
// 60 TRAPA (User Vecter)
void INT_TRAPA60(void){/* sleep(); */}
// 61 TRAPA (User Vecter)
void INT_TRAPA61(void){/* sleep(); */}
// 62 TRAPA (User Vecter)
void INT_TRAPA62(void){/* sleep(); */}
// 63 TRAPA (User Vecter)
void INT_TRAPA63(void){/* sleep(); */}
// 64 Interrupt IRQ0
void INT_IRQ0(void){/* sleep(); */}
// 65 Interrupt IRQ1
void INT_IRQ1(void){/* sleep(); */}
// 66 Interrupt IRQ2
void INT_IRQ2(void){/* sleep(); */}
// 67 Interrupt IRQ3
void INT_IRQ3(void){/* sleep(); */}
// 68 Reserved 

// 69 Reserved 

// 70 Reserved 

// 71 Reserved 

// 72 Reserved 

// 73 Reserved 

// 74 Reserved 

// 75 Reserved 

// 76 Reserved

// 77 Reserved

// 78 Reserved

// 79 Reserved

// 80 Reserved

// 81 Reserved

// 82 Reserved

// 83 Reserved

// 84 Reserved

// 85 Reserved

// 86 Reserved

// 87 Reserved

// 88 MTU2_0 TGIA0
void INT_MTU2_0_TGIA0(void){/* sleep(); */}
// 89 MTU2_0 TGIB0
void INT_MTU2_0_TGIB0(void){
	interrupt_moter_right();
}
// 90 MTU2_0 TGIC0
void INT_MTU2_0_TGIC0(void){/* sleep(); */}
// 91 MTU2_0 TGID0
void INT_MTU2_0_TGID0(void){/* sleep(); */}
// 92 MTU2_0 TCIV0
void INT_MTU2_0_TCIV0(void){/* sleep(); */}
// 93 MTU2_0 TGIE0
void INT_MTU2_0_TGIE0(void){/* sleep(); */}
// 94 MTU2_0 TGIF0
void INT_MTU2_0_TGIF0(void){/* sleep(); */}
// 95 Reserved

// 96 MTU2_1 TGIA1
void INT_MTU2_1_TGIA1(void){/* sleep(); */}
// 97 MTU2_1 TGIB1
void INT_MTU2_1_TGIB1(void){
	interrupt_moter_left();
}
// 98 Reserved

// 99 Reserved

// 100 MTU2_1 TCIV1
void INT_MTU2_1_TCIV1(void){/* sleep(); */}
// 101 MTU2_1 TCIU1
void INT_MTU2_1_TCIU1(void){/* sleep(); */}
// 102 Reserved

// 103 Reserved

// 104 MTU2_2 TGIA2
void INT_MTU2_2_TGIA2(void){/* sleep(); */}
// 105 MTU2_2 TGIB2
void INT_MTU2_2_TGIB2(void){/* sleep(); */}
// 106 Reserved

// 107 Reserved

// 108 MTU2_2 TCIV2
void INT_MTU2_2_TCIV2(void){/* sleep(); */}
// 109 MTU2_2 TCIU2
void INT_MTU2_2_TCIU2(void){/* sleep(); */}
// 110 Reserved

// 111 Reserved

// 112 MTU2_3 TGIA3
void INT_MTU2_3_TGIA3(void){/* sleep(); */}
// 113 MTU2_3 TGIB3
void INT_MTU2_3_TGIB3(void){/* sleep(); */}
// 114 MTU2_3 TGIC3
void INT_MTU2_3_TGIC3(void){/* sleep(); */}
// 115 MTU2_3 TGID3
void INT_MTU2_3_TGID3(void){/* sleep(); */}
// 116 MTU2_3 TCIV3
void INT_MTU2_3_TCIV3(void){/* sleep(); */}
// 117 Reserved

// 118 Reserved

// 119 Reserved

// 120 MTU2_4 TGIA4
void INT_MTU2_4_TGIA4(void){/* sleep(); */}
// 121 MTU2_4 TGIB4
void INT_MTU2_4_TGIB4(void){/* sleep(); */}
// 122 MTU2_4 TGIC4
void INT_MTU2_4_TGIC4(void){/* sleep(); */}
// 123 MTU2_4 TGID4
void INT_MTU2_4_TGID4(void){/* sleep(); */}
// 124 MTU2_4 TCIV4
void INT_MTU2_4_TCIV4(void){/* sleep(); */}
// 125 Reserved

// 126 Reserved

// 127 Reserved

// 128 MTU2_5 TGIU5
void INT_MTU2_5_TGIU5(void){/* sleep(); */}
// 129 MTU2_5 TGIV5
void INT_MTU2_5_TGIV5(void){/* sleep(); */}
// 130 MTU2_5 TGIW5
void INT_MTU2_5_TGIW5(void){/* sleep(); */}
// 131 Reserved

// 132 POE OEI1
void INT_POE_OEI1(void){/* sleep(); */}
// 133 POE OEI3
void INT_POE_OEI3(void){/* sleep(); */}
// 134 Reserved

// 135 Reserved

// 136 Reserved

// 137 Reserved

// 138 Reserved

// 139 Reserved

// 140 Reserved

// 141 Reserved

// 142 Reserved

// 143 Reserved

// 144 Reserved

// 145 Reserved

// 146 Reserved

// 147 Reserved

// 148 Reserved

// 149 Reserved

// 150 Reserved

// 151 Reserved

// 152 Reserved

// 153 Reserved

// 154 Reserved

// 155 Reserved

// 156 Reserved

// 157 Reserved

// 158 Reserved

// 159 Reserved

// 160 Reserved

// 161 Reserved

// 162 Reserved

// 163 Reserved

// 164 Reserved

// 165 Reserved

// 166 Reserved

// 167 Reserved

// 168 Reserved

// 169 Reserved

// 170 Reserved

// 171 Reserved

// 172 Reserved

// 173 Reserved

// 174 Reserved

// 175 Reserved

// 176 Reserved

// 177 Reserved

// 178 Reserved

// 179 Reserved

// 180 Reserved

// 181 Reserved

// 182 Reserved

// 183 Reserved

// 184 CMT0 CMI0
void INT_CMT0_CMI0(void){
	cmt0();
}
// 185 Reserved

// 186 Reserved

// 187 Reserved

// 188 CMT1 CMI1
void INT_CMT1_CMI1(void){
	cmt1();
}
// 189 Reserved

// 190 Reserved

// 191 Reserved

// 192 Reserved

// 193 Reserved

// 194 Reserved

// 195 Reserved

// 196 WDT ITI
void INT_WDT_ITI(void){/* sleep(); */}
// 197 Reserved

// 198 Reserved

// 199 Reserved

// 200 AD0 ADI0
void INT_AD0_ADI0(void){/* sleep(); */}
// 201 AD1 ADI1
void INT_AD1_ADI1(void){/* sleep(); */}
// 202 Reserved

// 203 Reserved

// 204 Reserved

// 205 Reserved

// 206 Reserved

// 207 Reserved

// 208 Reserved

// 209 Reserved

// 210 Reserved

// 211 Reserved

// 212 Reserved

// 213 Reserved

// 214 Reserved

// 215 Reserved

// 216 SCI0 ERI0
void INT_SCI0_ERI0(void){/* sleep(); */}
// 217 SCI0 RXI0
void INT_SCI0_RXI0(void){/* sleep(); */}
// 218 SCI0 TXI0
void INT_SCI0_TXI0(void){/* sleep(); */}
// 219 SCI0 TEI0
void INT_SCI0_TEI0(void){/* sleep(); */}
// 220 SCI1 ERI1
void INT_SCI1_ERI1(void){/* sleep(); */}
// 221 SCI1 RXI1
void INT_SCI1_RXI1(void){/* sleep(); */}
// 222 SCI1 TXI1
void INT_SCI1_TXI1(void){/* sleep(); */}
// 223 SCI1 TEI1
void INT_SCI1_TEI1(void){/* sleep(); */}
// 224 SCI2 ERI2
void INT_SCI2_ERI2(void){/* sleep(); */}
// 225 SCI2 RXI2
void INT_SCI2_RXI2(void){/* sleep(); */}
// 226 SCI2 TXI2
void INT_SCI2_TXI2(void){/* sleep(); */}
// 227 SCI2 TEI2
void INT_SCI2_TEI2(void){/* sleep(); */}
// 228 Reserved

// 229 Reserved

// 230 Reserved

// 231 Reserved

// 232 Reserved

// 233 Reserved

// 234 Reserved

// 235 Reserved

// 236 Reserved

// 237 Reserved

// 238 Reserved

// 239 Reserved

// 240 Reserved

// 241 Reserved

// 242 Reserved

// 243 Reserved

// 244 Reserved

// 245 Reserved

// 246 Reserved

// 247 Reserved

// 248 Reserved

// 249 Reserved

// 250 Reserved

// 251 Reserved

// 252 Reserved

// 253 Reserved

// 254 Reserved

// 255 Reserved

// Dummy
void Dummy(void){/* sleep(); */}
