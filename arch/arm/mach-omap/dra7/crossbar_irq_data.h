/*
 *
 * @Component			OMAPCONF
 * @Filename			crossbar_irq_data.h
 * @Description			DRA7 IRQ Crossbar data
 * @Author			Nishanth Menon
 * @Date			2013
 * @Copyright			Texas Instruments Incorporated
 *
 *
 * Copyright (C) 2013 Texas Instruments Incorporated - http://www.ti.com/
 *
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions
 *  are met:
 *
 *    Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 *    Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the
 *    distribution.
 *
 *    Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 *  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 *  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 *  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 *  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 *  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 *  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 *  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 *  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */

#include <string.h>
#include "crossbar.h"

#ifndef _DRA7_IRQ_CROSS_BAR_DATA_H
#define _DRA7_IRQ_CROSS_BAR_DATA_H

static struct cross_bar_input dra7_irq_crossbar[] = {
	[0] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[1] = {.name = "ELM_IRQ",.source = "ELM",.description =
	       "Error location process completion interrupt"},
	[2] = {.name = "EXT_SYS_IRQ_1",.source = "External",.description =
	       "system External interrupt (active low) via sys_nirq1 pin"},
	[3] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[4] = {.name = "L3_MAIN_IRQ_DBG_ERR",.source = "L3_MAIN",.description =
	       "L3_MAIN debug error"},
	[5] = {.name = "L3_MAIN_IRQ_APP_ERR",.source = "L3_MAIN",.description =
	       "L3_MAIN application or non-attributable error"},
	[6] = {.name = "PRM_IRQ_MPU",.source = "PRM",.description =
	       "PRCM interrupt to MPU"},
	[7] = {.name = "DMA_SYSTEM_IRQ_0",.source = "DMA_SYSTEM",.description =
	       "System DMA interrupt 0"},
	[8] = {.name = "DMA_SYSTEM_IRQ_1",.source = "DMA_SYSTEM",.description =
	       "System DMA interrupt 1"},
	[9] = {.name = "DMA_SYSTEM_IRQ_2",.source = "DMA_SYSTEM",.description =
	       "System DMA interrupt 2"},
	[10] = {.name = "DMA_SYSTEM_IRQ_3",.source = "DMA_SYSTEM",.description =
		"System DMA interrupt 3"},
	[11] = {.name = "L3_MAIN_IRQ_STAT_ALARM",.source =
		"L3_MAIN",.description =
		"L3_MAIN statistic collector alarm interrupt"},
	[12] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[13] = {.name = "SMARTREFLEX_MPU_IRQ",.source =
		"SMARTREFLEX_MPU",.description = "SMARTREFLEX_MPU interrupt"},
	[14] = {.name = "SMARTREFLEX_CORE_IRQ",.source =
		"SMARTREFLEX_CORE",.description = "SMARTREFLEX_CORE interrupt"},
	[15] = {.name = "GPMC_IRQ",.source = "GPMC",.description =
		"GPMC interrupt"},
	[16] = {.name = "GPU_IRQ",.source = "GPU",.description =
		"GPU interrupt"},
	[17] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[18] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[19] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[20] = {.name = "DISPC_IRQ",.source = "DISPC",.description =
		"Display controller interrupt"},
	[21] = {.name = "MAILBOX1_IRQ_USER0",.source = "MAILBOX1",.description =
		"Mailbox 1 user 0 interrupt"},
	[22] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[23] = {.name = "DSP1_IRQ_MMU0",.source = "DSP1",.description =
		"DSP1 MMU0 interrupt"},
	[24] = {.name = "GPIO1_IRQ_1",.source = "GPIO1",.description =
		"GPIO1 interrupt 1"},
	[25] = {.name = "GPIO2_IRQ_1",.source = "GPIO2",.description =
		"GPIO2 interrupt 1"},
	[26] = {.name = "GPIO3_IRQ_1",.source = "GPIO3",.description =
		"GPIO3 interrupt 1"},
	[27] = {.name = "GPIO4_IRQ_1",.source = "GPIO4",.description =
		"GPIO4 interrupt 1"},
	[28] = {.name = "GPIO5_IRQ_1",.source = "GPIO5",.description =
		"GPIO5 interrupt 1"},
	[29] = {.name = "GPIO6_IRQ_1",.source = "GPIO6",.description =
		"GPIO6 interrupt 1"},
	[30] = {.name = "GPIO7_IRQ_1",.source = "GPIO7",.description =
		"GPIO7 interrupt 1"},
	[31] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[32] = {.name = "TIMER1_IRQ",.source = "TIMER1",.description =
		"TIMER1 interrupt"},
	[33] = {.name = "TIMER2_IRQ",.source = "TIMER2",.description =
		"TIMER2 interrupt"},
	[34] = {.name = "TIMER3_IRQ",.source = "TIMER3",.description =
		"TIMER3 interrupt"},
	[35] = {.name = "TIMER4_IRQ",.source = "TIMER4",.description =
		"TIMER4 interrupt"},
	[36] = {.name = "TIMER5_IRQ",.source = "TIMER5",.description =
		"TIMER5 interrupt"},
	[37] = {.name = "TIMER6_IRQ",.source = "TIMER6",.description =
		"TIMER6 interrupt"},
	[38] = {.name = "TIMER7_IRQ",.source = "TIMER7",.description =
		"TIMER7 interrupt"},
	[39] = {.name = "TIMER8_IRQ",.source = "TIMER8",.description =
		"TIMER8 interrupt"},
	[40] = {.name = "TIMER9_IRQ",.source = "TIMER9",.description =
		"TIMER9 interrupt"},
	[41] = {.name = "TIMER10_IRQ",.source = "TIMER10",.description =
		"TIMER10 interrupt"},
	[42] = {.name = "TIMER11_IRQ",.source = "TIMER11",.description =
		"TIMER11 interrupt"},
	[43] = {.name = "MCSPI4_IRQ",.source = "MCSPI4",.description =
		"McSPI4 interrupt"},
	[44] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[45] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[46] = {.name = "SHA2MD5_1_IRQ_P",.source = "SHA2MD5_1",.description =
		"SHA2MD5_1 interrupt on HIB2"},
	[47] = {.name = "RNG_IRQ",.source = "RNG",.description =
		"RNG interrupt"},
	[48] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[49] = {.name = "SATA_IRQ",.source = "SATA",.description =
		"SATA interrupt"},
	[50] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[51] = {.name = "I2C1_IRQ",.source = "I2C1",.description =
		"I2C1 interrupt"},
	[52] = {.name = "I2C2_IRQ",.source = "I2C2",.description =
		"I2C2 interrupt"},
	[53] = {.name = "HDQ1W_IRQ",.source = "HDQ1W",.description =
		"HDQ1W interrupt"},
	[54] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[55] = {.name = "I2C5_IRQ",.source = "I2C5",.description =
		"I2C5 interrupt"},
	[56] = {.name = "I2C3_IRQ",.source = "I2C3",.description =
		"I2C3 interrupt"},
	[57] = {.name = "I2C4_IRQ",.source = "I2C4",.description =
		"I2C4 interrupt"},
	[58] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[59] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[60] = {.name = "MCSPI1_IRQ",.source = "MCSPI1",.description =
		"McSPI1 interrupt"},
	[61] = {.name = "MCSPI2_IRQ",.source = "MCSPI2",.description =
		"McSPI2 interrupt"},
	[62] = {.name = "MCAN_IRQ_INT0",.source = "MCAN",.description =
		"MCAN Interrupt 0(DRA76x only)"},
	[63] = {.name = "MCAN_IRQ_INT1",.source = "MCAN",.description =
		"MCAN Interrupt 1(DRA76x only)"},
	[64] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[65] = {.name = "UART4_IRQ",.source = "UART4",.description =
		"UART4 interrupt"},
	[66] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[67] = {.name = "UART1_IRQ",.source = "UART1",.description =
		"UART1 interrupt"},
	[68] = {.name = "UART2_IRQ",.source = "UART2",.description =
		"UART2 interrupt"},
	[69] = {.name = "UART3_IRQ",.source = "UART3",.description =
		"UART3 interrupt"},
	[70] = {.name = "PBIAS_IRQ",.source = "MMC1",.description =
		"PBIAS Cell MMC1 PBIAS interrupt (controlled via device Control Module)"},
	[71] = {.name = "USB1_IRQ_INTR0",.source = "USB1",.description =
		"USB1 interrupt 0"},
	[72] = {.name = "USB1_IRQ_INTR1",.source = "USB1",.description =
		"USB1 interrupt 1"},
	[73] = {.name = "USB2_IRQ_INTR0",.source = "USB2",.description =
		"USB2 interrupt 0"},
	[74] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[75] = {.name = "WD_TIMER2_IRQ",.source = "WD_TIMER2",.description =
		"WD_TIMER2 interrupt"},
	[76] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[77] = {.name = "DES3DES_IRQ_P",.source = "DES3DES",.description =
		"DES3DES public interrupt"},
	[78] = {.name = "MMC1_IRQ",.source = "MMC1",.description =
		"MMC1 interrupt"},
	[79] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[80] = {.name = "AES1_IRQ_P",.source = "AES1",.description =
		"AES1 public interrupt"},
	[81] = {.name = "MMC2_IRQ",.source = "MMC2",.description =
		"MMC2 interrupt"},
	[82] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[83] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[84] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[85] = {.name = "DEBUGSS_IRQ_CT_UART",.source = "DEBUGSS",.description =
		"CT_UART interrupt generated when data ready on RX or when TX empty"},
	[86] = {.name = "MCSPI3_IRQ",.source = "MCSPI3",.description =
		"McSPI3 interrupt"},
	[87] = {.name = "USB2_IRQ_INTR1",.source = "USB2",.description =
		"USB2 interrupt 1"},
	[88] = {.name = "USB3_IRQ_INTR0",.source = "USB3",.description =
		"USB3 interrupt 0"},
	[89] = {.name = "MMC3_IRQ",.source = "MMC3",.description =
		"MMC3 interrupt"},
	[90] = {.name = "TIMER12_IRQ",.source = "TIMER12",.description =
		"TIMER12 interrupt"},
	[91] = {.name = "MMC4_IRQ",.source = "MMC4",.description =
		"MMC4 interrupt"},
	[92] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[93] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[94] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[95] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[96] = {.name = "HDMI_IRQ",.source = "HDMI",.description =
		"HDMI interrupt"},
	[97] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[98] = {.name = "IVA_IRQ_SYNC_1",.source = "IVA",.description =
		"IVA ICONT2 sync interrupt"},
	[99] = {.name = "IVA_IRQ_SYNC_0",.source = "IVA",.description =
		"IVA ICONT1 sync interrupt"},
	[100] = {.name = "UART5_IRQ",.source = "UART5",.description =
		 "UART5 interrupt"},
	[101] = {.name = "UART6_IRQ",.source = "UART6",.description =
		 "UART6 interrupt"},
	[102] = {.name = "IVA_IRQ_MAILBOX_0",.source = "IVA",.description =
		 "IVA mailbox user 0 interrupt"},
	[103] = {.name = "McASP1_IRQ_AREVT",.source = "McASP1",.description =
		 "McASP1 receive interrupt"},
	[104] = {.name = "McASP1_IRQ_AXEVT",.source = "McASP1",.description =
		 "McASP1 transmit interrupt"},
	[105] = {.name = "EMIF1_IRQ",.source = "EMIF1",.description =
		 "EMIF1 interrupt"},
	[106] = {.name = "EMIF2_IRQ",.source = "EMIF2",.description =
		 "EMIF2 interrupt"},
	[107] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[108] = {.name = "DMM_IRQ",.source = "DMM",.description =
		 "DMM interrupt"},
	[109] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[110] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[111] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[112] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[113] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[114] = {.name = "EXT_SYS_IRQ_2",.source = "External",.description =
		 "system External interrupt (active low) via sys_nirq2 pin"},
	[115] = {.name = "KBD_IRQ",.source = "KBD",.description =
		 "Keyboard controller interrupt"},
	[116] = {.name = "GPIO8_IRQ_1",.source = "GPIO8",.description =
		 "GPIO8 interrupt 1"},
	[117] = {.name = "MCAN_IRQ_PARITY",.source = "MCAN",.description =
		 "MCAN parity error interrupt(DRA76x only)"},
	[118] = {.name = "MCAN_IRQ_TS",.source = "MCAN",.description =
		 "MCAN timestamp interrupt(DRA76x only)"},
	[119] = {.name = "CAL_IRQ",.source = "CAL",.description =
		 "CAL Interrupt (DRA72x only)"},
	[120] = {.name = "BB2D_IRQ",.source = "BB2D",.description =
		 "BB2D interrupt"},
	[121] = {.name = "CTRL_MODULE_CORE_IRQ_THERMAL_ALERT",.source =
		 "CTRL_MODULE",.description =
		 "CTRL_MODULE thermal alert interrupt"},
	[122] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[123] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[124] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[125] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[126] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[127] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[128] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[129] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[130] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[131] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[132] = {.name = "IVA_IRQ_MAILBOX_2",.source = "IVA",.description =
		 "IVA mailbox user 2 interrupt"},
	[133] = {.name = "PRM_IRQ_IPU1",.source = "PRM",.description =
		 "PRCM interrupt to IPU1"},
	[134] = {.name = "MAILBOX1_IRQ_USER2",.source =
		 "MAILBOX1",.description = "Mailbox 1 user 2 interrupt"},
	[135] = {.name = "MAILBOX1_IRQ_USER1",.source =
		 "MAILBOX1",.description = "Mailbox 1 user 1 interrupt"},
	[136] = {.name = "IVA_IRQ_MAILBOX_1",.source = "IVA",.description =
		 "IVA mailbox user 1 interrupt"},
	[137] = {.name = "PRM_IRQ_DSP1",.source = "PRM",.description =
		 "PRCM interrupt to DSP1"},
	[138] = {.name = "GPIO1_IRQ_2",.source = "GPIO1",.description =
		 "GPIO1 interrupt 2"},
	[139] = {.name = "GPIO2_IRQ_2",.source = "GPIO2",.description =
		 "GPIO2 interrupt 2"},
	[140] = {.name = "GPIO3_IRQ_2",.source = "GPIO3",.description =
		 "GPIO3 interrupt 2"},
	[141] = {.name = "GPIO4_IRQ_2",.source = "GPIO4",.description =
		 "GPIO4 interrupt 2"},
	[142] = {.name = "GPIO5_IRQ_2",.source = "GPIO5",.description =
		 "GPIO5 interrupt 2"},
	[143] = {.name = "GPIO6_IRQ_2",.source = "GPIO6",.description =
		 "GPIO6 interrupt 2"},
	[144] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[145] = {.name = "DSP1_IRQ_MMU1",.source = "DSP1",.description =
		 "DSP1 MMU1 interrupt"},
	[146] = {.name = "DSP2_IRQ_MMU0",.source = "DSP2",.description =
		 "DSP2 MMU0 interrupt"},
	[147] = {.name = "DSP2_IRQ_MMU1",.source = "DSP2",.description =
		 "DSP2 MMU1 interrupt"},
	[148] = {.name = "McASP2_IRQ_AREVT",.source = "McASP2",.description =
		 "McASP2 receive interrupt"},
	[149] = {.name = "McASP2_IRQ_AXEVT",.source = "McASP2",.description =
		 "McASP2 transmit interrupt"},
	[150] = {.name = "McASP3_IRQ_AREVT",.source = "McASP3",.description =
		 "McASP3 receive interrupt"},
	[151] = {.name = "McASP3_IRQ_AXEVT",.source = "McASP3",.description =
		 "McASP3 transmit interrupt"},
	[152] = {.name = "McASP4_IRQ_AREVT",.source = "McASP4",.description =
		 "McASP4 receive interrupt"},
	[153] = {.name = "McASP4_IRQ_AXEVT",.source = "McASP4",.description =
		 "McASP4 transmit interrupt"},
	[154] = {.name = "McASP5_IRQ_AREVT",.source = "McASP5",.description =
		 "McASP5 receive interrupt"},
	[155] = {.name = "McASP5_IRQ_AXEVT",.source = "McASP5",.description =
		 "McASP5 transmit interrupt"},
	[156] = {.name = "McASP6_IRQ_AREVT",.source = "McASP6",.description =
		 "McASP6 receive interrupt"},
	[157] = {.name = "McASP6_IRQ_AXEVT",.source = "McASP6",.description =
		 "McASP6 transmit interrupt"},
	[158] = {.name = "McASP7_IRQ_AREVT",.source = "McASP7",.description =
		 "McASP7 receive interrupt"},
	[159] = {.name = "McASP7_IRQ_AXEVT",.source = "McASP7",.description =
		 "McASP7 transmit interrupt"},
	[160] = {.name = "McASP8_IRQ_AREVT",.source = "McASP8",.description =
		 "McASP8 receive interrupt"},
	[161] = {.name = "McASP8_IRQ_AXEVT",.source = "McASP8",.description =
		 "McASP8 transmit interrupt"},
	[162] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[163] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[164] = {.name = "OCMC_RAM1_IRQ",.source = "OCMC_RAM1",.description =
		 "OCMC_RAM1 interrupt"},
	[165] = {.name = "OCMC_RAM2_IRQ",.source = "OCMC_RAM2",.description =
		 "OCMC_RAM2 interrupt"},
	[166] = {.name = "OCMC_RAM3_IRQ",.source = "OCMC_RAM3",.description =
		 "OCMC_RAM3 interrupt"},
	[167] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[168] = {.name = "EVE1_IRQ_OUT0",.source = "EVE1",.description =
		 "EVE1 output interrupt 0"},
	[169] = {.name = "EVE1_IRQ_OUT1",.source = "EVE1",.description =
		 "EVE1 output interrupt 1"},
	[170] = {.name = "EVE1_IRQ_OUT2",.source = "EVE1",.description =
		 "EVE1 output interrupt 2"},
	[171] = {.name = "EVE1_IRQ_OUT3",.source = "EVE1",.description =
		 "EVE1 output interrupt 3"},
	[172] = {.name = "EVE2_IRQ_OUT0",.source = "EVE2",.description =
		 "EVE2 output interrupt 0"},
	[173] = {.name = "EVE2_IRQ_OUT1",.source = "EVE2",.description =
		 "EVE2 output interrupt 1"},
	[174] = {.name = "EVE2_IRQ_OUT2",.source = "EVE2",.description =
		 "EVE2 output interrupt 2"},
	[175] = {.name = "EVE2_IRQ_OUT3",.source = "EVE2",.description =
		 "EVE2 output interrupt 3"},
	[176] = {.name = "ISS_IRQ0",.source = "ISS",.description =
		 "ISS Interrupt 0 (DRA76x only)"},
	[177] = {.name = "ISS_IRQ1",.source = "ISS",.description =
		 "ISS Interrupt 1 (DRA76x only)"},
	[178] = {.name = "ISS_IRQ2",.source = "ISS",.description =
		 "ISS Interrupt 2 (DRA76x only)"},
	[179] = {.name = "ISS_IRQ3",.source = "ISS",.description =
		 "ISS Interrupt 3 (DRA76x only)"},
	[180] = {.name = "ISS_IRQ4",.source = "ISS",.description =
		 "ISS Interrupt 4 (DRA76x only)"},
	[181] = {.name = "ISS_IRQ5",.source = "ISS",.description =
		 "ISS Interrupt 5 (DRA76x only)"},
	[182] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[183] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[184] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[185] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[186] = {.name = "PRUSS1_IRQ_HOST2",.source = "PRU_ICSS1",.description =
		 "PRU-ICSS1 host interrupt 2 (AM57xx only)"},
	[187] = {.name = "PRUSS1_IRQ_HOST3",.source = "PRU_ICSS1",.description =
		 "PRU-ICSS1 host interrupt 3 (AM57xx only)"},
	[188] = {.name = "PRUSS1_IRQ_HOST4",.source = "PRU_ICSS1",.description =
		 "PRU-ICSS1 host interrupt 4 (AM57xx only)"},
	[189] = {.name = "PRUSS1_IRQ_HOST5",.source = "PRU_ICSS1",.description =
		 "PRU-ICSS1 host interrupt 5 (AM57xx only)"},
	[190] = {.name = "PRUSS1_IRQ_HOST6",.source = "PRU_ICSS1",.description =
		 "PRU-ICSS1 host interrupt 6 (AM57xx only)"},
	[191] = {.name = "PRUSS1_IRQ_HOST7",.source = "PRU_ICSS1",.description =
		 "PRU-ICSS1 host interrupt 7 (AM57xx only)"},
	[192] = {.name = "PRUSS1_IRQ_HOST8",.source = "PRU_ICSS1",.description =
		 "PRU-ICSS1 host interrupt 8 (AM57xx only)"},
	[193] = {.name = "PRUSS1_IRQ_HOST9",.source = "PRU_ICSS1",.description =
		 "PRU-ICSS1 host interrupt 9 (AM57xx only)"},
	[194] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[195] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[196] = {.name = "PRUSS2_IRQ_HOST2",.source = "PRU_ICSS2",.description =
		 "PRU-ICSS2 host interrupt 2 (AM57xx only)"},
	[197] = {.name = "PRUSS2_IRQ_HOST3",.source = "PRU_ICSS2",.description =
		 "PRU-ICSS2 host interrupt 3 (AM57xx only)"},
	[198] = {.name = "PRUSS2_IRQ_HOST4",.source = "PRU_ICSS2",.description =
		 "PRU-ICSS2 host interrupt 4 (AM57xx only)"},
	[199] = {.name = "PRUSS2_IRQ_HOST5",.source = "PRU_ICSS2",.description =
		 "PRU-ICSS2 host interrupt 5 (AM57xx only)"},
	[200] = {.name = "PRUSS2_IRQ_HOST6",.source = "PRU_ICSS2",.description =
		 "PRU-ICSS2 host interrupt 6 (AM57xx only)"},
	[201] = {.name = "PRUSS2_IRQ_HOST7",.source = "PRU_ICSS2",.description =
		 "PRU-ICSS2 host interrupt 7 (AM57xx only)"},
	[202] = {.name = "PRUSS2_IRQ_HOST8",.source = "PRU_ICSS2",.description =
		 "PRU-ICSS2 host interrupt 8 (AM57xx only)"},
	[203] = {.name = "PRUSS2_IRQ_HOST9",.source = "PRU_ICSS2",.description =
		 "PRU-ICSS2 host interrupt 9 (AM57xx only)"},
	[204] = {.name = "PWMSS1_IRQ_ePWM0_TZINT",.source =
		 "PWMSS1",.description = "eHRPWM0 TZ interrupt"},
	[205] = {.name = "PWMSS2_IRQ_ePWM1_TZINT",.source =
		 "PWMSS2",.description = "eHRPWM1 TZ interrupt"},
	[206] = {.name = "PWMSS3_IRQ_ePWM2_TZINT",.source =
		 "PWMSS3",.description = "eHRPWM2 TZ interrupt"},
	[207] = {.name = "PWMSS1_IRQ_ePWM0INT",.source = "PWMSS1",.description =
		 "eHRPWM0 event/interrupt"},
	[208] = {.name = "PWMSS2_IRQ_ePWM1INT",.source = "PWMSS2",.description =
		 "eHRPWM1 event/interrupt"},
	[209] = {.name = "PWMSS3_IRQ_ePWM2INT",.source = "PWMSS3",.description =
		 "eHRPWM2 event/interrupt"},
	[210] = {.name = "PWMSS1_IRQ_eQEP0INT",.source = "PWMSS1",.description =
		 "eQEP0 event/interrupt"},
	[211] = {.name = "PWMSS2_IRQ_eQEP1INT",.source = "PWMSS2",.description =
		 "eQEP1 event/interrupt"},
	[212] = {.name = "PWMSS3_IRQ_eQEP2INT",.source = "PWMSS3",.description =
		 "eQEP2 event/interrupt"},
	[213] = {.name = "PWMSS1_IRQ_eCAP0INT",.source = "PWMSS1",.description =
		 "eCAP0 event/interrupt"},
	[214] = {.name = "PWMSS2_IRQ_eCAP1INT",.source = "PWMSS2",.description =
		 "eCAP1 event/interrupt"},
	[215] = {.name = "PWMSS3_IRQ_eCAP2INT",.source = "PWMSS3",.description =
		 "eCAP2 event/interrupt"},
	[216] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[217] = {.name = "RTC_SS_IRQ_ALARM",.source = "RTC_SS",.description =
		 "RTC_SS alarm interrupt"},
	[218] = {.name = "UART7_IRQ",.source = "UART7",.description =
		 "UART7 interrupt"},
	[219] = {.name = "UART8_IRQ",.source = "UART8",.description =
		 "UART8 interrupt"},
	[220] = {.name = "UART9_IRQ",.source = "UART9",.description =
		 "UART9 interrupt"},
	[221] = {.name = "UART10_IRQ",.source = "UART10",.description =
		 "UART10 interrupt"},
	[222] = {.name = "DCAN1_IRQ_INT0",.source = "DCAN1",.description =
		 "DCAN1 interrupt 0"},
	[223] = {.name = "DCAN1_IRQ_INT1",.source = "DCAN1",.description =
		 "DCAN1 interrupt 1"},
	[224] = {.name = "DCAN1_IRQ_PARITY",.source = "DCAN1",.description =
		 "DCAN1 parity interrupt"},
	[225] = {.name = "DCAN2_IRQ_INT0",.source = "DCAN2",.description =
		 "DCAN2 interrupt 0"},
	[226] = {.name = "DCAN2_IRQ_INT1",.source = "DCAN2",.description =
		 "DCAN2 interrupt 1"},
	[227] = {.name = "DCAN2_IRQ_PARITY",.source = "DCAN2",.description =
		 "DCAN2 parity interrupt"},
	[228] = {.name = "MLB_IRQ_SYS_INT0",.source = "MLB",.description =
		 "MLB sys interrupt 0"},
	[229] = {.name = "MLB_IRQ_SYS_INT1",.source = "MLB",.description =
		 "MLB sys interrupt 1"},
	[230] = {.name = "VCP1_IRQ_INT",.source = "VCP1",.description =
		 "VCP1 interrupt"},
	[231] = {.name = "VCP2_IRQ_INT",.source = "VCP2",.description =
		 "VCP2 interrupt"},
	[232] = {.name = "PCIe_SS1_IRQ_INT0",.source = "PCIe_SS1",.description =
		 "PCIe_SS1 interrupt 0"},
	[233] = {.name = "PCIe_SS1_IRQ_INT1",.source = "PCIe_SS1",.description =
		 "PCIe_SS1 interrupt 1"},
	[234] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[235] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[236] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[237] = {.name = "MAILBOX2_IRQ_USER0",.source =
		 "MAILBOX2",.description = "Mailbox 2 user 0 interrupt"},
	[238] = {.name = "MAILBOX2_IRQ_USER1",.source =
		 "MAILBOX2",.description = "Mailbox 2 user 1 interrupt"},
	[239] = {.name = "MAILBOX2_IRQ_USER2",.source =
		 "MAILBOX2",.description = "Mailbox 2 user 2 interrupt"},
	[240] = {.name = "MAILBOX2_IRQ_USER3",.source =
		 "MAILBOX2",.description = "Mailbox 2 user 3 interrupt"},
	[241] = {.name = "MAILBOX3_IRQ_USER0",.source =
		 "MAILBOX3",.description = "Mailbox 3 user 0 interrupt"},
	[242] = {.name = "MAILBOX3_IRQ_USER1",.source =
		 "MAILBOX3",.description = "Mailbox 3 user 1 interrupt"},
	[243] = {.name = "MAILBOX3_IRQ_USER2",.source =
		 "MAILBOX3",.description = "Mailbox 3 user 2 interrupt"},
	[244] = {.name = "MAILBOX3_IRQ_USER3",.source =
		 "MAILBOX3",.description = "Mailbox 3 user 3 interrupt"},
	[245] = {.name = "MAILBOX4_IRQ_USER0",.source =
		 "MAILBOX4",.description = "Mailbox 4 user 0 interrupt"},
	[246] = {.name = "MAILBOX4_IRQ_USER1",.source =
		 "MAILBOX4",.description = "Mailbox 4 user 1 interrupt"},
	[247] = {.name = "MAILBOX4_IRQ_USER2",.source =
		 "MAILBOX4",.description = "Mailbox 4 user 2 interrupt"},
	[248] = {.name = "MAILBOX4_IRQ_USER3",.source =
		 "MAILBOX4",.description = "Mailbox 4 user 3 interrupt"},
	[249] = {.name = "MAILBOX5_IRQ_USER0",.source =
		 "MAILBOX5",.description = "Mailbox 5 user 0 interrupt"},
	[250] = {.name = "MAILBOX5_IRQ_USER1",.source =
		 "MAILBOX5",.description = "Mailbox 5 user 1 interrupt"},
	[251] = {.name = "MAILBOX5_IRQ_USER2",.source =
		 "MAILBOX5",.description = "Mailbox 5 user 2 interrupt"},
	[252] = {.name = "MAILBOX5_IRQ_USER3",.source =
		 "MAILBOX5",.description = "Mailbox 5 user 3 interrupt"},
	[253] = {.name = "MAILBOX6_IRQ_USER0",.source =
		 "MAILBOX6",.description = "Mailbox 6 user 0 interrupt"},
	[254] = {.name = "MAILBOX6_IRQ_USER1",.source =
		 "MAILBOX6",.description = "Mailbox 6 user 1 interrupt"},
	[255] = {.name = "MAILBOX6_IRQ_USER2",.source =
		 "MAILBOX6",.description = "Mailbox 6 user 2 interrupt"},
	[256] = {.name = "MAILBOX6_IRQ_USER3",.source =
		 "MAILBOX6",.description = "Mailbox 6 user 3 interrupt"},
	[257] = {.name = "MAILBOX7_IRQ_USER0",.source =
		 "MAILBOX7",.description = "Mailbox 7 user 0 interrupt"},
	[258] = {.name = "MAILBOX7_IRQ_USER1",.source =
		 "MAILBOX7",.description = "Mailbox 7 user 1 interrupt"},
	[259] = {.name = "MAILBOX7_IRQ_USER2",.source =
		 "MAILBOX7",.description = "Mailbox 7 user 2 interrupt"},
	[260] = {.name = "MAILBOX7_IRQ_USER3",.source =
		 "MAILBOX7",.description = "Mailbox 7 user 3 interrupt"},
	[261] = {.name = "MAILBOX8_IRQ_USER0",.source =
		 "MAILBOX8",.description = "Mailbox 8 user 0 interrupt"},
	[262] = {.name = "MAILBOX8_IRQ_USER1",.source =
		 "MAILBOX8",.description = "Mailbox 8 user 1 interrupt"},
	[263] = {.name = "MAILBOX8_IRQ_USER2",.source =
		 "MAILBOX8",.description = "Mailbox 8 user 2 interrupt"},
	[264] = {.name = "MAILBOX8_IRQ_USER3",.source =
		 "MAILBOX8",.description = "Mailbox 8 user 3 interrupt"},
	[265] = {.name = "MAILBOX9_IRQ_USER0",.source =
		 "MAILBOX9",.description = "Mailbox 9 user 0 interrupt"},
	[266] = {.name = "MAILBOX9_IRQ_USER1",.source =
		 "MAILBOX9",.description = "Mailbox 9 user 1 interrupt"},
	[267] = {.name = "MAILBOX9_IRQ_USER2",.source =
		 "MAILBOX9",.description = "Mailbox 9 user 2 interrupt"},
	[268] = {.name = "MAILBOX9_IRQ_USER3",.source =
		 "MAILBOX9",.description = "Mailbox 9 user 3 interrupt"},
	[269] = {.name = "MAILBOX10_IRQ_USER0",.source =
		 "MAILBOX10",.description = "Mailbox 10 user 0 interrupt"},
	[270] = {.name = "MAILBOX10_IRQ_USER1",.source =
		 "MAILBOX10",.description = "Mailbox 10 user 1 interrupt"},
	[271] = {.name = "MAILBOX10_IRQ_USER2",.source =
		 "MAILBOX10",.description = "Mailbox 10 user 2 interrupt"},
	[272] = {.name = "MAILBOX10_IRQ_USER3",.source =
		 "MAILBOX10",.description = "Mailbox 10 user 3 interrupt"},
	[273] = {.name = "MAILBOX11_IRQ_USER0",.source =
		 "MAILBOX11",.description = "Mailbox 11 user 0 interrupt"},
	[274] = {.name = "MAILBOX11_IRQ_USER1",.source =
		 "MAILBOX11",.description = "Mailbox 11 user 1 interrupt"},
	[275] = {.name = "MAILBOX11_IRQ_USER2",.source =
		 "MAILBOX11",.description = "Mailbox 11 user 2 interrupt"},
	[276] = {.name = "MAILBOX11_IRQ_USER3",.source =
		 "MAILBOX11",.description = "Mailbox 11 user 3 interrupt"},
	[277] = {.name = "MAILBOX12_IRQ_USER0",.source =
		 "MAILBOX12",.description = "Mailbox 12 user 0 interrupt"},
	[278] = {.name = "MAILBOX12_IRQ_USER1",.source =
		 "MAILBOX12",.description = "Mailbox 12 user 1 interrupt"},
	[279] = {.name = "MAILBOX12_IRQ_USER2",.source =
		 "MAILBOX12",.description = "Mailbox 12 user 2 interrupt"},
	[280] = {.name = "MAILBOX12_IRQ_USER3",.source =
		 "MAILBOX12",.description = "Mailbox 12 user 3 interrupt"},
	[281] = {.name = "EVE1_IRQ_TPCC_REGION1",.source = "EVE1",.description =
		 "EVE1 TPCC region 1 interrupt"},
	[282] = {.name = "EVE1_IRQ_TPCC_REGION2",.source = "EVE1",.description =
		 "EVE1 TPCC region 2 interrupt"},
	[283] = {.name = "EVE1_IRQ_TPCC_REGION3",.source = "EVE1",.description =
		 "EVE1 TPCC region 3 interrupt"},
	[284] = {.name = "EVE1_IRQ_MBX0_USER1",.source = "EVE1",.description =
		 "EVE1 mailbox 0 user 1 interrupt"},
	[285] = {.name = "EVE1_IRQ_MBX0_USER2",.source = "EVE1",.description =
		 "EVE1 mailbox 0 user 2 interrupt"},
	[286] = {.name = "EVE1_IRQ_MBX0_USER3",.source = "EVE1",.description =
		 "EVE1 mailbox 0 user 3 interrupt"},
	[287] = {.name = "EVE1_IRQ_MBX1_USER1",.source = "EVE1",.description =
		 "EVE1 mailbox 1 user 1 interrupt"},
	[288] = {.name = "EVE1_IRQ_MBX1_USER2",.source = "EVE1",.description =
		 "EVE1 mailbox 1 user 2 interrupt"},
	[289] = {.name = "EVE1_IRQ_MBX1_USER3",.source = "EVE1",.description =
		 "EVE1 mailbox 1 user 3 interrupt"},
	[290] = {.name = "EVE2_IRQ_TPCC_REGION1",.source = "EVE2",.description =
		 "EVE2 TPCC region 1 interrupt"},
	[291] = {.name = "EVE2_IRQ_TPCC_REGION2",.source = "EVE2",.description =
		 "EVE2 TPCC region 2 interrupt"},
	[292] = {.name = "EVE2_IRQ_TPCC_REGION3",.source = "EVE2",.description =
		 "EVE2 TPCC region 3 interrupt"},
	[293] = {.name = "EVE2_IRQ_MBX0_USER1",.source = "EVE2",.description =
		 "EVE2 mailbox 0 user 1 interrupt"},
	[294] = {.name = "EVE2_IRQ_MBX0_USER2",.source = "EVE2",.description =
		 "EVE2 mailbox 0 user 2 interrupt"},
	[295] = {.name = "EVE2_IRQ_MBX0_USER3",.source = "EVE2",.description =
		 "EVE2 mailbox 0 user 3 interrupt"},
	[296] = {.name = "EVE2_IRQ_MBX1_USER1",.source = "EVE2",.description =
		 "EVE2 mailbox 1 user 1 interrupt"},
	[297] = {.name = "EVE2_IRQ_MBX1_USER2",.source = "EVE2",.description =
		 "EVE2 mailbox 1 user 2 interrupt"},
	[298] = {.name = "EVE2_IRQ_MBX1_USER3",.source = "EVE2",.description =
		 "EVE2 mailbox 1 user 3 interrupt"},
	[299] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[300] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[301] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[302] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[303] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[304] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[305] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[306] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[307] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[308] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[309] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[310] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[311] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[312] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[313] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[314] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[315] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[316] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[317] = {.name = "DSP1_IRQ_DSP_ERR",.source = "DSP1",.description =
		 "DSP1 TPCC error interrupt"},
	[318] = {.name = "DSP1_IRQ_TPCC_GLOBAL",.source = "DSP1",.description =
		 "DSP1 TPCC global interrupt"},
	[319] = {.name = "DSP1_IRQ_TPCC_REGION0",.source = "DSP1",.description =
		 "DSP1 TPCC region 0 interrupt"},
	[320] = {.name = "DSP1_IRQ_TPCC_REGION1",.source = "DSP1",.description =
		 "DSP1 TPCC region 1 interrupt"},
	[321] = {.name = "DSP1_IRQ_TPCC_REGION2",.source = "DSP1",.description =
		 "DSP1 TPCC region 2 interrupt"},
	[322] = {.name = "DSP1_IRQ_TPCC_REGION3",.source = "DSP1",.description =
		 "DSP1 TPCC region 3 interrupt"},
	[323] = {.name = "DSP1_IRQ_TPCC_REGION4",.source = "DSP1",.description =
		 "DSP1 TPCC region 4 interrupt"},
	[324] = {.name = "DSP1_IRQ_TPCC_REGION5",.source = "DSP1",.description =
		 "DSP1 TPCC region 5 interrupt"},
	[325] = {.name = "DSP2_IRQ_DSP_ERR",.source = "DSP2",.description =
		 "DSP2 TPCC error interrupt"},
	[326] = {.name = "DSP2_IRQ_TPCC_GLOBAL",.source = "DSP2",.description =
		 "DSP2 TPCC global interrupt"},
	[327] = {.name = "DSP2_IRQ_TPCC_REGION0",.source = "DSP2",.description =
		 "DSP2 TPCC region 0 interrupt"},
	[328] = {.name = "DSP2_IRQ_TPCC_REGION1",.source = "DSP2",.description =
		 "DSP2 TPCC region 1 interrupt"},
	[329] = {.name = "DSP2_IRQ_TPCC_REGION2",.source = "DSP2",.description =
		 "DSP2 TPCC region 2 interrupt"},
	[330] = {.name = "DSP2_IRQ_TPCC_REGION3",.source = "DSP2",.description =
		 "DSP2 TPCC region 3 interrupt"},
	[331] = {.name = "DSP2_IRQ_TPCC_REGION4",.source = "DSP2",.description =
		 "DSP2 TPCC region 4 interrupt"},
	[332] = {.name = "DSP2_IRQ_TPCC_REGION5",.source = "DSP2",.description =
		 "DSP2 TPCC region 5 interrupt"},
	[333] = {.name = "MMU1_IRQ",.source = "MMU1",.description =
		 "Top level MMU1 interrupt"},
	[334] = {.name = "GMAC_SW_IRQ_RX_THRESH_PULSE",.source =
		 "GMAC_SW",.description =
		 "GMAC_SW receive threshold interrupt"},
	[335] = {.name = "GMAC_SW_IRQ_RX_PULSE",.source =
		 "GMAC_SW",.description = "GMAC_SW receive interrupt"},
	[336] = {.name = "GMAC_SW_IRQ_TX_PULSE",.source =
		 "GMAC_SW",.description = "GMAC_SW transmit interrupt"},
	[337] = {.name = "GMAC_SW_IRQ_MISC_PULSE",.source =
		 "GMAC_SW",.description = "GMAC_SW miscellaneous interrupt"},
	[338] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[339] = {.name = "TIMER13_IRQ",.source = "TIMER13",.description =
		 "TIMER13 interrupt"},
	[340] = {.name = "TIMER14_IRQ",.source = "TIMER14",.description =
		 "TIMER14 interrupt"},
	[341] = {.name = "TIMER15_IRQ",.source = "TIMER15",.description =
		 "TIMER15 interrupt"},
	[342] = {.name = "TIMER16_IRQ",.source = "TIMER16",.description =
		 "TIMER16 interrupt"},
	[343] = {.name = "QSPI_IRQ",.source = "QSPI",.description =
		 "QSPI interrupt"},
	[344] = {.name = "USB3_IRQ_INTR1",.source = "USB3",.description =
		 "USB3 interrupt 1"},
	[345] = {.name = "USB4_IRQ_INTR0",.source = "USB4",.description =
		 "USB4 interrupt 0"},
	[346] = {.name = "USB4_IRQ_INTR1",.source = "USB4",.description =
		 "USB4 interrupt 1"},
	[347] = {.name = "GPIO7_IRQ_2",.source = "GPIO7",.description =
		 "GPIO7 interrupt 2"},
	[348] = {.name = "GPIO8_IRQ_2",.source = "GPIO8",.description =
		 "GPIO8 interrupt 2"},
	[349] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[350] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[351] = {.name = "VIP1_IRQ_1",.source = "VIP1",.description =
		 "VIP1 interrupt 1"},
	[352] = {.name = "VIP2_IRQ_1",.source = "VIP2",.description =
		 "VIP2 interrupt 1"},
	[353] = {.name = "VIP3_IRQ_1/CAL_IRQ",.source =
		 "VIP3/CAL",.description =
		 "VIP3 interrupt 1 on DRA74x/CAL interrupt on DRA76x"},
	[354] = {.name = "VPE_IRQ",.source = "VPE",.description =
		 "VPE interrupt"},
	[355] = {.name = "PCIe_SS2_IRQ_INT0",.source = "PCIe_SS2",.description =
		 "PCIe_SS2 interrupt 0"},
	[356] = {.name = "PCIe_SS2_IRQ_INT1",.source = "PCIe_SS2",.description =
		 "PCIe_SS2 interrupt 1"},
	[357] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[358] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[359] = {.name = "EDMA_TPCC_IRQ_ERR",.source = "EDMA",.description =
		 "TPCC EDMA TPCC error interrupt"},
	[360] = {.name = "EDMA_TPCC_IRQ_MP",.source = "EDMA",.description =
		 "TPCC EDMA TPCC memory protection interrupt"},
	[361] = {.name = "EDMA_TPCC_IRQ_REGION0",.source = "EDMA",.description =
		 "TPCC EDMA TPCC region 0 interrupt"},
	[362] = {.name = "EDMA_TPCC_IRQ_REGION1",.source = "EDMA",.description =
		 "TPCC EDMA TPCC region 1 interrupt"},
	[363] = {.name = "EDMA_TPCC_IRQ_REGION2",.source = "EDMA",.description =
		 "TPCC EDMA TPCC region 2 interrupt"},
	[364] = {.name = "EDMA_TPCC_IRQ_REGION3",.source = "EDMA",.description =
		 "TPCC EDMA TPCC region 3 interrupt"},
	[365] = {.name = "EDMA_TPCC_IRQ_REGION4",.source = "EDMA",.description =
		 "TPCC EDMA TPCC region 4 interrupt"},
	[366] = {.name = "EDMA_TPCC_IRQ_REGION5",.source = "EDMA",.description =
		 "TPCC EDMA TPCC region 5 interrupt"},
	[367] = {.name = "EDMA_TPCC_IRQ_REGION6",.source = "EDMA",.description =
		 "TPCC EDMA TPCC region 6 interrupt"},
	[368] = {.name = "EDMA_TPCC_IRQ_REGION7",.source = "EDMA",.description =
		 "TPCC EDMA TPCC region 7 interrupt"},
	[369] = {.name = "MMU2_IRQ",.source = "MMU2",.description =
		 "Top level MMU2 interrupt"},
	[370] = {.name = "EDMA_TC0_IRQ_ERR",.source = "EDMA",.description =
		 "TC0 EDMA TPTC0 error interrupt"},
	[371] = {.name = "EDMA_TC1_IRQ_ERR",.source = "EDMA",.description =
		 "TC1 EDMA TPTC1 error interrupt"},
	[372] = {.name = "OCMC_RAM1_IRQ_CBUF",.source =
		 "OCMC_RAM1",.description = "OCMC_RAM1 CBUF interrupt"},
	[373] = {.name = "OCMC_RAM2_IRQ_CBUF",.source =
		 "OCMC_RAM2",.description = "OCMC_RAM2 CBUF interrupt"},
	[374] = {.name = "OCMC_RAM3_IRQ_CBUF",.source =
		 "OCMC_RAM3",.description = "OCMC_RAM3 CBUF interrupt"},
	[375] = {.name = "DSP1_IRQ_TPCC_REGION6",.source = "DSP1",.description =
		 "DSP1 TPCC region 6 interrupt"},
	[376] = {.name = "DSP1_IRQ_TPCC_REGION7",.source = "DSP1",.description =
		 "DSP1 TPCC region 7 interrupt"},
	[377] = {.name = "DSP2_IRQ_TPCC_REGION6",.source = "DSP2",.description =
		 "DSP2 TPCC region 6 interrupt"},
	[378] = {.name = "DSP2_IRQ_TPCC_REGION7",.source = "DSP2",.description =
		 "DSP2 TPCC region 7 interrupt"},
	[379] = {.name = "MAILBOX13_IRQ_USER0",.source =
		 "MAILBOX13",.description = "Mailbox 13 user 0 interrupt"},
	[380] = {.name = "MAILBOX13_IRQ_USER1",.source =
		 "MAILBOX13",.description = "Mailbox 13 user 1 interrupt"},
	[381] = {.name = "MAILBOX13_IRQ_USER2",.source =
		 "MAILBOX13",.description = "Mailbox 13 user 2 interrupt"},
	[382] = {.name = "MAILBOX13_IRQ_USER3",.source =
		 "MAILBOX13",.description = "Mailbox 13 user 3 interrupt"},
	[383] = {.name = "SMARTREFLEX_DSPEVE_IRQ",.source =
		 "SMARTREFLEX_DSPEVE",.description =
		 "SMARTREFLEX_DSPEVE interrupt"},
	[384] = {.name = "SMARTREFLEX_GPU_IRQ",.source =
		 "SMARTREFLEX_GPU",.description = "SMARTREFLEX_GPU interrupt"},
	[385] = {.name = "SMARTREFLEX_IVA_IRQ",.source =
		 "SMARTREFLEX_IVA",.description = "SMARTREFLEX_IVA interrupt"},
	[386] = {.name = "PRM_IRQ_IPU2",.source = "PRM",.description =
		 "PRCM interrupt to IPU2"},
	[387] = {.name = "PRM_IRQ_DSP2",.source = "PRM",.description =
		 "PRCM interrupt to DSP2"},
	[388] = {.name = "PRM_IRQ_EVE1",.source = "PRM",.description =
		 "PRCM interrupt to EVE1"},
	[389] = {.name = "PRM_IRQ_EVE2",.source = "PRM",.description =
		 "PRCM interrupt to EVE2"},
	[390] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[391] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[392] = {.name = "VIP1_IRQ_2",.source = "VIP1",.description =
		 "VIP1 interrupt 2"},
	[393] = {.name = "VIP2_IRQ_2",.source = "VIP2",.description =
		 "VIP2 interrupt 2"},
	[394] = {.name = "VIP3_IRQ_2",.source = "VIP3",.description =
		 "VIP3 interrupt 2"},
	[395] = {.name = "IPU1_IRQ_MMU",.source = "IPU1",.description =
		 "IPU1 MMU interrupt"},
	[396] = {.name = "IPU2_IRQ_MMU",.source = "IPU2",.description =
		 "IPU2 MMU interrupt"},
	[397] = {.name = "MLB_IRQ",.source = "MLB",.description =
		 "MLB interrupt"},
	[398] = {.name = "EVE1_IRQ_TPCC_REGION4",.source = "EVE1",.description =
		 "EVE1 TPCC region 4 interrupt"},
	[399] = {.name = "EVE2_IRQ_TPCC_REGION4",.source = "EVE2",.description =
		 "EVE2 TPCC region 4 interrupt"},
	[400] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[401] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[402] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[403] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[404] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[405] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[406] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[407] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[408] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[409] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[410] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[411] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[412] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[413] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[414] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[415] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[416] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[417] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[418] = {.name = "reserved",.source = "reserved",.description = "N/A"},
	[419] = {.name = "reserved",.source = "reserved",.description = "N/A"},
};

/* MODULE set */
static struct cross_bar_module_input dra7_mpu_irq_crossbar[] = {
	[0] = {.reg = 0x00000000,.input = -1,.name =
	       "MPU_CLUSTER_IRQ_INTERR",.source = "MPU_CLUSTER",.description =
	       "Illegal writes to interrupt controller memory map region"},
	[1] = {.reg = 0x00000000,.input = -1,.name =
	       "CS_CTI_MPU_C0_IRQ",.source = "MPU_C0_CS_CTI",.description =
	       "TRIGOUT[6] of Cross Trigger Interface 0 (CTI0)"},
	[2] = {.reg = 0x00000000,.input = -1,.name =
	       "CS_CTI_MPU_C1_IRQ",.source = "MPU_C1_CS_CTI",.description =
	       "TRIGOUT[6] of Cross Trigger Interface 1 (CTI1)"},
	[3] = {.reg = 0x00000000,.input = -1,.name =
	       "MPU_CLUSTER_IRQ_AXIERR",.source = "MPU_CLUSTER",.description =
	       "Error indication for AXI write transactions with a BRESP error condition"},
	[4] = {.reg = 0x4A002A48,.input = 1,.name = NULL,.source =
	       NULL,.description = NULL},
	[5] = {.reg = 0x00000000,.input = -1,.name =
	       "WD_TIMER_MPU_C0_IRQ_WARN",.source =
	       "MPU_WD_TIMER",.description =
	       "MPU_WD_TIMER channel 0 warning interrupt"},
	[6] = {.reg = 0x00000000,.input = -1,.name =
	       "WD_TIMER_MPU_C1_IRQ_WARN",.source =
	       "MPU_WD_TIMER",.description =
	       "MPU_WD_TIMER channel 1 warning interrupt"},
	[7] = {.reg = 0x4A002A4A,.input = 2,.name = NULL,.source =
	       NULL,.description = NULL},
	[8] = {.reg = 0x4A002A4C,.input = 3,.name = NULL,.source =
	       NULL,.description = NULL},
	[9] = {.reg = 0x4A002A4E,.input = 4,.name = NULL,.source =
	       NULL,.description = NULL},
	[10] = {.reg = 0x4A002A50,.input = 5,.name = NULL,.source =
		NULL,.description = NULL},
	[11] = {.reg = 0x4A002A52,.input = 6,.name = NULL,.source =
		NULL,.description = NULL},
	[12] = {.reg = 0x4A002A54,.input = 7,.name = NULL,.source =
		NULL,.description = NULL},
	[13] = {.reg = 0x4A002A56,.input = 8,.name = NULL,.source =
		NULL,.description = NULL},
	[14] = {.reg = 0x4A002A58,.input = 9,.name = NULL,.source =
		NULL,.description = NULL},
	[15] = {.reg = 0x4A002A5A,.input = 10,.name = NULL,.source =
		NULL,.description = NULL},
	[16] = {.reg = 0x4A002A5C,.input = 11,.name = NULL,.source =
		NULL,.description = NULL},
	[17] = {.reg = 0x4A002A5E,.input = 12,.name = NULL,.source =
		NULL,.description = NULL},
	[18] = {.reg = 0x4A002A60,.input = 13,.name = NULL,.source =
		NULL,.description = NULL},
	[19] = {.reg = 0x4A002A62,.input = 14,.name = NULL,.source =
		NULL,.description = NULL},
	[20] = {.reg = 0x4A002A64,.input = 15,.name = NULL,.source =
		NULL,.description = NULL},
	[21] = {.reg = 0x4A002A66,.input = 16,.name = NULL,.source =
		NULL,.description = NULL},
	[22] = {.reg = 0x4A002A68,.input = 17,.name = NULL,.source =
		NULL,.description = NULL},
	[23] = {.reg = 0x4A002A6A,.input = 18,.name = NULL,.source =
		NULL,.description = NULL},
	[24] = {.reg = 0x4A002A6C,.input = 19,.name = NULL,.source =
		NULL,.description = NULL},
	[25] = {.reg = 0x4A002A6E,.input = 20,.name = NULL,.source =
		NULL,.description = NULL},
	[26] = {.reg = 0x4A002A70,.input = 21,.name = NULL,.source =
		NULL,.description = NULL},
	[27] = {.reg = 0x4A002A72,.input = 22,.name = NULL,.source =
		NULL,.description = NULL},
	[28] = {.reg = 0x4A002A74,.input = 23,.name = NULL,.source =
		NULL,.description = NULL},
	[29] = {.reg = 0x4A002A76,.input = 24,.name = NULL,.source =
		NULL,.description = NULL},
	[30] = {.reg = 0x4A002A78,.input = 25,.name = NULL,.source =
		NULL,.description = NULL},
	[31] = {.reg = 0x4A002A7A,.input = 26,.name = NULL,.source =
		NULL,.description = NULL},
	[32] = {.reg = 0x4A002A7C,.input = 27,.name = NULL,.source =
		NULL,.description = NULL},
	[33] = {.reg = 0x4A002A7E,.input = 28,.name = NULL,.source =
		NULL,.description = NULL},
	[34] = {.reg = 0x4A002A80,.input = 29,.name = NULL,.source =
		NULL,.description = NULL},
	[35] = {.reg = 0x4A002A82,.input = 30,.name = NULL,.source =
		NULL,.description = NULL},
	[36] = {.reg = 0x4A002A84,.input = 31,.name = NULL,.source =
		NULL,.description = NULL},
	[37] = {.reg = 0x4A002A86,.input = 32,.name = NULL,.source =
		NULL,.description = NULL},
	[38] = {.reg = 0x4A002A88,.input = 33,.name = NULL,.source =
		NULL,.description = NULL},
	[39] = {.reg = 0x4A002A8A,.input = 34,.name = NULL,.source =
		NULL,.description = NULL},
	[40] = {.reg = 0x4A002A8C,.input = 35,.name = NULL,.source =
		NULL,.description = NULL},
	[41] = {.reg = 0x4A002A8E,.input = 36,.name = NULL,.source =
		NULL,.description = NULL},
	[42] = {.reg = 0x4A002A90,.input = 37,.name = NULL,.source =
		NULL,.description = NULL},
	[43] = {.reg = 0x4A002A92,.input = 38,.name = NULL,.source =
		NULL,.description = NULL},
	[44] = {.reg = 0x4A002A94,.input = 39,.name = NULL,.source =
		NULL,.description = NULL},
	[45] = {.reg = 0x4A002A96,.input = 40,.name = NULL,.source =
		NULL,.description = NULL},
	[46] = {.reg = 0x4A002A98,.input = 41,.name = NULL,.source =
		NULL,.description = NULL},
	[47] = {.reg = 0x4A002A9A,.input = 42,.name = NULL,.source =
		NULL,.description = NULL},
	[48] = {.reg = 0x4A002A9C,.input = 43,.name = NULL,.source =
		NULL,.description = NULL},
	[49] = {.reg = 0x4A002A9E,.input = 44,.name = NULL,.source =
		NULL,.description = NULL},
	[50] = {.reg = 0x4A002AA0,.input = 45,.name = NULL,.source =
		NULL,.description = NULL},
	[51] = {.reg = 0x4A002AA2,.input = 46,.name = NULL,.source =
		NULL,.description = NULL},
	[52] = {.reg = 0x4A002AA4,.input = 47,.name = NULL,.source =
		NULL,.description = NULL},
	[53] = {.reg = 0x4A002AA6,.input = 48,.name = NULL,.source =
		NULL,.description = NULL},
	[54] = {.reg = 0x4A002AA8,.input = 49,.name = NULL,.source =
		NULL,.description = NULL},
	[55] = {.reg = 0x4A002AAA,.input = 50,.name = NULL,.source =
		NULL,.description = NULL},
	[56] = {.reg = 0x4A002AAC,.input = 51,.name = NULL,.source =
		NULL,.description = NULL},
	[57] = {.reg = 0x4A002AAE,.input = 52,.name = NULL,.source =
		NULL,.description = NULL},
	[58] = {.reg = 0x4A002AB0,.input = 53,.name = NULL,.source =
		NULL,.description = NULL},
	[59] = {.reg = 0x4A002AB2,.input = 54,.name = NULL,.source =
		NULL,.description = NULL},
	[60] = {.reg = 0x4A002AB4,.input = 55,.name = NULL,.source =
		NULL,.description = NULL},
	[61] = {.reg = 0x4A002AB6,.input = 56,.name = NULL,.source =
		NULL,.description = NULL},
	[62] = {.reg = 0x4A002AB8,.input = 57,.name = NULL,.source =
		NULL,.description = NULL},
	[63] = {.reg = 0x4A002ABA,.input = 58,.name = NULL,.source =
		NULL,.description = NULL},
	[64] = {.reg = 0x4A002ABC,.input = 59,.name = NULL,.source =
		NULL,.description = NULL},
	[65] = {.reg = 0x4A002ABE,.input = 60,.name = NULL,.source =
		NULL,.description = NULL},
	[66] = {.reg = 0x4A002AC0,.input = 61,.name = NULL,.source =
		NULL,.description = NULL},
	[67] = {.reg = 0x4A002AC2,.input = 62,.name = NULL,.source =
		NULL,.description = NULL},
	[68] = {.reg = 0x4A002AC4,.input = 63,.name = NULL,.source =
		NULL,.description = NULL},
	[69] = {.reg = 0x4A002AC6,.input = 64,.name = NULL,.source =
		NULL,.description = NULL},
	[70] = {.reg = 0x4A002AC8,.input = 65,.name = NULL,.source =
		NULL,.description = NULL},
	[71] = {.reg = 0x4A002ACA,.input = 66,.name = NULL,.source =
		NULL,.description = NULL},
	[72] = {.reg = 0x4A002ACC,.input = 67,.name = NULL,.source =
		NULL,.description = NULL},
	[73] = {.reg = 0x4A002ACE,.input = 68,.name = NULL,.source =
		NULL,.description = NULL},
	[74] = {.reg = 0x4A002AD0,.input = 69,.name = NULL,.source =
		NULL,.description = NULL},
	[75] = {.reg = 0x4A002AD2,.input = 70,.name = NULL,.source =
		NULL,.description = NULL},
	[76] = {.reg = 0x4A002AD4,.input = 71,.name = NULL,.source =
		NULL,.description = NULL},
	[77] = {.reg = 0x4A002AD6,.input = 72,.name = NULL,.source =
		NULL,.description = NULL},
	[78] = {.reg = 0x4A002AD8,.input = 73,.name = NULL,.source =
		NULL,.description = NULL},
	/* XXX: IRQ 79 is not documented?? */
	[79] = {.reg = 0x4A002ADA,.input = 0,.name = NULL,.source =
		NULL,.description = NULL},
	[80] = {.reg = 0x4A002ADC,.input = 75,.name = NULL,.source =
		NULL,.description = NULL},
	[81] = {.reg = 0x4A002ADE,.input = 76,.name = NULL,.source =
		NULL,.description = NULL},
	[82] = {.reg = 0x4A002AE0,.input = 77,.name = NULL,.source =
		NULL,.description = NULL},
	[83] = {.reg = 0x4A002AE2,.input = 78,.name = NULL,.source =
		NULL,.description = NULL},
	[84] = {.reg = 0x4A002AE4,.input = 79,.name = NULL,.source =
		NULL,.description = NULL},
	[85] = {.reg = 0x4A002AE6,.input = 80,.name = NULL,.source =
		NULL,.description = NULL},
	[86] = {.reg = 0x4A002AE8,.input = 81,.name = NULL,.source =
		NULL,.description = NULL},
	[87] = {.reg = 0x4A002AEA,.input = 82,.name = NULL,.source =
		NULL,.description = NULL},
	[88] = {.reg = 0x4A002AEC,.input = 83,.name = NULL,.source =
		NULL,.description = NULL},
	[89] = {.reg = 0x4A002AEE,.input = 84,.name = NULL,.source =
		NULL,.description = NULL},
	[90] = {.reg = 0x4A002AF0,.input = 85,.name = NULL,.source =
		NULL,.description = NULL},
	[91] = {.reg = 0x4A002AF2,.input = 86,.name = NULL,.source =
		NULL,.description = NULL},
	[92] = {.reg = 0x4A002AF4,.input = 87,.name = NULL,.source =
		NULL,.description = NULL},
	[93] = {.reg = 0x4A002AF6,.input = 88,.name = NULL,.source =
		NULL,.description = NULL},
	[94] = {.reg = 0x4A002AF8,.input = 89,.name = NULL,.source =
		NULL,.description = NULL},
	[95] = {.reg = 0x4A002AFA,.input = 90,.name = NULL,.source =
		NULL,.description = NULL},
	[96] = {.reg = 0x4A002AFC,.input = 91,.name = NULL,.source =
		NULL,.description = NULL},
	[97] = {.reg = 0x4A002AFE,.input = 92,.name = NULL,.source =
		NULL,.description = NULL},
	[98] = {.reg = 0x4A002B00,.input = 93,.name = NULL,.source =
		NULL,.description = NULL},
	[99] = {.reg = 0x4A002B02,.input = 94,.name = NULL,.source =
		NULL,.description = NULL},
	[100] = {.reg = 0x4A002B04,.input = 395,.name = NULL,.source =
		 NULL,.description = NULL},
	[101] = {.reg = 0x4A002B06,.input = 96,.name = NULL,.source =
		 NULL,.description = NULL},
	[102] = {.reg = 0x4A002B08,.input = 97,.name = NULL,.source =
		 NULL,.description = NULL},
	[103] = {.reg = 0x4A002B0A,.input = 98,.name = NULL,.source =
		 NULL,.description = NULL},
	[104] = {.reg = 0x4A002B0C,.input = 99,.name = NULL,.source =
		 NULL,.description = NULL},
	[105] = {.reg = 0x4A002B0E,.input = 100,.name = NULL,.source =
		 NULL,.description = NULL},
	[106] = {.reg = 0x4A002B10,.input = 101,.name = NULL,.source =
		 NULL,.description = NULL},
	[107] = {.reg = 0x4A002B12,.input = 102,.name = NULL,.source =
		 NULL,.description = NULL},
	[108] = {.reg = 0x4A002B14,.input = 103,.name = NULL,.source =
		 NULL,.description = NULL},
	[109] = {.reg = 0x4A002B16,.input = 104,.name = NULL,.source =
		 NULL,.description = NULL},
	[110] = {.reg = 0x4A002B18,.input = 105,.name = NULL,.source =
		 NULL,.description = NULL},
	[111] = {.reg = 0x4A002B1A,.input = 106,.name = NULL,.source =
		 NULL,.description = NULL},
	[112] = {.reg = 0x4A002B1C,.input = 107,.name = NULL,.source =
		 NULL,.description = NULL},
	[113] = {.reg = 0x4A002B1E,.input = 108,.name = NULL,.source =
		 NULL,.description = NULL},
	[114] = {.reg = 0x4A002B20,.input = 109,.name = NULL,.source =
		 NULL,.description = NULL},
	[115] = {.reg = 0x4A002B22,.input = 110,.name = NULL,.source =
		 NULL,.description = NULL},
	[116] = {.reg = 0x4A002B24,.input = 111,.name = NULL,.source =
		 NULL,.description = NULL},
	[117] = {.reg = 0x4A002B26,.input = 112,.name = NULL,.source =
		 NULL,.description = NULL},
	[118] = {.reg = 0x4A002B28,.input = 113,.name = NULL,.source =
		 NULL,.description = NULL},
	[119] = {.reg = 0x4A002B2A,.input = 114,.name = NULL,.source =
		 NULL,.description = NULL},
	[120] = {.reg = 0x4A002B2C,.input = 115,.name = NULL,.source =
		 NULL,.description = NULL},
	[121] = {.reg = 0x4A002B2E,.input = 116,.name = NULL,.source =
		 NULL,.description = NULL},
	[122] = {.reg = 0x4A002B30,.input = 117,.name = NULL,.source =
		 NULL,.description = NULL},
	[123] = {.reg = 0x4A002B32,.input = 118,.name = NULL,.source =
		 NULL,.description = NULL},
	[124] = {.reg = 0x4A002B34,.input = 119,.name = NULL,.source =
		 NULL,.description = NULL},
	[125] = {.reg = 0x4A002B36,.input = 120,.name = NULL,.source =
		 NULL,.description = NULL},
	[126] = {.reg = 0x4A002B38,.input = 121,.name = NULL,.source =
		 NULL,.description = NULL},
	[127] = {.reg = 0x4A002B3A,.input = 122,.name = NULL,.source =
		 NULL,.description = NULL},
	[128] = {.reg = 0x4A002B3C,.input = 123,.name = NULL,.source =
		 NULL,.description = NULL},
	[129] = {.reg = 0x4A002B3E,.input = 124,.name = NULL,.source =
		 NULL,.description = NULL},
	[130] = {.reg = 0x4A002B40,.input = 125,.name = NULL,.source =
		 NULL,.description = NULL},
	[131] = {.reg = 0x00000000,.input = -1,.name =
		 "MPU_CLUSTER_IRQ_PMU_C0",.source = "MPU_CLUSTER",.description =
		 "MPU core 0 PMU interrupt"},
	[132] = {.reg = 0x00000000,.input = -1,.name =
		 "MPU_CLUSTER_IRQ_PMU_C1",.source = "MPU_CLUSTER",.description =
		 "MPU core 1 PMU interrupt"},
	[133] = {.reg = 0x4A002B42,.input = 0,.name = NULL,.source =
		 NULL,.description = NULL},
	[134] = {.reg = 0x4A002B44,.input = 0,.name = NULL,.source =
		 NULL,.description = NULL},
	[135] = {.reg = 0x4A002B46,.input = 0,.name = NULL,.source =
		 NULL,.description = NULL},
	[136] = {.reg = 0x4A002B48,.input = 0,.name = NULL,.source =
		 NULL,.description = NULL},
	[137] = {.reg = 0x4A002B4A,.input = 0,.name = NULL,.source =
		 NULL,.description = NULL},
	[138] = {.reg = 0x4A002B4C,.input = 0,.name = NULL,.source =
		 NULL,.description = NULL},
	/* XXX: DOC ERR??? 139, 140? */
	[139] = {.reg = 0x4A002B4E,.input = -1,.name =
		 "WD_TIMER_MPU_C0_IRQ",.source = "MPU_WD_TIMER",.description =
		 "MPU_WD_TIMER channel 0 timeout interrupt (watchdog reset)"},
	[140] = {.reg = 0x4A002B50,.input = -1,.name =
		 "WD_TIMER_MPU_C1_IRQ",.source = "MPU_WD_TIMER",.description =
		 "MPU_WD_TIMER channel 1 timeout interrupt (watchdog reset)"},
	[141] = {.reg = 0x4A002B52,.input = 0,.name = NULL,.source =
		 NULL,.description = NULL},
	[142] = {.reg = 0x4A002B54,.input = 0,.name = NULL,.source =
		 NULL,.description = NULL},
	[143] = {.reg = 0x4A002B56,.input = 0,.name = NULL,.source =
		 NULL,.description = NULL},
	[144] = {.reg = 0x4A002B58,.input = 0,.name = NULL,.source =
		 NULL,.description = NULL},
	[145] = {.reg = 0x4A002B5A,.input = 0,.name = NULL,.source =
		 NULL,.description = NULL},
	[146] = {.reg = 0x4A002B5C,.input = 0,.name = NULL,.source =
		 NULL,.description = NULL},
	[147] = {.reg = 0x4A002B5E,.input = 0,.name = NULL,.source =
		 NULL,.description = NULL},
	[148] = {.reg = 0x4A002B60,.input = 0,.name = NULL,.source =
		 NULL,.description = NULL},
	[149] = {.reg = 0x4A002B62,.input = 0,.name = NULL,.source =
		 NULL,.description = NULL},
	[150] = {.reg = 0x4A002B64,.input = 0,.name = NULL,.source =
		 NULL,.description = NULL},
	[151] = {.reg = 0x4A002B66,.input = 0,.name = NULL,.source =
		 NULL,.description = NULL},
	[152] = {.reg = 0x4A002B68,.input = 0,.name = NULL,.source =
		 NULL,.description = NULL},
	[153] = {.reg = 0x4A002B6A,.input = 0,.name = NULL,.source =
		 NULL,.description = NULL},
	[154] = {.reg = 0x4A002B6C,.input = 0,.name = NULL,.source =
		 NULL,.description = NULL},
	[155] = {.reg = 0x4A002B6E,.input = 0,.name = NULL,.source =
		 NULL,.description = NULL},
	[156] = {.reg = 0x4A002B70,.input = 0,.name = NULL,.source =
		 NULL,.description = NULL},
	[157] = {.reg = 0x4A002B72,.input = 0,.name = NULL,.source =
		 NULL,.description = NULL},
	[158] = {.reg = 0x4A002B74,.input = 0,.name = NULL,.source =
		 NULL,.description = NULL},
	[159] = {.reg = 0x4A002B76,.input = 0,.name = NULL,.source =
		 NULL,.description = NULL},
};

static struct cross_bar_module_input dra7_dsp1_irq_crossbar[] = {
	[0] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_0",.source =
	       "CGEM",.description = "CGEM Internal Interrupt"},
	[1] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_1",.source =
	       "CGEM",.description = "CGEM Internal Interrupt"},
	[2] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_2",.source =
	       "CGEM",.description = "CGEM Internal Interrupt"},
	[3] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_3",.source =
	       "CGEM",.description = "CGEM Internal Interrupt"},
	[4] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_4",.source =
	       "CGEM",.description = "CGEM Internal Interrupt"},
	[5] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_5",.source =
	       "CGEM",.description = "CGEM Internal Interrupt"},
	[6] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_6",.source =
	       "CGEM",.description = "CGEM Internal Interrupt"},
	[7] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_7",.source =
	       "CGEM",.description = "CGEM Internal Interrupt"},
	[8] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_8",.source =
	       "CGEM",.description = "CGEM Internal Interrupt"},
	[9] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_9",.source =
	       "CGEM",.description = "CGEM Internal Interrupt"},
	[10] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_10",.source =
		"CGEM",.description = "CGEM Internal Interrupt"},
	[11] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_11",.source =
		"CGEM",.description = "CGEM Internal Interrupt"},
	[12] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_12",.source =
		"CGEM",.description = "CGEM Internal Interrupt"},
	[13] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_13",.source =
		"CGEM",.description = "CGEM Internal Interrupt"},
	[14] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_14",.source =
		"CGEM",.description = "CGEM Internal Interrupt"},
	[15] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_15",.source =
		"CGEM",.description = "CGEM Internal Interrupt"},
	[16] = {.reg = 0x00000000,.input = -1,.name = "TPCC_INTG",.source =
		"TPCC",.description = "EDMA CC global interrupt"},
	[17] = {.reg = 0x00000000,.input = -1,.name = "TPCC_INT0",.source =
		"TPCC",.description = "EDMA CC region0 interrupt"},
	[18] = {.reg = 0x00000000,.input = -1,.name = "TPCC_INT1",.source =
		"TPCC",.description = "EDMA CC region1 interrupt"},
	[19] = {.reg = 0x00000000,.input = -1,.name = "TPCC_INT2",.source =
		"TPCC",.description = "EDMA CC region2 interrupt"},
	[20] = {.reg = 0x00000000,.input = -1,.name = "TPCC_INT3",.source =
		"TPCC",.description = "EDMA CC region3 interrupt"},
	[21] = {.reg = 0x00000000,.input = -1,.name = "FW0_FUNC_ERROR",.source =
		"Firewall 0",.description = "Firewall0 func access error"},
	[22] = {.reg = 0x00000000,.input = -1,.name =
		"FW0_DEBUG_ERROR",.source = "Firewall 0",.description =
		"Firewall0 debug access error"},
	[23] = {.reg = 0x00000000,.input = -1,.name = "FW1_FUNC_ERROR",.source =
		"Firewall 1",.description = "Firewall1 func access error"},
	[24] = {.reg = 0x00000000,.input = -1,.name =
		"FW1_DEBUG_ERROR",.source = "Firewall 1",.description =
		"Firewall1 debug access error"},
	[25] = {.reg = 0x00000000,.input = -1,.name = "MMU0_INT",.source =
		"MMU0",.description = "DSP MMU0 Interrupt"},
	[26] = {.reg = 0x00000000,.input = -1,.name = "MMU1_INT",.source =
		"MMU1",.description = "DSP MMU1 Interrupt"},
	[27] = {.reg = 0x00000000,.input = -1,.name = "TPCC_ERRINT",.source =
		"TPCC",.description = "EDMA CC error interrupt"},
	[28] = {.reg = 0x00000000,.input = -1,.name = "TPTC_ERRINT0",.source =
		"TPTC",.description = "EDMA TC0 error interrupt"},
	[29] = {.reg = 0x00000000,.input = -1,.name = "TPTC_ERRINT1",.source =
		"TPTC",.description = "EDMA TC1 error interrupt"},
	[30] = {.reg = 0x00000000,.input = -1,.name = "NOC_ERRINT",.source =
		"NOC_ERRINT",.description = "Interconnect error interrupt"},
	[31] = {.reg = 0x00000000,.input = -1,.name = "EDMA_WAKE_INT",.source =
		"EDMA",.description = "EDMA wakeup interrupt"},
	[32] = {.reg = 0x4A002948,.input = 1,.name = NULL,.source =
		NULL,.description = NULL},
	[33] = {.reg = 0x4A00294A,.input = 2,.name = NULL,.source =
		NULL,.description = NULL},
	[34] = {.reg = 0x4A00294C,.input = 3,.name = NULL,.source =
		NULL,.description = NULL},
	[35] = {.reg = 0x4A00294E,.input = 4,.name = NULL,.source =
		NULL,.description = NULL},
	[36] = {.reg = 0x4A002950,.input = 5,.name = NULL,.source =
		NULL,.description = NULL},
	[37] = {.reg = 0x4A002952,.input = 6,.name = NULL,.source =
		NULL,.description = NULL},
	[38] = {.reg = 0x4A002954,.input = 7,.name = NULL,.source =
		NULL,.description = NULL},
	[39] = {.reg = 0x4A002956,.input = 8,.name = NULL,.source =
		NULL,.description = NULL},
	[40] = {.reg = 0x4A002958,.input = 9,.name = NULL,.source =
		NULL,.description = NULL},
	[41] = {.reg = 0x4A00295A,.input = 10,.name = NULL,.source =
		NULL,.description = NULL},
	[42] = {.reg = 0x4A00295C,.input = 11,.name = NULL,.source =
		NULL,.description = NULL},
	[43] = {.reg = 0x4A00295E,.input = 12,.name = NULL,.source =
		NULL,.description = NULL},
	[44] = {.reg = 0x4A002960,.input = 13,.name = NULL,.source =
		NULL,.description = NULL},
	[45] = {.reg = 0x4A002962,.input = 14,.name = NULL,.source =
		NULL,.description = NULL},
	[46] = {.reg = 0x4A002964,.input = 15,.name = NULL,.source =
		NULL,.description = NULL},
	[47] = {.reg = 0x4A002966,.input = 16,.name = NULL,.source =
		NULL,.description = NULL},
	[48] = {.reg = 0x4A002968,.input = 17,.name = NULL,.source =
		NULL,.description = NULL},
	[49] = {.reg = 0x4A00296A,.input = 18,.name = NULL,.source =
		NULL,.description = NULL},
	[50] = {.reg = 0x4A00296C,.input = 19,.name = NULL,.source =
		NULL,.description = NULL},
	[51] = {.reg = 0x4A00296E,.input = 20,.name = NULL,.source =
		NULL,.description = NULL},
	[52] = {.reg = 0x4A002970,.input = 21,.name = NULL,.source =
		NULL,.description = NULL},
	[53] = {.reg = 0x4A002972,.input = 22,.name = NULL,.source =
		NULL,.description = NULL},
	[54] = {.reg = 0x4A002974,.input = 23,.name = NULL,.source =
		NULL,.description = NULL},
	[55] = {.reg = 0x4A002976,.input = 24,.name = NULL,.source =
		NULL,.description = NULL},
	[56] = {.reg = 0x4A002978,.input = 25,.name = NULL,.source =
		NULL,.description = NULL},
	[57] = {.reg = 0x4A00297A,.input = 26,.name = NULL,.source =
		NULL,.description = NULL},
	[58] = {.reg = 0x4A00297C,.input = 27,.name = NULL,.source =
		NULL,.description = NULL},
	[59] = {.reg = 0x4A00297E,.input = 28,.name = NULL,.source =
		NULL,.description = NULL},
	[60] = {.reg = 0x4A002980,.input = 29,.name = NULL,.source =
		NULL,.description = NULL},
	[61] = {.reg = 0x4A002982,.input = 30,.name = NULL,.source =
		NULL,.description = NULL},
	[62] = {.reg = 0x4A002984,.input = 31,.name = NULL,.source =
		NULL,.description = NULL},
	[63] = {.reg = 0x4A002986,.input = 32,.name = NULL,.source =
		NULL,.description = NULL},
	[64] = {.reg = 0x4A002988,.input = 33,.name = NULL,.source =
		NULL,.description = NULL},
	[65] = {.reg = 0x4A00298A,.input = 34,.name = NULL,.source =
		NULL,.description = NULL},
	[66] = {.reg = 0x4A00298C,.input = 35,.name = NULL,.source =
		NULL,.description = NULL},
	[67] = {.reg = 0x4A00298E,.input = 36,.name = NULL,.source =
		NULL,.description = NULL},
	[68] = {.reg = 0x4A002990,.input = 37,.name = NULL,.source =
		NULL,.description = NULL},
	[69] = {.reg = 0x4A002992,.input = 38,.name = NULL,.source =
		NULL,.description = NULL},
	[70] = {.reg = 0x4A002994,.input = 39,.name = NULL,.source =
		NULL,.description = NULL},
	[71] = {.reg = 0x4A002996,.input = 40,.name = NULL,.source =
		NULL,.description = NULL},
	[72] = {.reg = 0x4A002998,.input = 41,.name = NULL,.source =
		NULL,.description = NULL},
	[73] = {.reg = 0x4A00299A,.input = 42,.name = NULL,.source =
		NULL,.description = NULL},
	[74] = {.reg = 0x4A00299C,.input = 43,.name = NULL,.source =
		NULL,.description = NULL},
	[75] = {.reg = 0x4A00299E,.input = 44,.name = NULL,.source =
		NULL,.description = NULL},
	[76] = {.reg = 0x4A0029A0,.input = 45,.name = NULL,.source =
		NULL,.description = NULL},
	[77] = {.reg = 0x4A0029A2,.input = 46,.name = NULL,.source =
		NULL,.description = NULL},
	[78] = {.reg = 0x4A0029A4,.input = 47,.name = NULL,.source =
		NULL,.description = NULL},
	/* XXX: IRQ 79 is not documented?? */
	[79] = {.reg = 0x4A0029A6,.input = 0,.name = NULL,.source =
		NULL,.description = NULL},
	[80] = {.reg = 0x4A0029A8,.input = 49,.name = NULL,.source =
		NULL,.description = NULL},
	[81] = {.reg = 0x4A0029AA,.input = 50,.name = NULL,.source =
		NULL,.description = NULL},
	[82] = {.reg = 0x4A0029AC,.input = 51,.name = NULL,.source =
		NULL,.description = NULL},
	[83] = {.reg = 0x4A0029AE,.input = 52,.name = NULL,.source =
		NULL,.description = NULL},
	[84] = {.reg = 0x4A0029B0,.input = 53,.name = NULL,.source =
		NULL,.description = NULL},
	[85] = {.reg = 0x4A0029B2,.input = 54,.name = NULL,.source =
		NULL,.description = NULL},
	[86] = {.reg = 0x4A0029B4,.input = 55,.name = NULL,.source =
		NULL,.description = NULL},
	[87] = {.reg = 0x4A0029B6,.input = 56,.name = NULL,.source =
		NULL,.description = NULL},
	[88] = {.reg = 0x4A0029B8,.input = 57,.name = NULL,.source =
		NULL,.description = NULL},
	[89] = {.reg = 0x4A0029BA,.input = 58,.name = NULL,.source =
		NULL,.description = NULL},
	[90] = {.reg = 0x4A0029BC,.input = 59,.name = NULL,.source =
		NULL,.description = NULL},
	[91] = {.reg = 0x4A0029BE,.input = 60,.name = NULL,.source =
		NULL,.description = NULL},
	[92] = {.reg = 0x4A0029C0,.input = 61,.name = NULL,.source =
		NULL,.description = NULL},
	[93] = {.reg = 0x4A0029C2,.input = 62,.name = NULL,.source =
		NULL,.description = NULL},
	[94] = {.reg = 0x4A0029C4,.input = 63,.name = NULL,.source =
		NULL,.description = NULL},
	[95] = {.reg = 0x4A0029C6,.input = 64,.name = NULL,.source =
		NULL,.description = NULL},
	[96] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_16",.source =
		"CGEM",.description = "CGEM Internal Interrupt"},
	[97] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_17",.source =
		"CGEM",.description = "CGEM Internal Interrupt"},
	[98] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_18",.source =
		"CGEM",.description = "CGEM Internal Interrupt"},
	[99] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_19",.source =
		"CGEM",.description = "CGEM Internal Interrupt"},
	[100] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_20",.source =
		 "CGEM",.description = "CGEM Internal Interrupt"},
	[101] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_21",.source =
		 "CGEM",.description = "CGEM Internal Interrupt"},
	[102] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_22",.source =
		 "CGEM",.description = "CGEM Internal Interrupt"},
	[103] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_23",.source =
		 "CGEM",.description = "CGEM Internal Interrupt"},
	[104] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_24",.source =
		 "CGEM",.description = "CGEM Internal Interrupt"},
	[105] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_25",.source =
		 "CGEM",.description = "CGEM Internal Interrupt"},
	[106] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_26",.source =
		 "CGEM",.description = "CGEM Internal Interrupt"},
	[107] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_27",.source =
		 "CGEM",.description = "CGEM Internal Interrupt"},
	[108] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_28",.source =
		 "CGEM",.description = "CGEM Internal Interrupt"},
	[109] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_29",.source =
		 "CGEM",.description = "CGEM Internal Interrupt"},
	[110] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_30",.source =
		 "CGEM",.description = "CGEM Internal Interrupt"},
	[111] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_31",.source =
		 "CGEM",.description = "CGEM Internal Interrupt"},
	[112] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_32",.source =
		 "CGEM",.description = "CGEM Internal Interrupt"},
	[113] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_33",.source =
		 "CGEM",.description = "CGEM Internal Interrupt"},
	[114] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_34",.source =
		 "CGEM",.description = "CGEM Internal Interrupt"},
	[115] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_35",.source =
		 "CGEM",.description = "CGEM Internal Interrupt"},
	[116] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_36",.source =
		 "CGEM",.description = "CGEM Internal Interrupt"},
	[117] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_37",.source =
		 "CGEM",.description = "CGEM Internal Interrupt"},
	[118] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_38",.source =
		 "CGEM",.description = "CGEM Internal Interrupt"},
	[119] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_39",.source =
		 "CGEM",.description = "CGEM Internal Interrupt"},
	[120] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_40",.source =
		 "CGEM",.description = "CGEM Internal Interrupt"},
	[121] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_41",.source =
		 "CGEM",.description = "CGEM Internal Interrupt"},
	[122] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_42",.source =
		 "CGEM",.description = "CGEM Internal Interrupt"},
	[123] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_43",.source =
		 "CGEM",.description = "CGEM Internal Interrupt"},
	[124] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_44",.source =
		 "CGEM",.description = "CGEM Internal Interrupt"},
	[125] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_45",.source =
		 "CGEM",.description = "CGEM Internal Interrupt"},
	[126] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_46",.source =
		 "CGEM",.description = "CGEM Internal Interrupt"},
	[127] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_47",.source =
		 "CGEM",.description = "CGEM Internal Interrupt"},
};

static struct cross_bar_module_input dra7_dsp2_irq_crossbar[] = {
	[0] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_0",.source =
	       "CGEM",.description = "CGEM Internal Interrupt"},
	[1] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_1",.source =
	       "CGEM",.description = "CGEM Internal Interrupt"},
	[2] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_2",.source =
	       "CGEM",.description = "CGEM Internal Interrupt"},
	[3] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_3",.source =
	       "CGEM",.description = "CGEM Internal Interrupt"},
	[4] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_4",.source =
	       "CGEM",.description = "CGEM Internal Interrupt"},
	[5] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_5",.source =
	       "CGEM",.description = "CGEM Internal Interrupt"},
	[6] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_6",.source =
	       "CGEM",.description = "CGEM Internal Interrupt"},
	[7] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_7",.source =
	       "CGEM",.description = "CGEM Internal Interrupt"},
	[8] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_8",.source =
	       "CGEM",.description = "CGEM Internal Interrupt"},
	[9] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_9",.source =
	       "CGEM",.description = "CGEM Internal Interrupt"},
	[10] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_10",.source =
		"CGEM",.description = "CGEM Internal Interrupt"},
	[11] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_11",.source =
		"CGEM",.description = "CGEM Internal Interrupt"},
	[12] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_12",.source =
		"CGEM",.description = "CGEM Internal Interrupt"},
	[13] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_13",.source =
		"CGEM",.description = "CGEM Internal Interrupt"},
	[14] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_14",.source =
		"CGEM",.description = "CGEM Internal Interrupt"},
	[15] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_15",.source =
		"CGEM",.description = "CGEM Internal Interrupt"},
	[16] = {.reg = 0x00000000,.input = -1,.name = "TPCC_INTG",.source =
		"TPCC",.description = "EDMA CC global interrupt"},
	[17] = {.reg = 0x00000000,.input = -1,.name = "TPCC_INT0",.source =
		"TPCC",.description = "EDMA CC region0 interrupt"},
	[18] = {.reg = 0x00000000,.input = -1,.name = "TPCC_INT1",.source =
		"TPCC",.description = "EDMA CC region1 interrupt"},
	[19] = {.reg = 0x00000000,.input = -1,.name = "TPCC_INT2",.source =
		"TPCC",.description = "EDMA CC region2 interrupt"},
	[20] = {.reg = 0x00000000,.input = -1,.name = "TPCC_INT3",.source =
		"TPCC",.description = "EDMA CC region3 interrupt"},
	[21] = {.reg = 0x00000000,.input = -1,.name = "FW0_FUNC_ERROR",.source =
		"Firewall 0",.description = "Firewall0 func access error"},
	[22] = {.reg = 0x00000000,.input = -1,.name =
		"FW0_DEBUG_ERROR",.source = "Firewall 0",.description =
		"Firewall0 debug access error"},
	[23] = {.reg = 0x00000000,.input = -1,.name = "FW1_FUNC_ERROR",.source =
		"Firewall 1",.description = "Firewall1 func access error"},
	[24] = {.reg = 0x00000000,.input = -1,.name =
		"FW1_DEBUG_ERROR",.source = "Firewall 1",.description =
		"Firewall1 debug access error"},
	[25] = {.reg = 0x00000000,.input = -1,.name = "MMU0_INT",.source =
		"MMU0",.description = "DSP MMU0 Interrupt"},
	[26] = {.reg = 0x00000000,.input = -1,.name = "MMU1_INT",.source =
		"MMU1",.description = "DSP MMU1 Interrupt"},
	[27] = {.reg = 0x00000000,.input = -1,.name = "TPCC_ERRINT",.source =
		"TPCC",.description = "EDMA CC error interrupt"},
	[28] = {.reg = 0x00000000,.input = -1,.name = "TPTC_ERRINT0",.source =
		"TPTC",.description = "EDMA TC0 error interrupt"},
	[29] = {.reg = 0x00000000,.input = -1,.name = "TPTC_ERRINT1",.source =
		"TPTC",.description = "EDMA TC1 error interrupt"},
	[30] = {.reg = 0x00000000,.input = -1,.name = "NOC_ERRINT",.source =
		"NOC_ERRINT",.description = "Interconnect error interrupt"},
	[31] = {.reg = 0x00000000,.input = -1,.name = "EDMA_WAKE_INT",.source =
		"EDMA",.description = "EDMA wakeup interrupt"},
	[32] = {.reg = 0x4A0029C8,.input = 1,.name = NULL,.source =
		NULL,.description = NULL},
	[33] = {.reg = 0x4A0029CA,.input = 2,.name = NULL,.source =
		NULL,.description = NULL},
	[34] = {.reg = 0x4A0029CC,.input = 3,.name = NULL,.source =
		NULL,.description = NULL},
	[35] = {.reg = 0x4A0029CE,.input = 4,.name = NULL,.source =
		NULL,.description = NULL},
	[36] = {.reg = 0x4A0029D0,.input = 5,.name = NULL,.source =
		NULL,.description = NULL},
	[37] = {.reg = 0x4A0029D2,.input = 6,.name = NULL,.source =
		NULL,.description = NULL},
	[38] = {.reg = 0x4A0029D4,.input = 7,.name = NULL,.source =
		NULL,.description = NULL},
	[39] = {.reg = 0x4A0029D6,.input = 8,.name = NULL,.source =
		NULL,.description = NULL},
	[40] = {.reg = 0x4A0029D8,.input = 9,.name = NULL,.source =
		NULL,.description = NULL},
	[41] = {.reg = 0x4A0029DA,.input = 10,.name = NULL,.source =
		NULL,.description = NULL},
	[42] = {.reg = 0x4A0029DC,.input = 11,.name = NULL,.source =
		NULL,.description = NULL},
	[43] = {.reg = 0x4A0029DE,.input = 12,.name = NULL,.source =
		NULL,.description = NULL},
	[44] = {.reg = 0x4A0029E0,.input = 13,.name = NULL,.source =
		NULL,.description = NULL},
	[45] = {.reg = 0x4A0029E2,.input = 14,.name = NULL,.source =
		NULL,.description = NULL},
	[46] = {.reg = 0x4A0029E4,.input = 15,.name = NULL,.source =
		NULL,.description = NULL},
	[47] = {.reg = 0x4A0029E6,.input = 16,.name = NULL,.source =
		NULL,.description = NULL},
	[48] = {.reg = 0x4A0029E8,.input = 17,.name = NULL,.source =
		NULL,.description = NULL},
	[49] = {.reg = 0x4A0029EA,.input = 18,.name = NULL,.source =
		NULL,.description = NULL},
	[50] = {.reg = 0x4A0029EC,.input = 19,.name = NULL,.source =
		NULL,.description = NULL},
	[51] = {.reg = 0x4A0029EE,.input = 20,.name = NULL,.source =
		NULL,.description = NULL},
	[52] = {.reg = 0x4A0029F0,.input = 21,.name = NULL,.source =
		NULL,.description = NULL},
	[53] = {.reg = 0x4A0029F2,.input = 22,.name = NULL,.source =
		NULL,.description = NULL},
	[54] = {.reg = 0x4A0029F4,.input = 23,.name = NULL,.source =
		NULL,.description = NULL},
	[55] = {.reg = 0x4A0029F6,.input = 24,.name = NULL,.source =
		NULL,.description = NULL},
	[56] = {.reg = 0x4A0029F8,.input = 25,.name = NULL,.source =
		NULL,.description = NULL},
	[57] = {.reg = 0x4A0029FA,.input = 26,.name = NULL,.source =
		NULL,.description = NULL},
	[58] = {.reg = 0x4A0029FC,.input = 27,.name = NULL,.source =
		NULL,.description = NULL},
	[59] = {.reg = 0x4A0029FE,.input = 28,.name = NULL,.source =
		NULL,.description = NULL},
	[60] = {.reg = 0x4A002A00,.input = 29,.name = NULL,.source =
		NULL,.description = NULL},
	[61] = {.reg = 0x4A002A02,.input = 30,.name = NULL,.source =
		NULL,.description = NULL},
	[62] = {.reg = 0x4A002A04,.input = 31,.name = NULL,.source =
		NULL,.description = NULL},
	[63] = {.reg = 0x4A002A06,.input = 32,.name = NULL,.source =
		NULL,.description = NULL},
	[64] = {.reg = 0x4A002A08,.input = 33,.name = NULL,.source =
		NULL,.description = NULL},
	[65] = {.reg = 0x4A002A0A,.input = 34,.name = NULL,.source =
		NULL,.description = NULL},
	[66] = {.reg = 0x4A002A0C,.input = 35,.name = NULL,.source =
		NULL,.description = NULL},
	[67] = {.reg = 0x4A002A0E,.input = 36,.name = NULL,.source =
		NULL,.description = NULL},
	[68] = {.reg = 0x4A002A10,.input = 37,.name = NULL,.source =
		NULL,.description = NULL},
	[69] = {.reg = 0x4A002A12,.input = 38,.name = NULL,.source =
		NULL,.description = NULL},
	[70] = {.reg = 0x4A002A14,.input = 39,.name = NULL,.source =
		NULL,.description = NULL},
	[71] = {.reg = 0x4A002A16,.input = 40,.name = NULL,.source =
		NULL,.description = NULL},
	[72] = {.reg = 0x4A002A18,.input = 41,.name = NULL,.source =
		NULL,.description = NULL},
	[73] = {.reg = 0x4A002A1A,.input = 42,.name = NULL,.source =
		NULL,.description = NULL},
	[74] = {.reg = 0x4A002A1C,.input = 43,.name = NULL,.source =
		NULL,.description = NULL},
	[75] = {.reg = 0x4A002A1E,.input = 44,.name = NULL,.source =
		NULL,.description = NULL},
	[76] = {.reg = 0x4A002A20,.input = 45,.name = NULL,.source =
		NULL,.description = NULL},
	[77] = {.reg = 0x4A002A22,.input = 46,.name = NULL,.source =
		NULL,.description = NULL},
	[78] = {.reg = 0x4A002A24,.input = 47,.name = NULL,.source =
		NULL,.description = NULL},
	/* XXX: IRQ 79 is not documented?? */
	[79] = {.reg = 0x4A002A26,.input = 0,.name = NULL,.source =
		NULL,.description = NULL},
	[80] = {.reg = 0x4A002A28,.input = 49,.name = NULL,.source =
		NULL,.description = NULL},
	[81] = {.reg = 0x4A002A2A,.input = 50,.name = NULL,.source =
		NULL,.description = NULL},
	[82] = {.reg = 0x4A002A2C,.input = 51,.name = NULL,.source =
		NULL,.description = NULL},
	[83] = {.reg = 0x4A002A2E,.input = 52,.name = NULL,.source =
		NULL,.description = NULL},
	[84] = {.reg = 0x4A002A30,.input = 53,.name = NULL,.source =
		NULL,.description = NULL},
	[85] = {.reg = 0x4A002A32,.input = 54,.name = NULL,.source =
		NULL,.description = NULL},
	[86] = {.reg = 0x4A002A34,.input = 55,.name = NULL,.source =
		NULL,.description = NULL},
	[87] = {.reg = 0x4A002A36,.input = 56,.name = NULL,.source =
		NULL,.description = NULL},
	[88] = {.reg = 0x4A002A38,.input = 57,.name = NULL,.source =
		NULL,.description = NULL},
	[89] = {.reg = 0x4A002A3A,.input = 58,.name = NULL,.source =
		NULL,.description = NULL},
	[90] = {.reg = 0x4A002A3C,.input = 59,.name = NULL,.source =
		NULL,.description = NULL},
	[91] = {.reg = 0x4A002A3E,.input = 60,.name = NULL,.source =
		NULL,.description = NULL},
	[92] = {.reg = 0x4A002A40,.input = 61,.name = NULL,.source =
		NULL,.description = NULL},
	[93] = {.reg = 0x4A002A42,.input = 62,.name = NULL,.source =
		NULL,.description = NULL},
	[94] = {.reg = 0x4A002A44,.input = 63,.name = NULL,.source =
		NULL,.description = NULL},
	[95] = {.reg = 0x4A002A46,.input = 64,.name = NULL,.source =
		NULL,.description = NULL},
	[96] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_16",.source =
		"CGEM",.description = "CGEM Internal Interrupt"},
	[97] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_17",.source =
		"CGEM",.description = "CGEM Internal Interrupt"},
	[98] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_18",.source =
		"CGEM",.description = "CGEM Internal Interrupt"},
	[99] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_19",.source =
		"CGEM",.description = "CGEM Internal Interrupt"},
	[100] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_20",.source =
		 "CGEM",.description = "CGEM Internal Interrupt"},
	[101] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_21",.source =
		 "CGEM",.description = "CGEM Internal Interrupt"},
	[102] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_22",.source =
		 "CGEM",.description = "CGEM Internal Interrupt"},
	[103] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_23",.source =
		 "CGEM",.description = "CGEM Internal Interrupt"},
	[104] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_24",.source =
		 "CGEM",.description = "CGEM Internal Interrupt"},
	[105] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_25",.source =
		 "CGEM",.description = "CGEM Internal Interrupt"},
	[106] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_26",.source =
		 "CGEM",.description = "CGEM Internal Interrupt"},
	[107] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_27",.source =
		 "CGEM",.description = "CGEM Internal Interrupt"},
	[108] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_28",.source =
		 "CGEM",.description = "CGEM Internal Interrupt"},
	[109] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_29",.source =
		 "CGEM",.description = "CGEM Internal Interrupt"},
	[110] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_30",.source =
		 "CGEM",.description = "CGEM Internal Interrupt"},
	[111] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_31",.source =
		 "CGEM",.description = "CGEM Internal Interrupt"},
	[112] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_32",.source =
		 "CGEM",.description = "CGEM Internal Interrupt"},
	[113] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_33",.source =
		 "CGEM",.description = "CGEM Internal Interrupt"},
	[114] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_34",.source =
		 "CGEM",.description = "CGEM Internal Interrupt"},
	[115] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_35",.source =
		 "CGEM",.description = "CGEM Internal Interrupt"},
	[116] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_36",.source =
		 "CGEM",.description = "CGEM Internal Interrupt"},
	[117] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_37",.source =
		 "CGEM",.description = "CGEM Internal Interrupt"},
	[118] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_38",.source =
		 "CGEM",.description = "CGEM Internal Interrupt"},
	[119] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_39",.source =
		 "CGEM",.description = "CGEM Internal Interrupt"},
	[120] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_40",.source =
		 "CGEM",.description = "CGEM Internal Interrupt"},
	[121] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_41",.source =
		 "CGEM",.description = "CGEM Internal Interrupt"},
	[122] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_42",.source =
		 "CGEM",.description = "CGEM Internal Interrupt"},
	[123] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_43",.source =
		 "CGEM",.description = "CGEM Internal Interrupt"},
	[124] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_44",.source =
		 "CGEM",.description = "CGEM Internal Interrupt"},
	[125] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_45",.source =
		 "CGEM",.description = "CGEM Internal Interrupt"},
	[126] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_46",.source =
		 "CGEM",.description = "CGEM Internal Interrupt"},
	[127] = {.reg = 0x00000000,.input = -1,.name = "CGEM_IRQ_47",.source =
		 "CGEM",.description = "CGEM Internal Interrupt"},
};

static struct cross_bar_module_input dra7_ipu1_irq_crossbar[] = {
	[0] = {.reg = 0x00000000,.input = -1,.name = "Reserved",.source =
	       "Reserved",.description =
	       "MSP initial value in exception vector table"},
	[1] = {.reg = 0x00000000,.input = -1,.name = "RESET_IRQ",.source =
	       "RESET",.description = "Reset"},
	[2] = {.reg = 0x00000000,.input = -1,.name = "NMI_IRQ",.source =
	       "NMI",.description = "External NMI inputs"},
	[3] = {.reg = 0x00000000,.input = -1,.name = "HARD_FAULT_IRQ",.source =
	       "HARD_FAULT",.description =
	       "All fault conditions, if the fault handle is not enabled"},
	[4] = {.reg = 0x00000000,.input = -1,.name =
	       "MEM_MANAGE_FAULT_IRQ",.source =
	       "MEM_MANAGE_FAULT",.description =
	       "Memory management fault; access to illegal locations"},
	[5] = {.reg = 0x00000000,.input = -1,.name = "BUS_FAULT_IRQ",.source =
	       "BUS_FAULT",.description = "Bus error (on AHB intf)"},
	[6] = {.reg = 0x00000000,.input = -1,.name = "USAGE_FAULT_IRQ",.source =
	       "USAGE_FAULT",.description = "Program error"},
	[7] = {.reg = 0x00000000,.input = -1,.name = "Reserved",.source =
	       "Reserved",.description = "Reserved"},
	[8] = {.reg = 0x00000000,.input = -1,.name = "Reserved",.source =
	       "Reserved",.description = "Reserved"},
	[9] = {.reg = 0x00000000,.input = -1,.name = "Reserved",.source =
	       "Reserved",.description = "Reserved"},
	[10] = {.reg = 0x00000000,.input = -1,.name = "Reserved",.source =
		"Reserved",.description = "Reserved"},
	[11] = {.reg = 0x00000000,.input = -1,.name = "SV_CALL_IRQ",.source =
		"SV_CALL",.description = "Service system Call"},
	[12] = {.reg = 0x00000000,.input = -1,.name = "DEBUG_MON_IRQ",.source =
		"DEBUG_MON",.description = "BP, WP or external debug req."},
	[13] = {.reg = 0x00000000,.input = -1,.name = "Reserved",.source =
		"Reserved",.description = "Reserved"},
	[14] = {.reg = 0x00000000,.input = -1,.name = "PEND_SV_IRQ",.source =
		"PEND_SV",.description = "Pendable request for system device"},
	[15] = {.reg = 0x00000000,.input = -1,.name =
		"SYS_TICK_TIMER_IRQ",.source = "SYS_TICK_TIMER",.description =
		"System Tick Timer"},
	[16] = {.reg = 0x00000000,.input = -1,.name =
		"XLATE_MMU_FAULT_IRQ",.source = "XLATE_MMU_FAULT",.description =
		"xlate_mmu_fault (from L2 MMU)"},
	[17] = {.reg = 0x00000000,.input = -1,.name =
		"UNICACHE_MMU_IRQ",.source = "UNICACHE_MMU",.description =
		"Unicache or MMU maintenance complete"},
	[18] = {.reg = 0x00000000,.input = -1,.name =
		"CTM_TIM_EVENT1_IRQ",.source = "CTM_TIM_EVENT1",.description =
		"CTM timer event (timer #1)"},
	[19] = {.reg = 0x00000000,.input = -1,.name = "HWSEM_M4_IRQ",.source =
		"HWSEM_M4",.description =
		"Semaphore interrupt (1 to each core)"},
	[20] = {.reg = 0x00000000,.input = -1,.name = "ICE_NEMU_IRQ",.source =
		"ICE_NEMU",.description = "ICECrusher (1 to each core)"},
	[21] = {.reg = 0x00000000,.input = -1,.name =
		"IPU_IMP_FAULT_IRQ",.source = "IPU_IMP_FAULT",.description =
		"Ducati imprecise fault (from interconnect)"},
	[22] = {.reg = 0x00000000,.input = -1,.name =
		"CTM_TIM_EVENT2_IRQ",.source = "CTM_TIM_EVENT2",.description =
		"CTM timer event (timer #2)"},
	[23] = {.reg = 0x4A0027E0,.input = 20,.name = NULL,.source =
		NULL,.description = NULL},
	[24] = {.reg = 0x4A0027E2,.input = 48,.name = NULL,.source =
		NULL,.description = NULL},
	[25] = {.reg = 0x4A0027E4,.input = 0,.name = NULL,.source =
		NULL,.description = NULL},
	[26] = {.reg = 0x4A0027E6,.input = 96,.name = NULL,.source =
		NULL,.description = NULL},
	[27] = {.reg = 0x4A0027E8,.input = 126,.name = NULL,.source =
		NULL,.description = NULL},
	[28] = {.reg = 0x4A0027EA,.input = 127,.name = NULL,.source =
		NULL,.description = NULL},
	[29] = {.reg = 0x4A0027EC,.input = 128,.name = NULL,.source =
		NULL,.description = NULL},
	[30] = {.reg = 0x4A0027EE,.input = 129,.name = NULL,.source =
		NULL,.description = NULL},
	[31] = {.reg = 0x4A0027F0,.input = 130,.name = NULL,.source =
		NULL,.description = NULL},
	[32] = {.reg = 0x4A0027F2,.input = 19,.name = NULL,.source =
		NULL,.description = NULL},
	[33] = {.reg = 0x4A0027F4,.input = 131,.name = NULL,.source =
		NULL,.description = NULL},
	[34] = {.reg = 0x4A0027F6,.input = 7,.name = NULL,.source =
		NULL,.description = NULL},
	[35] = {.reg = 0x4A0027F8,.input = 8,.name = NULL,.source =
		NULL,.description = NULL},
	[36] = {.reg = 0x4A0027FA,.input = 9,.name = NULL,.source =
		NULL,.description = NULL},
	[37] = {.reg = 0x4A0027FC,.input = 10,.name = NULL,.source =
		NULL,.description = NULL},
	[38] = {.reg = 0x4A0027FE,.input = 132,.name = NULL,.source =
		NULL,.description = NULL},
	[39] = {.reg = 0x4A002800,.input = 98,.name = NULL,.source =
		NULL,.description = NULL},
	[40] = {.reg = 0x4A002802,.input = 99,.name = NULL,.source =
		NULL,.description = NULL},
	[41] = {.reg = 0x4A002804,.input = 51,.name = NULL,.source =
		NULL,.description = NULL},
	[42] = {.reg = 0x4A002806,.input = 52,.name = NULL,.source =
		NULL,.description = NULL},
	[43] = {.reg = 0x4A002808,.input = 56,.name = NULL,.source =
		NULL,.description = NULL},
	[44] = {.reg = 0x4A00280A,.input = 57,.name = NULL,.source =
		NULL,.description = NULL},
	[45] = {.reg = 0x4A00280C,.input = 69,.name = NULL,.source =
		NULL,.description = NULL},
	[46] = {.reg = 0x4A00280E,.input = 5,.name = NULL,.source =
		NULL,.description = NULL},
	[47] = {.reg = 0x4A002810,.input = 133,.name = NULL,.source =
		NULL,.description = NULL},
	[48] = {.reg = 0x4A002812,.input = 14,.name = NULL,.source =
		NULL,.description = NULL},
	[49] = {.reg = 0x4A002814,.input = 66,.name = NULL,.source =
		NULL,.description = NULL},
	[50] = {.reg = 0x4A002816,.input = 134,.name = NULL,.source =
		NULL,.description = NULL},
	[51] = {.reg = 0x4A002818,.input = 24,.name = NULL,.source =
		NULL,.description = NULL},
	[52] = {.reg = 0x4A00281A,.input = 25,.name = NULL,.source =
		NULL,.description = NULL},
	[53] = {.reg = 0x4A00281C,.input = 34,.name = NULL,.source =
		NULL,.description = NULL},
	[54] = {.reg = 0x4A00281E,.input = 35,.name = NULL,.source =
		NULL,.description = NULL},
	[55] = {.reg = 0x4A002820,.input = 40,.name = NULL,.source =
		NULL,.description = NULL},
	[56] = {.reg = 0x4A002822,.input = 42,.name = NULL,.source =
		NULL,.description = NULL},
	[57] = {.reg = 0x4A002824,.input = 60,.name = NULL,.source =
		NULL,.description = NULL},
	[58] = {.reg = 0x4A002826,.input = 61,.name = NULL,.source =
		NULL,.description = NULL},
	[59] = {.reg = 0x4A002828,.input = 50,.name = NULL,.source =
		NULL,.description = NULL},
	[60] = {.reg = 0x4A00282A,.input = 0,.name = NULL,.source =
		NULL,.description = NULL},
	[61] = {.reg = 0x4A00282C,.input = 0,.name = NULL,.source =
		NULL,.description = NULL},
	[62] = {.reg = 0x4A00282E,.input = 22,.name = NULL,.source =
		NULL,.description = NULL},
	[63] = {.reg = 0x4A002830,.input = 83,.name = NULL,.source =
		NULL,.description = NULL},
	[64] = {.reg = 0x4A002832,.input = 108,.name = NULL,.source =
		NULL,.description = NULL},
	[65] = {.reg = 0x4A002834,.input = 120,.name = NULL,.source =
		NULL,.description = NULL},
	[66] = {.reg = 0x4A002836,.input = 78,.name = NULL,.source =
		NULL,.description = NULL},
	[67] = {.reg = 0x4A002838,.input = 81,.name = NULL,.source =
		NULL,.description = NULL},
	[68] = {.reg = 0x4A00283A,.input = 89,.name = NULL,.source =
		NULL,.description = NULL},
	[69] = {.reg = 0x4A00283C,.input = 0,.name = NULL,.source =
		NULL,.description = NULL},
	[70] = {.reg = 0x4A00283E,.input = 0,.name = NULL,.source =
		NULL,.description = NULL},
	[71] = {.reg = 0x4A002840,.input = 119,.name = NULL,.source =
		NULL,.description = NULL},
	[72] = {.reg = 0x4A002842,.input = 118,.name = NULL,.source =
		NULL,.description = NULL},
	[73] = {.reg = 0x4A002844,.input = 72,.name = NULL,.source =
		NULL,.description = NULL},
	[74] = {.reg = 0x4A002846,.input = 73,.name = NULL,.source =
		NULL,.description = NULL},
	[75] = {.reg = 0x4A002848,.input = 117,.name = NULL,.source =
		NULL,.description = NULL},
	[76] = {.reg = 0x4A00284A,.input = 87,.name = NULL,.source =
		NULL,.description = NULL},
	[77] = {.reg = 0x4A00284C,.input = 88,.name = NULL,.source =
		NULL,.description = NULL},
	[78] = {.reg = 0x4A00284E,.input = 62,.name = NULL,.source =
		NULL,.description = NULL},
	[79] = {.reg = 0x4A002850,.input = 63,.name = NULL,.source =
		NULL,.description = NULL},
};

static struct cross_bar_module_input dra7_ipu2_irq_crossbar[] = {
	[0] = {.reg = 0x00000000,.input = -1,.name = "Reserved",.source =
	       "Reserved",.description =
	       "MSP initial value in exception vector table"},
	[1] = {.reg = 0x00000000,.input = -1,.name = "RESET_IRQ",.source =
	       "RESET",.description = "Reset"},
	[2] = {.reg = 0x00000000,.input = -1,.name = "NMI_IRQ",.source =
	       "NMI",.description = "External NMI inputs"},
	[3] = {.reg = 0x00000000,.input = -1,.name = "HARD_FAULT_IRQ",.source =
	       "HARD_FAULT",.description =
	       "All fault conditions, if the fault handle is not enabled"},
	[4] = {.reg = 0x00000000,.input = -1,.name =
	       "MEM_MANAGE_FAULT_IRQ",.source =
	       "MEM_MANAGE_FAULT",.description =
	       "Memory management fault; access to illegal locations"},
	[5] = {.reg = 0x00000000,.input = -1,.name = "BUS_FAULT_IRQ",.source =
	       "BUS_FAULT",.description = "Bus error (on AHB intf)"},
	[6] = {.reg = 0x00000000,.input = -1,.name = "USAGE_FAULT_IRQ",.source =
	       "USAGE_FAULT",.description = "Program error"},
	[7] = {.reg = 0x00000000,.input = -1,.name = "Reserved",.source =
	       "Reserved",.description = "Reserved"},
	[8] = {.reg = 0x00000000,.input = -1,.name = "Reserved",.source =
	       "Reserved",.description = "Reserved"},
	[9] = {.reg = 0x00000000,.input = -1,.name = "Reserved",.source =
	       "Reserved",.description = "Reserved"},
	[10] = {.reg = 0x00000000,.input = -1,.name = "Reserved",.source =
		"Reserved",.description = "Reserved"},
	[11] = {.reg = 0x00000000,.input = -1,.name = "SV_CALL_IRQ",.source =
		"SV_CALL",.description = "Service system Call"},
	[12] = {.reg = 0x00000000,.input = -1,.name = "DEBUG_MON_IRQ",.source =
		"DEBUG_MON",.description = "BP, WP or external debug req."},
	[13] = {.reg = 0x00000000,.input = -1,.name = "Reserved",.source =
		"Reserved",.description = "Reserved"},
	[14] = {.reg = 0x00000000,.input = -1,.name = "PEND_SV_IRQ",.source =
		"PEND_SV",.description = "Pendable request for system device"},
	[15] = {.reg = 0x00000000,.input = -1,.name =
		"SYS_TICK_TIMER_IRQ",.source = "SYS_TICK_TIMER",.description =
		"System Tick Timer"},
	[16] = {.reg = 0x00000000,.input = -1,.name =
		"XLATE_MMU_FAULT_IRQ",.source = "XLATE_MMU_FAULT",.description =
		"xlate_mmu_fault (from L2 MMU)"},
	[17] = {.reg = 0x00000000,.input = -1,.name =
		"UNICACHE_MMU_IRQ",.source = "UNICACHE_MMU",.description =
		"Unicache or MMU maintenance complete"},
	[18] = {.reg = 0x00000000,.input = -1,.name =
		"CTM_TIM_EVENT1_IRQ",.source = "CTM_TIM_EVENT1",.description =
		"CTM timer event (timer #1)"},
	[19] = {.reg = 0x00000000,.input = -1,.name = "HWSEM_M4_IRQ",.source =
		"HWSEM_M4",.description =
		"Semaphore interrupt (1 to each core)"},
	[20] = {.reg = 0x00000000,.input = -1,.name = "ICE_NEMU_IRQ",.source =
		"ICE_NEMU",.description = "ICECrusher (1 to each core)"},
	[21] = {.reg = 0x00000000,.input = -1,.name =
		"IPU_IMP_FAULT_IRQ",.source = "IPU_IMP_FAULT",.description =
		"Ducati imprecise fault (from interconnect)"},
	[22] = {.reg = 0x00000000,.input = -1,.name =
		"CTM_TIM_EVENT2_IRQ",.source = "CTM_TIM_EVENT2",.description =
		"CTM timer event (timer #2)"},
	[23] = {.reg = 0x4A002854,.input = 20,.name = NULL,.source =
		NULL,.description = NULL},
	[24] = {.reg = 0x4A002856,.input = 48,.name = NULL,.source =
		NULL,.description = NULL},
	[25] = {.reg = 0x4A002858,.input = 0,.name = NULL,.source =
		NULL,.description = NULL},
	[26] = {.reg = 0x4A00285A,.input = 96,.name = NULL,.source =
		NULL,.description = NULL},
	[27] = {.reg = 0x4A00285C,.input = 126,.name = NULL,.source =
		NULL,.description = NULL},
	[28] = {.reg = 0x4A00285E,.input = 127,.name = NULL,.source =
		NULL,.description = NULL},
	[29] = {.reg = 0x4A002860,.input = 128,.name = NULL,.source =
		NULL,.description = NULL},
	[30] = {.reg = 0x4A002862,.input = 129,.name = NULL,.source =
		NULL,.description = NULL},
	[31] = {.reg = 0x4A002864,.input = 130,.name = NULL,.source =
		NULL,.description = NULL},
	[32] = {.reg = 0x4A002866,.input = 19,.name = NULL,.source =
		NULL,.description = NULL},
	[33] = {.reg = 0x4A002868,.input = 131,.name = NULL,.source =
		NULL,.description = NULL},
	[34] = {.reg = 0x4A00286A,.input = 7,.name = NULL,.source =
		NULL,.description = NULL},
	[35] = {.reg = 0x4A00286C,.input = 8,.name = NULL,.source =
		NULL,.description = NULL},
	[36] = {.reg = 0x4A00286E,.input = 9,.name = NULL,.source =
		NULL,.description = NULL},
	[37] = {.reg = 0x4A002870,.input = 10,.name = NULL,.source =
		NULL,.description = NULL},
	[38] = {.reg = 0x4A002872,.input = 132,.name = NULL,.source =
		NULL,.description = NULL},
	[39] = {.reg = 0x4A002874,.input = 98,.name = NULL,.source =
		NULL,.description = NULL},
	[40] = {.reg = 0x4A002876,.input = 99,.name = NULL,.source =
		NULL,.description = NULL},
	[41] = {.reg = 0x4A002878,.input = 51,.name = NULL,.source =
		NULL,.description = NULL},
	[42] = {.reg = 0x4A00287A,.input = 52,.name = NULL,.source =
		NULL,.description = NULL},
	[43] = {.reg = 0x4A00287C,.input = 56,.name = NULL,.source =
		NULL,.description = NULL},
	[44] = {.reg = 0x4A00287E,.input = 57,.name = NULL,.source =
		NULL,.description = NULL},
	[45] = {.reg = 0x4A002880,.input = 69,.name = NULL,.source =
		NULL,.description = NULL},
	[46] = {.reg = 0x4A002882,.input = 5,.name = NULL,.source =
		NULL,.description = NULL},
	[47] = {.reg = 0x4A002884,.input = 133,.name = NULL,.source =
		NULL,.description = NULL},
	[48] = {.reg = 0x4A002886,.input = 14,.name = NULL,.source =
		NULL,.description = NULL},
	[49] = {.reg = 0x4A002888,.input = 66,.name = NULL,.source =
		NULL,.description = NULL},
	[50] = {.reg = 0x4A00288A,.input = 134,.name = NULL,.source =
		NULL,.description = NULL},
	[51] = {.reg = 0x4A00288C,.input = 24,.name = NULL,.source =
		NULL,.description = NULL},
	[52] = {.reg = 0x4A00288E,.input = 25,.name = NULL,.source =
		NULL,.description = NULL},
	[53] = {.reg = 0x4A002890,.input = 34,.name = NULL,.source =
		NULL,.description = NULL},
	[54] = {.reg = 0x4A002892,.input = 35,.name = NULL,.source =
		NULL,.description = NULL},
	[55] = {.reg = 0x4A002894,.input = 40,.name = NULL,.source =
		NULL,.description = NULL},
	[56] = {.reg = 0x4A002896,.input = 42,.name = NULL,.source =
		NULL,.description = NULL},
	[57] = {.reg = 0x4A002898,.input = 60,.name = NULL,.source =
		NULL,.description = NULL},
	[58] = {.reg = 0x4A00289A,.input = 61,.name = NULL,.source =
		NULL,.description = NULL},
	[59] = {.reg = 0x4A00289C,.input = 50,.name = NULL,.source =
		NULL,.description = NULL},
	[60] = {.reg = 0x4A00289E,.input = 0,.name = NULL,.source =
		NULL,.description = NULL},
	[61] = {.reg = 0x4A0028A0,.input = 0,.name = NULL,.source =
		NULL,.description = NULL},
	[62] = {.reg = 0x4A0028A2,.input = 22,.name = NULL,.source =
		NULL,.description = NULL},
	[63] = {.reg = 0x4A0028A4,.input = 83,.name = NULL,.source =
		NULL,.description = NULL},
	[64] = {.reg = 0x4A0028A6,.input = 108,.name = NULL,.source =
		NULL,.description = NULL},
	[65] = {.reg = 0x4A0028A8,.input = 120,.name = NULL,.source =
		NULL,.description = NULL},
	[66] = {.reg = 0x4A0028AA,.input = 78,.name = NULL,.source =
		NULL,.description = NULL},
	[67] = {.reg = 0x4A0028AC,.input = 81,.name = NULL,.source =
		NULL,.description = NULL},
	[68] = {.reg = 0x4A0028AE,.input = 89,.name = NULL,.source =
		NULL,.description = NULL},
	[69] = {.reg = 0x4A0028B0,.input = 0,.name = NULL,.source =
		NULL,.description = NULL},
	[70] = {.reg = 0x4A0028B2,.input = 0,.name = NULL,.source =
		NULL,.description = NULL},
	[71] = {.reg = 0x4A0028B4,.input = 119,.name = NULL,.source =
		NULL,.description = NULL},
	[72] = {.reg = 0x4A0028B6,.input = 118,.name = NULL,.source =
		NULL,.description = NULL},
	[73] = {.reg = 0x4A0028B8,.input = 72,.name = NULL,.source =
		NULL,.description = NULL},
	[74] = {.reg = 0x4A0028BA,.input = 73,.name = NULL,.source =
		NULL,.description = NULL},
	[75] = {.reg = 0x4A0028BC,.input = 117,.name = NULL,.source =
		NULL,.description = NULL},
	[76] = {.reg = 0x4A0028BE,.input = 87,.name = NULL,.source =
		NULL,.description = NULL},
	[77] = {.reg = 0x4A0028C0,.input = 88,.name = NULL,.source =
		NULL,.description = NULL},
	[78] = {.reg = 0x4A0028C2,.input = 62,.name = NULL,.source =
		NULL,.description = NULL},
	[79] = {.reg = 0x4A0028C4,.input = 63,.name = NULL,.source =
		NULL,.description = NULL},
};

static struct cross_bar_module_input dra7_eve1_irq_crossbar[] = {
	[0] = {.reg = 0x4A0027A0,.input = 1,.name = NULL,.source =
	       NULL,.description = NULL},
	[1] = {.reg = 0x4A0027A2,.input = 2,.name = NULL,.source =
	       NULL,.description = NULL},
	[2] = {.reg = 0x4A0027A4,.input = 3,.name = NULL,.source =
	       NULL,.description = NULL},
	[3] = {.reg = 0x4A0027A6,.input = 4,.name = NULL,.source =
	       NULL,.description = NULL},
	[4] = {.reg = 0x4A0027A8,.input = 5,.name = NULL,.source =
	       NULL,.description = NULL},
	[5] = {.reg = 0x4A0027AA,.input = 6,.name = NULL,.source =
	       NULL,.description = NULL},
	[6] = {.reg = 0x4A0027AC,.input = 7,.name = NULL,.source =
	       NULL,.description = NULL},
	[7] = {.reg = 0x4A0027AE,.input = 8,.name = NULL,.source =
	       NULL,.description = NULL},
	[8] = {.reg = 0x00000000,.input = -1,.name = "Reserved",.source =
	       "Reserved",.description = "Reserved"},
	[9] = {.reg = 0x00000000,.input = -1,.name = "EVE2_GP8",.source =
	       "EVE2",.description = "EVE2 GP8 interrupt"},
	[10] = {.reg = 0x00000000,.input = -1,.name = "Reserved",.source =
		"Reserved",.description = "Reserved"},
	[11] = {.reg = 0x00000000,.input = -1,.name = "Reserved",.source =
		"Reserved",.description = "Reserved"},
	[12] = {.reg = 0x00000000,.input = -1,.name = "Reserved",.source =
		"Reserved",.description = "Reserved"},
	[13] = {.reg = 0x00000000,.input = -1,.name = "Reserved",.source =
		"Reserved",.description = "Reserved"},
	[14] = {.reg = 0x00000000,.input = -1,.name = "Reserved",.source =
		"Reserved",.description = "Reserved"},
	[15] = {.reg = 0x00000000,.input = -1,.name = "Reserved",.source =
		"Reserved",.description = "Reserved"},
	[16] = {.reg = 0x00000000,.input = -1,.name = "Reserved",.source =
		"Reserved",.description = "Reserved"},
	[17] = {.reg = 0x00000000,.input = -1,.name = "EVE2_MBX2_INT1",.source =
		"EVE2_MBX2",.description = "EVE2 Mailbox 2 Interrupt 1"},
	[18] = {.reg = 0x00000000,.input = -1,.name = "Reserved",.source =
		"Reserved",.description = "Reserved"},
	[19] = {.reg = 0x00000000,.input = -1,.name = "Reserved",.source =
		"Reserved",.description = "Reserved"},
	[20] = {.reg = 0x00000000,.input = -1,.name = "Reserved",.source =
		"Reserved",.description = "Reserved"},
	[21] = {.reg = 0x00000000,.input = -1,.name = "Reserved",.source =
		"Reserved",.description = "Reserved"},
	[22] = {.reg = 0x00000000,.input = -1,.name = "Reserved",.source =
		"Reserved",.description = "Reserved"},
	[23] = {.reg = 0x00000000,.input = -1,.name = "Reserved",.source =
		"Reserved",.description = "Reserved"},
	[24] = {.reg = 0x00000000,.input = -1,.name = "Reserved",.source =
		"Reserved",.description = "Reserved"},
	[25] = {.reg = 0x00000000,.input = -1,.name = "Reserved",.source =
		"Reserved",.description = "Reserved"},
	[26] = {.reg = 0x00000000,.input = -1,.name = "Reserved",.source =
		"Reserved",.description = "Reserved"},
	[27] = {.reg = 0x00000000,.input = -1,.name = "Reserved",.source =
		"Reserved",.description = "Reserved"},
	[28] = {.reg = 0x00000000,.input = -1,.name = "EVE1_MBX2_INT0",.source =
		"EVE1_MBX2",.description = "EVE1 Mailbox 2 Interrupt 0"},
	[29] = {.reg = 0x00000000,.input = -1,.name = "Reserved",.source =
		"Reserved",.description = "Reserved"},
	[30] = {.reg = 0x00000000,.input = -1,.name = "Reserved",.source =
		"Reserved",.description = "Reserved"},
	[31] = {.reg = 0x00000000,.input = -1,.name = "Reserved",.source =
		"Reserved",.description = "Reserved"},
};

static struct cross_bar_module_input dra7_eve2_irq_crossbar[] = {
	[0] = {.reg = 0x4A0027B0,.input = 1,.name = NULL,.source =
	       NULL,.description = NULL},
	[1] = {.reg = 0x4A0027B2,.input = 2,.name = NULL,.source =
	       NULL,.description = NULL},
	[2] = {.reg = 0x4A0027B4,.input = 3,.name = NULL,.source =
	       NULL,.description = NULL},
	[3] = {.reg = 0x4A0027B6,.input = 4,.name = NULL,.source =
	       NULL,.description = NULL},
	[4] = {.reg = 0x4A0027B8,.input = 5,.name = NULL,.source =
	       NULL,.description = NULL},
	[5] = {.reg = 0x4A0027BA,.input = 6,.name = NULL,.source =
	       NULL,.description = NULL},
	[6] = {.reg = 0x4A0027BC,.input = 7,.name = NULL,.source =
	       NULL,.description = NULL},
	[7] = {.reg = 0x4A0027BE,.input = 8,.name = NULL,.source =
	       NULL,.description = NULL},
	[8] = {.reg = 0x00000000,.input = -1,.name = "EVE1_GP1",.source =
	       "EVE1",.description = "EVE1 GP1 interrupt"},
	[9] = {.reg = 0x00000000,.input = -1,.name = "Reserved",.source =
	       "Reserved",.description = "Reserved"},
	[10] = {.reg = 0x00000000,.input = -1,.name = "Reserved",.source =
		"Reserved",.description = "Reserved"},
	[11] = {.reg = 0x00000000,.input = -1,.name = "Reserved",.source =
		"Reserved",.description = "Reserved"},
	[12] = {.reg = 0x00000000,.input = -1,.name = "Reserved",.source =
		"Reserved",.description = "Reserved"},
	[13] = {.reg = 0x00000000,.input = -1,.name = "Reserved",.source =
		"Reserved",.description = "Reserved"},
	[14] = {.reg = 0x00000000,.input = -1,.name = "Reserved",.source =
		"Reserved",.description = "Reserved"},
	[15] = {.reg = 0x00000000,.input = -1,.name = "Reserved",.source =
		"Reserved",.description = "Reserved"},
	[16] = {.reg = 0x00000000,.input = -1,.name = "EVE1_MBX2_INT2",.source =
		"EVE1_MBX2",.description = "EVE1 Mailbox 2 Interrupt 2"},
	[17] = {.reg = 0x00000000,.input = -1,.name = "Reserved",.source =
		"Reserved",.description = "Reserved"},
	[18] = {.reg = 0x00000000,.input = -1,.name = "Reserved",.source =
		"Reserved",.description = "Reserved"},
	[19] = {.reg = 0x00000000,.input = -1,.name = "Reserved",.source =
		"Reserved",.description = "Reserved"},
	[20] = {.reg = 0x00000000,.input = -1,.name = "Reserved",.source =
		"Reserved",.description = "Reserved"},
	[21] = {.reg = 0x00000000,.input = -1,.name = "Reserved",.source =
		"Reserved",.description = "Reserved"},
	[22] = {.reg = 0x00000000,.input = -1,.name = "Reserved",.source =
		"Reserved",.description = "Reserved"},
	[23] = {.reg = 0x00000000,.input = -1,.name = "Reserved",.source =
		"Reserved",.description = "Reserved"},
	[24] = {.reg = 0x00000000,.input = -1,.name = "Reserved",.source =
		"Reserved",.description = "Reserved"},
	[25] = {.reg = 0x00000000,.input = -1,.name = "Reserved",.source =
		"Reserved",.description = "Reserved"},
	[26] = {.reg = 0x00000000,.input = -1,.name = "Reserved",.source =
		"Reserved",.description = "Reserved"},
	[27] = {.reg = 0x00000000,.input = -1,.name = "Reserved",.source =
		"Reserved",.description = "Reserved"},
	[28] = {.reg = 0x00000000,.input = -1,.name = "EVE2_MBX2_INT0",.source =
		"EVE2_MBX2",.description = "EVE2 Mailbox 2 Interrupt 0"},
	[29] = {.reg = 0x00000000,.input = -1,.name = "Reserved",.source =
		"Reserved",.description = "Reserved"},
	[30] = {.reg = 0x00000000,.input = -1,.name = "Reserved",.source =
		"Reserved",.description = "Reserved"},
	[31] = {.reg = 0x00000000,.input = -1,.name = "Reserved",.source =
		"Reserved",.description = "Reserved"},
};

static struct cross_bar_module_input dra7_pruss1_irq_crossbar[] = {
	[0] = {.reg = 0x00000000,.input = -1,.name =
	       "PRUSS1_INTERNAL_IRQ_0",.source = "PRU_ICSS1",.description =
	       "PRU-ICSS1 internal interrupt"},
	[1] = {.reg = 0x00000000,.input = -1,.name =
	       "PRUSS1_INTERNAL_IRQ_1",.source = "PRU_ICSS1",.description =
	       "PRU-ICSS1 internal interrupt"},
	[2] = {.reg = 0x00000000,.input = -1,.name =
	       "PRUSS1_INTERNAL_IRQ_2",.source = "PRU_ICSS1",.description =
	       "PRU-ICSS1 internal interrupt"},
	[3] = {.reg = 0x00000000,.input = -1,.name =
	       "PRUSS1_INTERNAL_IRQ_3",.source = "PRU_ICSS1",.description =
	       "PRU-ICSS1 internal interrupt"},
	[4] = {.reg = 0x00000000,.input = -1,.name =
	       "PRUSS1_INTERNAL_IRQ_4",.source = "PRU_ICSS1",.description =
	       "PRU-ICSS1 internal interrupt"},
	[5] = {.reg = 0x00000000,.input = -1,.name =
	       "PRUSS1_INTERNAL_IRQ_5",.source = "PRU_ICSS1",.description =
	       "PRU-ICSS1 internal interrupt"},
	[6] = {.reg = 0x00000000,.input = -1,.name =
	       "PRUSS1_INTERNAL_IRQ_6",.source = "PRU_ICSS1",.description =
	       "PRU-ICSS1 internal interrupt"},
	[7] = {.reg = 0x00000000,.input = -1,.name =
	       "PRUSS1_INTERNAL_IRQ_7",.source = "PRU_ICSS1",.description =
	       "PRU-ICSS1 internal interrupt"},
	[8] = {.reg = 0x00000000,.input = -1,.name =
	       "PRUSS1_INTERNAL_IRQ_8",.source = "PRU_ICSS1",.description =
	       "PRU-ICSS1 internal interrupt"},
	[9] = {.reg = 0x00000000,.input = -1,.name =
	       "PRUSS1_INTERNAL_IRQ_9",.source = "PRU_ICSS1",.description =
	       "PRU-ICSS1 internal interrupt"},
	[10] = {.reg = 0x00000000,.input = -1,.name =
		"PRUSS1_INTERNAL_IRQ_10",.source = "PRU_ICSS1",.description =
		"PRU-ICSS1 internal interrupt"},
	[11] = {.reg = 0x00000000,.input = -1,.name =
		"PRUSS1_INTERNAL_IRQ_11",.source = "PRU_ICSS1",.description =
		"PRU-ICSS1 internal interrupt"},
	[12] = {.reg = 0x00000000,.input = -1,.name =
		"PRUSS1_INTERNAL_IRQ_12",.source = "PRU_ICSS1",.description =
		"PRU-ICSS1 internal interrupt"},
	[13] = {.reg = 0x00000000,.input = -1,.name =
		"PRUSS1_INTERNAL_IRQ_13",.source = "PRU_ICSS1",.description =
		"PRU-ICSS1 internal interrupt"},
	[14] = {.reg = 0x00000000,.input = -1,.name =
		"PRUSS1_INTERNAL_IRQ_14",.source = "PRU_ICSS1",.description =
		"PRU-ICSS1 internal interrupt"},
	[15] = {.reg = 0x00000000,.input = -1,.name =
		"PRUSS1_INTERNAL_IRQ_15",.source = "PRU_ICSS1",.description =
		"PRU-ICSS1 internal interrupt"},
	[16] = {.reg = 0x00000000,.input = -1,.name =
		"PRUSS1_INTERNAL_IRQ_16",.source = "PRU_ICSS1",.description =
		"PRU-ICSS1 internal interrupt"},
	[17] = {.reg = 0x00000000,.input = -1,.name =
		"PRUSS1_INTERNAL_IRQ_17",.source = "PRU_ICSS1",.description =
		"PRU-ICSS1 internal interrupt"},
	[18] = {.reg = 0x00000000,.input = -1,.name =
		"PRUSS1_INTERNAL_IRQ_18",.source = "PRU_ICSS1",.description =
		"PRU-ICSS1 internal interrupt"},
	[19] = {.reg = 0x00000000,.input = -1,.name =
		"PRUSS1_INTERNAL_IRQ_19",.source = "PRU_ICSS1",.description =
		"PRU-ICSS1 internal interrupt"},
	[20] = {.reg = 0x00000000,.input = -1,.name =
		"PRUSS1_INTERNAL_IRQ_20",.source = "PRU_ICSS1",.description =
		"PRU-ICSS1 internal interrupt"},
	[21] = {.reg = 0x00000000,.input = -1,.name =
		"PRUSS1_INTERNAL_IRQ_21",.source = "PRU_ICSS1",.description =
		"PRU-ICSS1 internal interrupt"},
	[22] = {.reg = 0x00000000,.input = -1,.name =
		"PRUSS1_INTERNAL_IRQ_22",.source = "PRU_ICSS1",.description =
		"PRU-ICSS1 internal interrupt"},
	[23] = {.reg = 0x00000000,.input = -1,.name =
		"PRUSS1_INTERNAL_IRQ_23",.source = "PRU_ICSS1",.description =
		"PRU-ICSS1 internal interrupt"},
	[24] = {.reg = 0x00000000,.input = -1,.name =
		"PRUSS1_INTERNAL_IRQ_24",.source = "PRU_ICSS1",.description =
		"PRU-ICSS1 internal interrupt"},
	[25] = {.reg = 0x00000000,.input = -1,.name =
		"PRUSS1_INTERNAL_IRQ_25",.source = "PRU_ICSS1",.description =
		"PRU-ICSS1 internal interrupt"},
	[26] = {.reg = 0x00000000,.input = -1,.name =
		"PRUSS1_INTERNAL_IRQ_26",.source = "PRU_ICSS1",.description =
		"PRU-ICSS1 internal interrupt"},
	[27] = {.reg = 0x00000000,.input = -1,.name =
		"PRUSS1_INTERNAL_IRQ_27",.source = "PRU_ICSS1",.description =
		"PRU-ICSS1 internal interrupt"},
	[28] = {.reg = 0x00000000,.input = -1,.name =
		"PRUSS1_INTERNAL_IRQ_28",.source = "PRU_ICSS1",.description =
		"PRU-ICSS1 internal interrupt"},
	[29] = {.reg = 0x00000000,.input = -1,.name =
		"PRUSS1_INTERNAL_IRQ_29",.source = "PRU_ICSS1",.description =
		"PRU-ICSS1 internal interrupt"},
	[30] = {.reg = 0x00000000,.input = -1,.name =
		"PRUSS1_INTERNAL_IRQ_30",.source = "PRU_ICSS1",.description =
		"PRU-ICSS1 internal interrupt"},
	[31] = {.reg = 0x00000000,.input = -1,.name =
		"PRUSS1_INTERNAL_IRQ_31",.source = "PRU_ICSS1",.description =
		"PRU-ICSS1 internal interrupt"},
	[32] = {.reg = 0x4A0028C8,.input = 1,.name = NULL,.source =
		NULL,.description = NULL},
	[33] = {.reg = 0x4A0028CA,.input = 2,.name = NULL,.source =
		NULL,.description = NULL},
	[34] = {.reg = 0x4A0028CC,.input = 3,.name = NULL,.source =
		NULL,.description = NULL},
	[35] = {.reg = 0x4A0028CE,.input = 4,.name = NULL,.source =
		NULL,.description = NULL},
	[36] = {.reg = 0x4A0028D0,.input = 5,.name = NULL,.source =
		NULL,.description = NULL},
	[37] = {.reg = 0x4A0028D2,.input = 6,.name = NULL,.source =
		NULL,.description = NULL},
	[38] = {.reg = 0x4A0028D4,.input = 7,.name = NULL,.source =
		NULL,.description = NULL},
	[39] = {.reg = 0x4A0028D6,.input = 8,.name = NULL,.source =
		NULL,.description = NULL},
	[40] = {.reg = 0x4A0028D8,.input = 9,.name = NULL,.source =
		NULL,.description = NULL},
	[41] = {.reg = 0x4A0028DA,.input = 10,.name = NULL,.source =
		NULL,.description = NULL},
	[42] = {.reg = 0x4A0028DC,.input = 11,.name = NULL,.source =
		NULL,.description = NULL},
	[43] = {.reg = 0x4A0028DE,.input = 12,.name = NULL,.source =
		NULL,.description = NULL},
	[44] = {.reg = 0x4A0028E0,.input = 13,.name = NULL,.source =
		NULL,.description = NULL},
	[45] = {.reg = 0x4A0028E2,.input = 14,.name = NULL,.source =
		NULL,.description = NULL},
	[46] = {.reg = 0x4A0028E4,.input = 15,.name = NULL,.source =
		NULL,.description = NULL},
	[47] = {.reg = 0x4A0028E6,.input = 16,.name = NULL,.source =
		NULL,.description = NULL},
	[48] = {.reg = 0x4A0028E8,.input = 17,.name = NULL,.source =
		NULL,.description = NULL},
	[49] = {.reg = 0x4A0028EA,.input = 18,.name = NULL,.source =
		NULL,.description = NULL},
	[50] = {.reg = 0x4A0028EC,.input = 19,.name = NULL,.source =
		NULL,.description = NULL},
	[51] = {.reg = 0x4A0028EE,.input = 20,.name = NULL,.source =
		NULL,.description = NULL},
	[52] = {.reg = 0x4A0028F0,.input = 21,.name = NULL,.source =
		NULL,.description = NULL},
	[53] = {.reg = 0x4A0028F2,.input = 22,.name = NULL,.source =
		NULL,.description = NULL},
	[54] = {.reg = 0x4A0028F4,.input = 23,.name = NULL,.source =
		NULL,.description = NULL},
	[55] = {.reg = 0x4A0028F6,.input = 24,.name = NULL,.source =
		NULL,.description = NULL},
	[56] = {.reg = 0x4A0028F8,.input = 25,.name = NULL,.source =
		NULL,.description = NULL},
	[57] = {.reg = 0x4A0028FA,.input = 26,.name = NULL,.source =
		NULL,.description = NULL},
	[58] = {.reg = 0x4A0028FC,.input = 27,.name = NULL,.source =
		NULL,.description = NULL},
	[59] = {.reg = 0x4A0028FE,.input = 28,.name = NULL,.source =
		NULL,.description = NULL},
	[60] = {.reg = 0x4A002900,.input = 29,.name = NULL,.source =
		NULL,.description = NULL},
	[61] = {.reg = 0x4A002902,.input = 30,.name = NULL,.source =
		NULL,.description = NULL},
	[62] = {.reg = 0x4A002904,.input = 31,.name = NULL,.source =
		NULL,.description = NULL},
	[63] = {.reg = 0x4A002906,.input = 32,.name = NULL,.source =
		NULL,.description = NULL},
};

static struct cross_bar_module_input dra7_pruss2_irq_crossbar[] = {
	[0] = {.reg = 0x00000000,.input = -1,.name =
	       "PRUSS2_INTERNAL_IRQ_0",.source = "PRU_ICSS2",.description =
	       "PRU-ICSS2 internal interrupt"},
	[1] = {.reg = 0x00000000,.input = -1,.name =
	       "PRUSS2_INTERNAL_IRQ_1",.source = "PRU_ICSS2",.description =
	       "PRU-ICSS2 internal interrupt"},
	[2] = {.reg = 0x00000000,.input = -1,.name =
	       "PRUSS2_INTERNAL_IRQ_2",.source = "PRU_ICSS2",.description =
	       "PRU-ICSS2 internal interrupt"},
	[3] = {.reg = 0x00000000,.input = -1,.name =
	       "PRUSS2_INTERNAL_IRQ_3",.source = "PRU_ICSS2",.description =
	       "PRU-ICSS2 internal interrupt"},
	[4] = {.reg = 0x00000000,.input = -1,.name =
	       "PRUSS2_INTERNAL_IRQ_4",.source = "PRU_ICSS2",.description =
	       "PRU-ICSS2 internal interrupt"},
	[5] = {.reg = 0x00000000,.input = -1,.name =
	       "PRUSS2_INTERNAL_IRQ_5",.source = "PRU_ICSS2",.description =
	       "PRU-ICSS2 internal interrupt"},
	[6] = {.reg = 0x00000000,.input = -1,.name =
	       "PRUSS2_INTERNAL_IRQ_6",.source = "PRU_ICSS2",.description =
	       "PRU-ICSS2 internal interrupt"},
	[7] = {.reg = 0x00000000,.input = -1,.name =
	       "PRUSS2_INTERNAL_IRQ_7",.source = "PRU_ICSS2",.description =
	       "PRU-ICSS2 internal interrupt"},
	[8] = {.reg = 0x00000000,.input = -1,.name =
	       "PRUSS2_INTERNAL_IRQ_8",.source = "PRU_ICSS2",.description =
	       "PRU-ICSS2 internal interrupt"},
	[9] = {.reg = 0x00000000,.input = -1,.name =
	       "PRUSS2_INTERNAL_IRQ_9",.source = "PRU_ICSS2",.description =
	       "PRU-ICSS2 internal interrupt"},
	[10] = {.reg = 0x00000000,.input = -1,.name =
		"PRUSS2_INTERNAL_IRQ_10",.source = "PRU_ICSS2",.description =
		"PRU-ICSS2 internal interrupt"},
	[11] = {.reg = 0x00000000,.input = -1,.name =
		"PRUSS2_INTERNAL_IRQ_11",.source = "PRU_ICSS2",.description =
		"PRU-ICSS2 internal interrupt"},
	[12] = {.reg = 0x00000000,.input = -1,.name =
		"PRUSS2_INTERNAL_IRQ_12",.source = "PRU_ICSS2",.description =
		"PRU-ICSS2 internal interrupt"},
	[13] = {.reg = 0x00000000,.input = -1,.name =
		"PRUSS2_INTERNAL_IRQ_13",.source = "PRU_ICSS2",.description =
		"PRU-ICSS2 internal interrupt"},
	[14] = {.reg = 0x00000000,.input = -1,.name =
		"PRUSS2_INTERNAL_IRQ_14",.source = "PRU_ICSS2",.description =
		"PRU-ICSS2 internal interrupt"},
	[15] = {.reg = 0x00000000,.input = -1,.name =
		"PRUSS2_INTERNAL_IRQ_15",.source = "PRU_ICSS2",.description =
		"PRU-ICSS2 internal interrupt"},
	[16] = {.reg = 0x00000000,.input = -1,.name =
		"PRUSS2_INTERNAL_IRQ_16",.source = "PRU_ICSS2",.description =
		"PRU-ICSS2 internal interrupt"},
	[17] = {.reg = 0x00000000,.input = -1,.name =
		"PRUSS2_INTERNAL_IRQ_17",.source = "PRU_ICSS2",.description =
		"PRU-ICSS2 internal interrupt"},
	[18] = {.reg = 0x00000000,.input = -1,.name =
		"PRUSS2_INTERNAL_IRQ_18",.source = "PRU_ICSS2",.description =
		"PRU-ICSS2 internal interrupt"},
	[19] = {.reg = 0x00000000,.input = -1,.name =
		"PRUSS2_INTERNAL_IRQ_19",.source = "PRU_ICSS2",.description =
		"PRU-ICSS2 internal interrupt"},
	[20] = {.reg = 0x00000000,.input = -1,.name =
		"PRUSS2_INTERNAL_IRQ_20",.source = "PRU_ICSS2",.description =
		"PRU-ICSS2 internal interrupt"},
	[21] = {.reg = 0x00000000,.input = -1,.name =
		"PRUSS2_INTERNAL_IRQ_21",.source = "PRU_ICSS2",.description =
		"PRU-ICSS2 internal interrupt"},
	[22] = {.reg = 0x00000000,.input = -1,.name =
		"PRUSS2_INTERNAL_IRQ_22",.source = "PRU_ICSS2",.description =
		"PRU-ICSS2 internal interrupt"},
	[23] = {.reg = 0x00000000,.input = -1,.name =
		"PRUSS2_INTERNAL_IRQ_23",.source = "PRU_ICSS2",.description =
		"PRU-ICSS2 internal interrupt"},
	[24] = {.reg = 0x00000000,.input = -1,.name =
		"PRUSS2_INTERNAL_IRQ_24",.source = "PRU_ICSS2",.description =
		"PRU-ICSS2 internal interrupt"},
	[25] = {.reg = 0x00000000,.input = -1,.name =
		"PRUSS2_INTERNAL_IRQ_25",.source = "PRU_ICSS2",.description =
		"PRU-ICSS2 internal interrupt"},
	[26] = {.reg = 0x00000000,.input = -1,.name =
		"PRUSS2_INTERNAL_IRQ_26",.source = "PRU_ICSS2",.description =
		"PRU-ICSS2 internal interrupt"},
	[27] = {.reg = 0x00000000,.input = -1,.name =
		"PRUSS2_INTERNAL_IRQ_27",.source = "PRU_ICSS2",.description =
		"PRU-ICSS2 internal interrupt"},
	[28] = {.reg = 0x00000000,.input = -1,.name =
		"PRUSS2_INTERNAL_IRQ_28",.source = "PRU_ICSS2",.description =
		"PRU-ICSS2 internal interrupt"},
	[29] = {.reg = 0x00000000,.input = -1,.name =
		"PRUSS2_INTERNAL_IRQ_29",.source = "PRU_ICSS2",.description =
		"PRU-ICSS2 internal interrupt"},
	[30] = {.reg = 0x00000000,.input = -1,.name =
		"PRUSS2_INTERNAL_IRQ_30",.source = "PRU_ICSS2",.description =
		"PRU-ICSS2 internal interrupt"},
	[31] = {.reg = 0x00000000,.input = -1,.name =
		"PRUSS2_INTERNAL_IRQ_31",.source = "PRU_ICSS2",.description =
		"PRU-ICSS2 internal interrupt"},
	[32] = {.reg = 0x4A002908,.input = 1,.name = NULL,.source =
		NULL,.description = NULL},
	[33] = {.reg = 0x4A00290A,.input = 2,.name = NULL,.source =
		NULL,.description = NULL},
	[34] = {.reg = 0x4A00290C,.input = 3,.name = NULL,.source =
		NULL,.description = NULL},
	[35] = {.reg = 0x4A00290E,.input = 4,.name = NULL,.source =
		NULL,.description = NULL},
	[36] = {.reg = 0x4A002910,.input = 5,.name = NULL,.source =
		NULL,.description = NULL},
	[37] = {.reg = 0x4A002912,.input = 6,.name = NULL,.source =
		NULL,.description = NULL},
	[38] = {.reg = 0x4A002914,.input = 7,.name = NULL,.source =
		NULL,.description = NULL},
	[39] = {.reg = 0x4A002916,.input = 8,.name = NULL,.source =
		NULL,.description = NULL},
	[40] = {.reg = 0x4A002918,.input = 9,.name = NULL,.source =
		NULL,.description = NULL},
	[41] = {.reg = 0x4A00291A,.input = 10,.name = NULL,.source =
		NULL,.description = NULL},
	[42] = {.reg = 0x4A00291C,.input = 11,.name = NULL,.source =
		NULL,.description = NULL},
	[43] = {.reg = 0x4A00291E,.input = 12,.name = NULL,.source =
		NULL,.description = NULL},
	[44] = {.reg = 0x4A002920,.input = 13,.name = NULL,.source =
		NULL,.description = NULL},
	[45] = {.reg = 0x4A002922,.input = 14,.name = NULL,.source =
		NULL,.description = NULL},
	[46] = {.reg = 0x4A002924,.input = 15,.name = NULL,.source =
		NULL,.description = NULL},
	[47] = {.reg = 0x4A002926,.input = 16,.name = NULL,.source =
		NULL,.description = NULL},
	[48] = {.reg = 0x4A002928,.input = 17,.name = NULL,.source =
		NULL,.description = NULL},
	[49] = {.reg = 0x4A00292A,.input = 18,.name = NULL,.source =
		NULL,.description = NULL},
	[50] = {.reg = 0x4A00292C,.input = 19,.name = NULL,.source =
		NULL,.description = NULL},
	[51] = {.reg = 0x4A00292E,.input = 20,.name = NULL,.source =
		NULL,.description = NULL},
	[52] = {.reg = 0x4A002930,.input = 21,.name = NULL,.source =
		NULL,.description = NULL},
	[53] = {.reg = 0x4A002932,.input = 22,.name = NULL,.source =
		NULL,.description = NULL},
	[54] = {.reg = 0x4A002934,.input = 23,.name = NULL,.source =
		NULL,.description = NULL},
	[55] = {.reg = 0x4A002936,.input = 24,.name = NULL,.source =
		NULL,.description = NULL},
	[56] = {.reg = 0x4A002938,.input = 25,.name = NULL,.source =
		NULL,.description = NULL},
	[57] = {.reg = 0x4A00293A,.input = 26,.name = NULL,.source =
		NULL,.description = NULL},
	[58] = {.reg = 0x4A00293C,.input = 27,.name = NULL,.source =
		NULL,.description = NULL},
	[59] = {.reg = 0x4A00293E,.input = 28,.name = NULL,.source =
		NULL,.description = NULL},
	[60] = {.reg = 0x4A002940,.input = 29,.name = NULL,.source =
		NULL,.description = NULL},
	[61] = {.reg = 0x4A002942,.input = 30,.name = NULL,.source =
		NULL,.description = NULL},
	[62] = {.reg = 0x4A002944,.input = 31,.name = NULL,.source =
		NULL,.description = NULL},
	[63] = {.reg = 0x4A002946,.input = 32,.name = NULL,.source =
		NULL,.description = NULL},
};

#define DRA7_IRQCROSSBAR_MASK	0x1FF

#endif /* _DRA7_IRQ_CROSS_BAR_DATA_H */
