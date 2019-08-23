/******************************************************************************
*
* Copyright (C) 2018-2019 Xilinx, Inc.  All rights reserved.
*
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in
* all copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
* THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
* THE SOFTWARE.
*
*
*
* Naming Convention: <MODULE>_<REGISTER>[_<FIELD>[_<DESC>]]
*     <MODULE>       Module name (e.g. can or usb)
*     <REGISTER>     Register within the current module
*     [_<FIELD>]     Bit field within a register
*     [_<DESC>]      Type of bit field define:
*         SHIFT:     Least significant bit for the field
*         WIDTH:     Size of field in bites
*         MASK:      A masking over a range of bits or a bit to
*                    be used for setting or clearing
*
******************************************************************************/

#ifndef XPM_REGS_H
#define XPM_REGS_H

#ifdef __cplusplus
extern "C" {
#endif

/**
 * Base Addresses
 */
#define PMC_GLOBAL_BASEADDR		0xF1110000
#define CFU_APB_BASEADDR		0XF12B0000
#define CPM_CRCPM_BASEADDR		0xFCA00000
#define PCIEA_ATTRIB_0_BASEADDR		0xFCA50000
#define PCIEA_ATTRIB_1_BASEADDR		0xFCA60000
#define PMC_TAP_BASEADDR		0XF11A0000

/**
 * PMC Global module
 */
#define DOMAIN_ISO_CTRL_OFFSET					(0x10000U)
#define PMC_GLOBAL_DOMAIN_ISO_CONTROL				( ( PMC_GLOBAL_BASEADDR ) + DOMAIN_ISO_CTRL_OFFSET )
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_VCCAUX_VCCRAM_SHIFT		18
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_VCCAUX_VCCRAM_WIDTH		1
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_VCCAUX_VCCRAM_MASK		0X00040000
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_VCCRAM_SOC_SHIFT		17
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_VCCRAM_SOC_WIDTH		1
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_VCCRAM_SOC_MASK		0X00020000
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_VCCAUX_SOC_SHIFT		16
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_VCCAUX_SOC_WIDTH		1
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_VCCAUX_SOC_MASK		0X00010000
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_PL_SOC_SHIFT		15
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_PL_SOC_WIDTH		1
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_PL_SOC_MASK			0X00008000
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_PMC_SOC_SHIFT		14
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_PMC_SOC_WIDTH		1
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_PMC_SOC_MASK		0X00004000
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_PMC_SOC_NPI_SHIFT		13
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_PMC_SOC_NPI_WIDTH		1
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_PMC_SOC_NPI_MASK		0X00002000
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_PMC_PL_SHIFT		12
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_PMC_PL_WIDTH		1
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_PMC_PL_MASK			0X00001000
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_PMC_PL_TEST_SHIFT		11
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_PMC_PL_TEST_WIDTH		1
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_PMC_PL_TEST_MASK		0X00000800
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_PMC_PL_CFRAME_SHIFT		10
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_PMC_PL_CFRAME_WIDTH		1
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_PMC_PL_CFRAME_MASK		0X00000400
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_PMC_LPD_SHIFT		9
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_PMC_LPD_WIDTH		1
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_PMC_LPD_MASK		0X00000200
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_PMC_LPD_DFX_SHIFT		8
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_PMC_LPD_DFX_WIDTH		1
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_PMC_LPD_DFX_MASK		0X00000100
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_LPD_SOC_SHIFT		7
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_LPD_SOC_WIDTH		1
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_LPD_SOC_MASK		0X00000080
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_LPD_PL_SHIFT		6
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_LPD_PL_WIDTH		1
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_LPD_PL_MASK			0X00000040
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_LPD_PL_TEST_SHIFT		5
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_LPD_PL_TEST_WIDTH		1
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_LPD_PL_TEST_MASK		0X00000020
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_LPD_CPM_SHIFT		4
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_LPD_CPM_WIDTH		1
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_LPD_CPM_MASK		0X00000010
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_LPD_CPM_DFX_SHIFT		3
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_LPD_CPM_DFX_WIDTH		1
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_LPD_CPM_DFX_MASK		0X00000008
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_FPD_SOC_SHIFT		2
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_FPD_SOC_WIDTH		1
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_FPD_SOC_MASK		0X00000004
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_FPD_PL_SHIFT		1
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_FPD_PL_WIDTH		1
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_FPD_PL_MASK			0X00000002
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_FPD_PL_TEST_SHIFT		0
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_FPD_PL_TEST_WIDTH		1
#define PMC_GLOBAL_DOMAIN_ISO_CNTRL_FPD_PL_TEST_MASK		0X00000001

#define PWR_SUPPLY_STATUS_OFFSET			0x10CU
#define PMC_GLOBAL_PWR_SUPPLY_STATUS_VCCINT_RAM_MASK	0X00000080
#define PMC_GLOBAL_PWR_SUPPLY_STATUS_VCCINT_PL_MASK	0X00000040
#define PMC_GLOBAL_PWR_SUPPLY_STATUS_VCCAUX_MASK	0X00000020
#define PMC_GLOBAL_PWR_SUPPLY_STATUS_VCCINT_SOC_MASK	0X00000010
#define PMC_GLOBAL_PWR_SUPPLY_STATUS_VCCINT_LPD_MASK	0X00000008
#define PMC_GLOBAL_PWR_SUPPLY_STATUS_VCCINT_FPD_MASK	0X00000004
#define PMC_GLOBAL_PWR_SUPPLY_STATUS_VCCINT_PMC_MASK	0X00000002
#define PMC_GLOBAL_PWR_SUPPLY_STATUS_VCCAUX_PMC_MASK	0X00000001

#define CFU_APB_CFU_FGCR    ( ( CFU_APB_BASEADDR ) + 0X00000018 )
#define CFU_APB_CFU_FGCR_OFFSET    0X00000018
#define CFU_APB_CFU_FGCR_INIT_COMPLETE_MASK    0X00000001
#define CFU_APB_CFU_FGCR_SC_HBC_TRIGGER_MASK    0X00002000
#define CFU_APB_CFU_FGCR_EOS_MASK		0x00000002
#define CFU_APB_CFU_MASK_OFFSET			0X00000028
#define CFU_APB_CFU_MASK_INIT_COMPLETE_ENABLE_MASK    0x00000001
#define CFU_APB_CFU_STATUS_OFFSET		0X00000100
#define CFU_APB_CFU_STATUS_SCAN_CLEAR_PASS_MASK    0X00002000
#define CFU_APB_CFU_STATUS_SCAN_CLEAR_DONE_MASK    0X00000008
#define CFU_APB_CFU_PROTECT_OFFSET    0X00000014

#define CPM_PCSR_MASK_OFFSET	0X00000000
#define CPM_PCSR_MASK_SCAN_CLEAR_TRIGGER_WEN_MASK    0x00000800
#define CPM_PCSR_PCR_OFFSET	0X00000004
#define CPM_PCSR_PCR_SCAN_CLEAR_TRIGGER_MASK    0X00000800
#define CPM_PCSR_PSR_OFFSET	0X00000008
#define CPM_PCSR_PSR_SCAN_CLEAR_DONE_MASK    0X00000002
#define CPM_PCSR_PSR_SCAN_CLEAR_PASS_MASK    0X00000004
#define CPM_PCSR_LOCK_OFFSET	0X0000000C
#define CPM_PCSR_ECO_OFFSET	0X00000020

#define GTY_PCSR_LOCK_OFFSET	0x0000000C
#define GTY_PCSR_MASK_OFFSET	0x00000000
#define GTY_PCSR_CONTROL_OFFSET	0x00000004
#define GTY_PCSR_STATUS_OFFSET  0x00000008
#define GTY_PCSR_INITCTRL_MASK			0x01000000
#define GTY_PCSR_MEM_CLEAR_TRIGGER_MASK		0x00040000
#define GTY_PCSR_BISR_TRIGGER_MASK		0x20000000
#define GTY_PCSR_STATUS_MEM_CLEAR_DONE_MASK	0x00000040
#define GTY_PCSR_STATUS_MEM_CLEAR_PASS_MASK	0x00000080
#define GTY_PCSR_STATUS_BISR_DONE_MASK		0x00080000
#define GTY_PCSR_STATUS_BISR_PASS_MASK		0x00100000

#define EFUSE_CACHE_MISC_CTRL_OFFSET		0X000000A0
#define EFUSE_CACHE_MISC_CTRL_LBIST_EN_MASK	0X00004000
#define EFUSE_CACHE_TRIM_CFRM_VGG_0_OFFSET	0X000001B4
#define EFUSE_CACHE_TRIM_CFRM_VGG_1_OFFSET	0X000001B8
#define EFUSE_CACHE_TRIM_CFRM_VGG_2_OFFSET	0X000001BC
#define EFUSE_CACHE_TRIM_CRAM_OFFSET		0X000001C0
#define EFUSE_CACHE_TRIM_BRAM_OFFSET		0X00000098
#define EFUSE_CACHE_TRIM_URAM_OFFSET		0X0000009C
#define EFUSE_CACHE_BISR_RSVD_0_OFFSET		0X00000300
#define EFUSE_CACHE_TBITS1_BISR_RSVD_OFFSET	0X00000400
#define EFUSE_CACHE_TBITS2_BISR_RSVD_OFFSET	0X00000800

#define PCIEA_ATTRIB_0_FABRICEN 	( PCIEA_ATTRIB_0_BASEADDR + 0x00000E84 )
#define PCIEA_ATTRIB_1_FABRICEN 	( PCIEA_ATTRIB_1_BASEADDR + 0x00000E84 )
#define PCIEA_ATTRIB_0_FABRICEN_ATTR_SHIFT	0
#define PCIEA_ATTRIB_1_FABRICEN_ATTR_SHIFT	0

#define CPM_CRCPM_RST_CPI0	(CPM_CRCPM_BASEADDR + 0x00000324)
#define CPM_CRCPM_RST_CPI1	(CPM_CRCPM_BASEADDR + 0x00000328)
#define CPM_CRCPM_RST_CPI0_RESET_SHIFT		0
#define CPM_CRCPM_RST_CPI1_RESET_SHIFT		0

#define DOMAIN_ISO_CTRL_OFFSET		(0x10000U)
#define PMC_GLOBAL_DOMAIN_ISO_CONTROL	( ( PMC_GLOBAL_BASEADDR ) + DOMAIN_ISO_CTRL_OFFSET )

#define PMC_GLOBAL_PERS_GLOB_GEN_STORAGE0	( ( PMC_GLOBAL_BASEADDR ) + 0X00000050 )

#define PMC_GLOBAL_PL_STATUS_OFFSET		0X00000880
#define PMC_GLOBAL_PL_STATUS_POR_PL_B_MASK	0x00000001

#define PMC_GLOBAL_PMC_GSW_ERR_OFFSET		0X00000064
#define PMC_GLOBAL_PMC_GSW_ERR_CR_FLAG_SHIFT	30

#define PMC_GLOBAL_ERR1_STATUS_OFFSET			(0X00020000U)
#define PMC_GLOBAL_ERR1_STATUS_DDRMC_MC_NCR_MASK	0X00080000
#define PMC_GLOBAL_ERR1_STATUS_NOC_TYPE_1_NCR_MASK	0X00002000

/**
 * PMC Global GIC Proxy Module
 */
#define PMC_GLOBAL_GIC_PROXY_BASE_OFFSET		0x30000
#define GIC_PROXY_GROUP_OFFSET(g)			(0x14U * (g))

#define PMC_GLOBAL_GICP_IRQ_ENABLE_OFFSET		0x300A8
#define PMC_GLOBAL_GICP_IRQ_DISABLE_OFFSET		0x300AC

/**
 * GIC Proxy register offsets
 */
#define GIC_PROXY_IRQ_STATUS_OFFSET	0x0U
#define GIC_PROXY_IRQ_MASK_OFFSET	0x4U
#define GIC_PROXY_IRQ_ENABLE_OFFSET	0x8U
#define GIC_PROXY_IRQ_DISABLE_OFFSET	0xCU

#define GIC_PROXY_ALL_MASK		0xFFFFFFFF

/**
 * PMC IOU SLCR Module
 */
#define PMC_IOU_SLCR_WPROT0_OFFSET 	0X00000828

/**
 * PSM Global Module
 */
#define PSM_GLOBAL_SCAN_CLEAR_FPD_OFFSET	0x0000092CU

#define PSM_GLOBAL_SCAN_CLEAR_TRIGGER            ((u32)0x1U)
#define PSM_GLOBAL_SCAN_CLEAR_DONE_STATUS        ((u32)0x2U)
#define PSM_GLOBAL_SCAN_CLEAR_PASS_STATUS        ((u32)0x4U)

#define PSM_GLOBAL_MBIST_RST_OFFSET             0x00000900U
#define PSM_GLOBAL_MBIST_PG_EN_OFFSET           0x00000904U
#define PSM_GLOBAL_MBIST_SETUP_OFFSET           0x00000908U
#define PSM_GLOBAL_MBIST_DONE_OFFSET            0x00000910U
#define PSM_GLOBAL_MBIST_GO_OFFSET            	0x00000914U

#define PSM_GLOBAL_MBIST_RST_FPD_MASK		0X00000010
#define PSM_GLOBAL_MBIST_PG_EN_FPD_MASK		0X00000010
#define PSM_GLOBAL_MBIST_SETUP_FPD_MASK		0X00000010
#define PSM_GLOBAL_MBIST_DONE_FPD_MASK		0X00000010
#define PSM_GLOBAL_MBIST_GO_FPD_MASK		0X00000010

/**
 * LPD IOU SLCR Module
 */
#define LPD_IOU_SLCR_WPROT0_OFFSET 	0X00000728

/**
 * LPD SLCR Module
 */
#define LPD_SLCR_WPROT0_OFFSET			0X00000000
#define	LPD_SLCR_BISR_CACHE_DATA_0_OFFSET 	0X0000010CU
#define LPD_SLCR_BISR_CACHE_CTRL_0_OFFSET	0x00000100U
#define LPD_SLCR_CACHE_CTRL_0_BISR_TRIGGER_MASK	0X00000001U
#define LPD_SLCR_BISR_CACHE_CTRL_1_OFFSET	0x00000104U
#define LPD_SLCR_CACHE_CTRL_1_PGEN0_MASK	0X00000001U
#define LPD_SLCR_CACHE_CTRL_1_PGEN1_MASK	0X00000002U
#define LPD_SLCR_BISR_CACHE_STATUS_OFFSET	0x00000108U
#define LPD_SLCR_BISR_PASS_GLOBAL_MASK		0X8000000U
#define LPD_SLCR_BISR_DONE_GLOBAL_MASK		0X4000000U
#define LPD_SLCR_BISR_PASS_1_MASK		0X0000008U
#define LPD_SLCR_BISR_DONE_1_MASK		0X0000004U
#define LPD_SLCR_BISR_PASS_0_MASK		0X0000002U
#define LPD_SLCR_BISR_DONE_0_MASK		0X0000001U

/**
 * Register: LPD_SLCR_SECURE
 */
#define LPD_SLCR_SECURE_WPROT0_OFFSET		0X00000000U
#define LPD_SLCR_SECURE_ADMA_0_OFFSET		0X00000060U

/**
 * FPD_SLCR Module
 */
#define FPD_SLCR_WPROT0_OFFSET			0X00000000
#define FPD_SLCR_BISR_CACHE_DATA_0_OFFSET 	0X0000040C
#define FPD_SLCR_BISR_CACHE_CTRL_0_OFFSET	0x00000400U
#define FPD_SLCR_CACHE_CTRL_0_BISR_TRIGGER_MASK	0X00000001U
#define FPD_SLCR_BISR_CACHE_CTRL_1_OFFSET	0x00000404U
#define FPD_SLCR_CACHE_CTRL_1_PGEN0_MASK	0X00000001U
#define FPD_SLCR_CACHE_CTRL_1_PGEN1_MASK	0X00000002U
#define FPD_SLCR_CACHE_CTRL_1_PGEN2_MASK	0X00000004U
#define FPD_SLCR_CACHE_CTRL_1_PGEN3_MASK	0X00000008U
#define FPD_SLCR_BISR_CACHE_STATUS_OFFSET	0x00000408U
#define FPD_SLCR_BISR_PASS_3_MASK		0X0000200U
#define FPD_SLCR_BISR_DONE_3_MASK		0X0000100U
#define FPD_SLCR_BISR_PASS_2_MASK		0X0000080U
#define FPD_SLCR_BISR_DONE_2_MASK		0X0000040U
#define FPD_SLCR_BISR_PASS_1_MASK		0X0000020U
#define FPD_SLCR_BISR_DONE_1_MASK		0X0000010U
#define FPD_SLCR_BISR_PASS_0_MASK		0X0000008U
#define FPD_SLCR_BISR_DONE_0_MASK		0X0000004U
#define FPD_SLCR_BISR_PASS_GLOBAL_MASK		0X0000002U
#define FPD_SLCR_BISR_DONE_GLOBAL_MASK		0X0000001U

#define APU_DUAL_RVBARADDR0L_OFFSET		0x40
#define APU_DUAL_RVBARADDR0H_OFFSET		0x44
#define APU_DUAL_RVBARADDR1L_OFFSET		0x48
#define APU_DUAL_RVBARADDR1H_OFFSET		0x4C

#define RPU_0_CFG_OFFSET		0x00000100U
#define RPU_1_CFG_OFFSET		0x00000200U
#define RPU_GLBL_CNTL_OFFSET		0x00000000U

#define CRL_PSM_RST_MODE_OFFSET		0x00000370U

#define FPD_APU_PWRCTL_OFFSET		0X00000090U

#define RPU_0_PWRDWN_OFFSET		0X00000108U
#define RPU_1_PWRDWN_OFFSET		0X00000208U


/**
 * AMS_ROOT Module
 */
#define AMS_ROOT_REG_PCSR_LOCK_OFFSET		0X0000000C
#define AMS_ROOT_TOKEN_MNGR_OFFSET		0X00000104
#define AMS_ROOT_TOKEN_MNGR_BYPASS_FPD_MASK	0X00040000
#define AMS_ROOT_TOKEN_MNGR_BYPASS_LPD_MASK	0X00080000
#define AMS_ROOT_TOKEN_MNGR_BYPASS_PL_MASK	0X00100000

/**
 * CFU APB Module
 */
#define CFU_APB_CFU_FGCR_OFFSET				0X00000018
#define CFU_APB_CFU_FGCR_INIT_COMPLETE_MASK		0X00000001
#define CFU_APB_CFU_FGCR_SC_HBC_TRIGGER_MASK		0X00002000
#define CFU_APB_CFU_MASK_OFFSET				0X00000028
#define CFU_APB_CFU_MASK_INIT_COMPLETE_ENABLE_MASK	0x00000001
#define CFU_APB_CFU_STATUS_OFFSET			0X00000100
#define CFU_APB_CFU_STATUS_SCAN_CLEAR_PASS_MASK		0X00002000
#define CFU_APB_CFU_STATUS_SCAN_CLEAR_DONE_MASK		0X00000008
#define CFU_APB_CFU_PROTECT_OFFSET			0X00000014

/**
 * CPM PCSR Module
 */
#define CPM_PCSR_MASK_OFFSET				0X00000000
#define CPM_PCSR_MASK_SCAN_CLEAR_TRIGGER_WEN_MASK	0x00000800
#define CPM_PCSR_PCR_OFFSET				0X00000004
#define CPM_PCSR_PCR_SCAN_CLEAR_TRIGGER_MASK		0X00000800
#define CPM_PCSR_PSR_OFFSET				0X00000008
#define CPM_PCSR_PSR_SCAN_CLEAR_DONE_MASK		0X00000002
#define CPM_PCSR_PSR_SCAN_CLEAR_PASS_MASK		0X00000004
#define CPM_PCSR_LOCK_OFFSET				0X0000000C
#define CPM_PCSR_ECO_OFFSET				0X00000020

/**
 * CPM CRCPM Module
 */
#define CPM_CRCPM_RST_CPI0			(CPM_CRCPM_BASEADDR + 0x00000324)
#define CPM_CRCPM_RST_CPI0_RESET_SHIFT		0

#define CPM_CRCPM_RST_CPI1			(CPM_CRCPM_BASEADDR + 0x00000328)
#define CPM_CRCPM_RST_CPI1_RESET_SHIFT		0

/**
 * CPM_SLCR Module
 */
#define CPM_SLCR_BISR_CACHE_DATA_0_OFFSET 	0X000003F4
#define CPM_SLCR_BISR_CACHE_CTRL_OFFSET 	0X000003F0
#define CPM_SLCR_BISR_CACHE_STATUS_OFFSET 	0X000003EC
#define CPM_SLCR_BISR_CACHE_CTRL_CLR_MASK	0x00000010
#define CPM_SLCR_BISR_CACHE_CTRL_TRIGGER_MASK	0x00000001
#define CPM_SLCR_BISR_CACHE_STATUS_DONE_MASK	0x00000001
#define CPM_SLCR_BISR_CACHE_STATUS_PASS_MASK	0x00000002

/**
 * CPM_SLCR_SECURE Module
 */
#define CPM_SLCR_SECURE_WPROT0_OFFSET 			0X00000000
#define CPM_SLCR_SECURE_OD_MBIST_RESET_N_OFFSET 	0X00000420
#define CPM_SLCR_SECURE_OD_MBIST_PG_EN_OFFSET	 	0X00000424
#define CPM_SLCR_SECURE_OD_MBIST_SETUP_OFFSET		0X00000428
#define CPM_SLCR_SECURE_OD_MBIST_DONE_OFFSET		0X0000042C
#define CPM_SLCR_SECURE_OD_MBIST_GO_OFFSET		0X00000430

/**
 * GTY PCSR Module
 */
#define GTY_PCSR_LOCK_OFFSET			0x0000000C
#define GTY_PCSR_MASK_OFFSET			0x00000000
#define GTY_PCSR_CONTROL_OFFSET			0x00000004
#define GTY_PCSR_STATUS_OFFSET  		0x00000008
#define GTY_PCSR_INITCTRL_MASK			0x01000000
#define GTY_PCSR_MEM_CLEAR_TRIGGER_MASK		0x00040000
#define GTY_PCSR_BISR_TRIGGER_MASK		0x20000000
#define GTY_PCSR_STATUS_MEM_CLEAR_DONE_MASK	0x00000040
#define GTY_PCSR_STATUS_MEM_CLEAR_PASS_MASK	0x00000080
#define GTY_PCSR_STATUS_BISR_DONE_MASK		0x00080000
#define GTY_PCSR_STATUS_BISR_PASS_MASK		0x00100000

/**
 * EFUSE CACHE Module
 */
#define EFUSE_CACHE_MISC_CTRL_OFFSET		0X000000A0
#define EFUSE_CACHE_MISC_CTRL_LBIST_EN_MASK	0X00004000
#define EFUSE_CACHE_TRIM_CFRM_VGG_0_OFFSET	0X000001B4
#define EFUSE_CACHE_TRIM_CFRM_VGG_1_OFFSET	0X000001B8
#define EFUSE_CACHE_TRIM_CFRM_VGG_2_OFFSET	0X000001BC
#define EFUSE_CACHE_TRIM_CRAM_OFFSET		0X000001C0
#define EFUSE_CACHE_TRIM_BRAM_OFFSET		0X00000098
#define EFUSE_CACHE_TRIM_URAM_OFFSET		0X0000009C
#define EFUSE_CACHE_BISR_RSVD_0_OFFSET		0X00000300
#define EFUSE_CACHE_TBITS1_BISR_RSVD_OFFSET	0X00000400
#define EFUSE_CACHE_TBITS2_BISR_RSVD_OFFSET	0X00000800

/**
 * PCIe controller module
 */
#define PCIEA_ATTRIB_0_FABRICEN			( PCIEA_ATTRIB_0_BASEADDR + 0x00000E84 )
#define PCIEA_ATTRIB_0_FABRICEN_ATTR_SHIFT	0

#define PCIEA_ATTRIB_1_FABRICEN			( PCIEA_ATTRIB_1_BASEADDR + 0x00000E84 )
#define PCIEA_ATTRIB_1_FABRICEN_ATTR_SHIFT	0

/**
 * Register: PCSR_CONTROL
 */
#define NPI_PCSR_LOCK_OFFSET				0X0000000CU
#define NPI_PCSR_MASK_OFFSET				0X00000000U
#define NPI_PCSR_CONTROL_OFFSET				0X00000004U
#define NPI_PCSR_CONTROL_MEM_CLEAR_TRIGGER_MASK		0X00040000
#define NPI_PCSR_CONTROL_ODISABLE_NPP_MASK		0X00000008
#define NPI_PCSR_STATUS_OFFSET				0X00000008U
#define NPI_PCSR_STATUS_MEM_CLEAR_DONE_MASK		0X00000040
#define NPI_PCSR_STATUS_MEM_CLEAR_PASS_MASK		0X00000080
#define NOC_DDRMC_UB_CLK_GATE_OFFSET			0X0000024CU
#define NOC_DDRMC_UB_CLK_GATE_BISR_EN_MASK		0X00000040U
#define NOC_DDRMC_UB_CLK_GATE_ILA_EN_MASK		0X00000020U
#define NPI_DDRMC_PSCR_CONTROL_UB_INITSTATE_MASK	0X01000000

/* Probe Counter Register related macros */
#define CORESIGHT_LPD_ATM_BASE		(0xF0980000U)
#define CORESIGHT_FPD_ATM_BASE		(0xF0B80000U)

#define PROBE_COUNTER_LAR_OFFSET		(0x0FB0U)
#define PROBE_COUNTER_LSR_OFFSET		(0x0FB4U)
#define PROBE_COUNTER_MAIN_CTL_OFFSET		(0x1008U)
#define PROBE_COUNTER_CFG_CTL_OFFSET		(0x100CU)
#define PROBE_COUNTER_STATE_PERIOD_OFFSET	(0x1024U)
#define PROBE_COUNTER_PORT_SEL_OFFSET		(0x1134U)
#define PROBE_COUNTER_SRC_OFFSET		(0x1138U)
#define PROBE_COUNTER_VAL_OFFSET		(0x113CU)

#define PROBE_COUNTER_FPD_RD_REQ_OFFSET		(0x800)
#define PROBE_COUNTER_FPD_RD_RES_OFFSET		(0x000)
#define PROBE_COUNTER_FPD_WR_REQ_OFFSET		(0xC00)
#define PROBE_COUNTER_FPD_WR_RES_OFFSET		(0x400)
#define PROBE_COUNTER_LPD_REQ_TYPE_OFFSET	(0x1000)

/**
 * CRP_RESET_REASON
 */
#define CRP_RESET_REASON				(0xF1260220)
#define CRP_RESET_REASON_SLR_SYS_MASK			(0x00000400)
#define CRP_RESET_REASON_SW_SYS_MASK			(0x00000200)
#define CRP_RESET_REASON_ERR_SYS_MASK			(0x00000100)
#define CRP_RESET_REASON_DAP_SYS_MASK			(0x00000080)
#define CRP_RESET_REASON_ERR_POR_MASK			(0x00000008)
#define CRP_RESET_REASON_SLR_POR_MASK			(0x00000004)
#define CRP_RESET_REASON_SW_POR_MASK			(0x00000002)
#define CRP_RESET_REASON_EXTERNAL_POR_MASK		(0x00000001)

/**
 * Definitions required from pmc_tap.h
 */
#define PMC_TAP_IDCODE     ( ( PMC_TAP_BASEADDR ) + 0X00000000 )
#define PMC_TAP_VERSION    ( ( PMC_TAP_BASEADDR ) + 0X00000004 )
#define PMC_TAP_VERSION_PLATFORM_SHIFT   24
#define PMC_TAP_VERSION_PLATFORM_MASK    0X0F000000
#define PMC_TAP_VERSION_PLATFORM_VERSION_SHIFT   28
#define PMC_TAP_VERSION_PLATFORM_VERSION_MASK    0XF0000000

#define XPPU_CTRL_OFFSET (0x0U)
#define XPPU_M_APERTURE_64KB_OFFSET    (0x44U)
#define XPPU_M_APERTURE_1MB_OFFSET     (0x48U)
#define XPPU_M_APERTURE_512MB_OFFSET   (0x4CU)
#define XPPU_BASE_64KB_OFFSET  (0x54U)
#define XPPU_BASE_1MB_OFFSET   (0x58U)
#define XPPU_BASE_512MB_OFFSET (0x5CU)
#define XPPU_APERTURE_0_OFFSET (0x1000U)
#define XPPU_APERTURE_384_OFFSET (0x1600U)
#define XPPU_APERTURE_400_OFFSET (0x1640U)
#define XPPU_APERTURE_PERMISSION_MASK	0xFFFFFU
#define XPPU_APERTURE_TRUSTZONE_OFFSET	27U
#define XPPU_APERTURE_TRUSTZONE_MASK	0x8000000U
#define XPPU_APERTURE_PARITY_MASK	0xF0000000U
//for ES2
#define	XPPU_DYNAMIC_RECONFIG_APER_ADDR_OFFSET	(0x150U)
#define XPPU_DYNAMIC_RECONFIG_APER_PERM_OFFSET	(0x154U)
#define XPPU_DYNAMIC_RECONFIG_EN_OFFSET			(0xFCU)
//for ES1
#define XPPU_ENABLE_PERM_CHECK_REG00_OFFSET			(0x150U)


/**
 * OSPI Mux select related macros
 */
#define XPM_OSPI_MUX_SEL_OFFSET		(0x00000504U)
#define XPM_OSPI_MUX_SEL_MASK		(0x2U)
#define XPM_OSPI_MUX_SEL_SHIFT		(0x1U)

#ifdef __cplusplus
}
#endif

#endif /* XPM_REGS_H */
