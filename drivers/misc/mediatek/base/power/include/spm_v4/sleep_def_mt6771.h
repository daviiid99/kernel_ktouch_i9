/*
 * Copyright (C) 2016 MediaTek Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See http://www.gnu.org/licenses/gpl-2.0.html for more details.
 */

#ifndef __sleep_def_h__
#define __sleep_def_h__

/*
 * Auto generated by DE, please DO NOT modify this file directly.
 */

/* --- SPM Flag Define --- */
#define SPM_FLAG_DIS_CPU_PDN                  (1U << 0)
#define SPM_FLAG_DIS_INFRA_PDN                (1U << 1)
#define SPM_FLAG_DIS_DDRPHY_PDN               (1U << 2)
#define SPM_FLAG_DIS_VCORE_DVS                (1U << 3)
#define SPM_FLAG_DIS_VCORE_DFS                (1U << 4)
#define SPM_FLAG_DIS_COMMON_SCENARIO          (1U << 5)
#define SPM_FLAG_DIS_BUS_CLOCK_OFF            (1U << 6)
#define SPM_FLAG_DIS_ATF_ABORT                (1U << 7)
#define SPM_FLAG_KEEP_CSYSPWRUPACK_HIGH       (1U << 8)
#define SPM_FLAG_DIS_VPROC_VSRAM_DVS          (1U << 9)
#define SPM_FLAG_RUN_COMMON_SCENARIO          (1U << 10)
#define SPM_FLAG_EN_MET_DEBUG_USAGE           (1U << 11)
#define SPM_FLAG_SODI_CG_MODE                 (1U << 12)
#define SPM_FLAG_SODI_NO_EVENT                (1U << 13)
#define SPM_FLAG_ENABLE_SODI3                 (1U << 14)
#define SPM_FLAG_DISABLE_MMSYS_DVFS           (1U << 15)
#define SPM_FLAG_DIS_SYSRAM_SLEEP             (1U << 16)
#define SPM_FLAG_DIS_SSPM_SRAM_SLEEP          (1U << 17)
#define SPM_FLAG_DIS_VMODEM_DVS               (1U << 18)
#define SPM_FLAG_SUSPEND_OPTION               (1U << 19)
#define SPM_FLAG_DEEPIDLE_OPTION              (1U << 20)
#define SPM_FLAG_SODI_OPTION                  (1U << 21)
#define SPM_FLAG_SPM_FLAG_DONT_TOUCH_BIT22    (1U << 22)
#define SPM_FLAG_SPM_FLAG_DONT_TOUCH_BIT23    (1U << 23)
#define SPM_FLAG_SPM_FLAG_DONT_TOUCH_BIT24    (1U << 24)
#define SPM_FLAG_SPM_FLAG_DONT_TOUCH_BIT25    (1U << 25)
#define SPM_FLAG_SPM_FLAG_DONT_TOUCH_BIT26    (1U << 26)
#define SPM_FLAG_SPM_FLAG_DONT_TOUCH_BIT27    (1U << 27)
#define SPM_FLAG_SPM_FLAG_DONT_TOUCH_BIT28    (1U << 28)
#define SPM_FLAG_SPM_FLAG_DONT_TOUCH_BIT29    (1U << 29)
#define SPM_FLAG_SPM_FLAG_DONT_TOUCH_BIT30    (1U << 30)
#define SPM_FLAG_SPM_FLAG_DONT_TOUCH_BIT31    (1U << 31)
/* --- SPM Flag1 Define --- */
#define SPM_FLAG1_RESERVED_BIT0               (1U << 0)
#define SPM_FLAG1_ENABLE_CPU_DORMANT          (1U << 1)
#define SPM_FLAG1_ENABLE_CPU_SLEEP_VOLT       (1U << 2)
#define SPM_FLAG1_DISABLE_PWRAP_CLK_SWITCH    (1U << 3)
#define SPM_FLAG1_DISABLE_ULPOSC_OFF          (1U << 4)
#define SPM_FLAG1_VCORE_LP_0P7V               (1U << 5)
#define SPM_FLAG1_DISABLE_MCDSR               (1U << 6)
#define SPM_FLAG1_DISABLE_NO_RESUME           (1U << 7)
#define SPM_FLAG1_BIG_BUCK_OFF_ENABLE         (1U << 8)
#define SPM_FLAG1_BIG_BUCK_ON_ENABLE          (1U << 9)
#define SPM_FLAG1_RESERVED_BIT10              (1U << 10)
#define SPM_FLAG1_RESERVED_BIT11              (1U << 11)
#define SPM_FLAG1_RESERVED_BIT12              (1U << 12)
#define SPM_FLAG1_RESERVED_BIT13              (1U << 13)
#define SPM_FLAG1_RESERVED_BIT14              (1U << 14)
#define SPM_FLAG1_DIS_ARMPLL_OFF              (1U << 15)
#define SPM_FLAG1_DIS_AXI_BUS_TO_26M          (1U << 16)
#define SPM_FLAG1_DIS_IMP_DIS                 (1U << 17)
#define SPM_FLAG1_DIS_IMP_COPY                (1U << 18)
#define SPM_FLAG1_DIS_EMI_TOGGLE_WORKAROUND   (1U << 19)
#define SPM_FLAG1_DIS_DRAM_ENTER_SREF         (1U << 20)
#define SPM_FLAG1_DIS_DRAM_DLL_OFF            (1U << 21)
#define SPM_FLAG1_DIS_PHYPLL_OFF              (1U << 22)
#define SPM_FLAG1_DIS_MPLL_OFF                (1U << 23)
#define SPM_FLAG1_DIS_SYSPLL_OFF              (1U << 24)
#define SPM_FLAG1_DIS_TOP_AXI_CLK_OFF         (1U << 25)
#define SPM_FLAG1_DIS_PCM_26M_SWITCH          (1U << 26)
#define SPM_FLAG1_DIS_CKSQ_OFF                (1U << 27)
#define SPM_FLAG1_DIS_SRCVOLTEN_OFF           (1U << 28)
#define SPM_FLAG1_DIS_CHB_CG_FREE_EN          (1U << 29)
#define SPM_FLAG1_DIS_CHA_DCM_RES             (1U << 30)
#define SPM_FLAG1_DIS_SW_MR4                  (1U << 31)
/* --- SPM DEBUG Define --- */
#define SPM_DBG_DEBUG_IDX_26M_WAKE            (1U << 0)
#define SPM_DBG_DEBUG_IDX_26M_SLEEP           (1U << 1)
#define SPM_DBG_DEBUG_IDX_INFRA_WAKE          (1U << 2)
#define SPM_DBG_DEBUG_IDX_INFRA_SLEEP         (1U << 3)
#define SPM_DBG_DEBUG_IDX_APSRC_WAKE          (1U << 4)
#define SPM_DBG_DEBUG_IDX_APSRC_SLEEP         (1U << 5)
#define SPM_DBG_DEBUG_IDX_VRF18_WAKE          (1U << 6)
#define SPM_DBG_DEBUG_IDX_VRF18_SLEEP         (1U << 7)
#define SPM_DBG_DEBUG_IDX_DDREN_WAKE          (1U << 8)
#define SPM_DBG_DEBUG_IDX_DDREN_SLEEP         (1U << 9)
#define SPM_DBG_DEBUG_IDX_NFC_CKBUF_ON        (1U << 10)
#define SPM_DBG_DEBUG_IDX_NFC_CKBUF_OFF       (1U << 11)
#define SPM_DBG_DEBUG_IDX_CPU_PDN             (1U << 12)
#define SPM_DBG_DEBUG_IDX_DPD                 (1U << 13)
#define SPM_DBG_DEBUG_IDX_CONN_CKBUF_ON       (1U << 14)
#define SPM_DBG_DEBUG_IDX_CONN_CKBUF_OFF      (1U << 15)
#define SPM_DBG_DEBUG_IDX_VCORE_DVFS_START    (1U << 16)
#define SPM_DBG_DEBUG_IDX_DDREN2_WAKE         (1U << 17)
#define SPM_DBG_DEBUG_IDX_DDREN2_SLEEP        (1U << 18)
#define SPM_DBG_DEBUG_IDX_SSPM_WFI            (1U << 19)
#define SPM_DBG_DEBUG_IDX_SSPM_SRAM_SLP       (1U << 20)
#define SPM_DBG_RESERVED_BIT21                (1U << 21)
#define SPM_DBG_RESERVED_BIT22                (1U << 22)
#define SPM_DBG_RESERVED_BIT23                (1U << 23)
#define SPM_DBG_RESERVED_BIT24                (1U << 24)
#define SPM_DBG_RESERVED_BIT25                (1U << 25)
#define SPM_DBG_RESERVED_BIT26                (1U << 26)
#define SPM_DBG_SODI1_FLAG                    (1U << 27)
#define SPM_DBG_SODI3_FLAG                    (1U << 28)
#define SPM_DBG_VCORE_DVFS_FLAG               (1U << 29)
#define SPM_DBG_DEEPIDLE_FLAG                 (1U << 30)
#define SPM_DBG_SUSPEND_FLAG                  (1U << 31)
/* --- SPM DEBUG1 Define --- */
#define SPM_DBG1_DRAM_SREF_ACK_TO             (1U << 0)
#define SPM_DBG1_PWRAP_SLEEP_ACK_TO           (1U << 1)
#define SPM_DBG1_PWRAP_SPI_ACK_TO             (1U << 2)
#define SPM_DBG1_DRAM_GATE_ERR_DDREN_WAKEUP   (1U << 3)
#define SPM_DBG1_DRAM_GATE_ERR_LEAVE_LP_SCN   (1U << 4)
#define SPM_DBG1_RESERVED_BIT5                (1U << 5)
#define SPM_DBG1_RESERVED_BIT6                (1U << 6)
#define SPM_DBG1_RESERVED_BIT7                (1U << 7)
#define SPM_DBG1_RESERVED_BIT8                (1U << 8)
#define SPM_DBG1_RESERVED_BIT9                (1U << 9)
#define SPM_DBG1_RESERVED_BIT10               (1U << 10)
#define SPM_DBG1_RESERVED_BIT11               (1U << 11)
#define SPM_DBG1_RESERVED_BIT12               (1U << 12)
#define SPM_DBG1_RESERVED_BIT13               (1U << 13)
#define SPM_DBG1_RESERVED_BIT14               (1U << 14)
#define SPM_DBG1_RESERVED_BIT15               (1U << 15)
#define SPM_DBG1_RESERVED_BIT16               (1U << 16)
#define SPM_DBG1_RESERVED_BIT17               (1U << 17)
#define SPM_DBG1_RESERVED_BIT18               (1U << 18)
#define SPM_DBG1_RESERVED_BIT19               (1U << 19)
#define SPM_DBG1_RESERVED_BIT20               (1U << 20)
#define SPM_DBG1_RESERVED_BIT21               (1U << 21)
#define SPM_DBG1_RESERVED_BIT22               (1U << 22)
#define SPM_DBG1_RESERVED_BIT23               (1U << 23)
#define SPM_DBG1_RESERVED_BIT24               (1U << 24)
#define SPM_DBG1_RESERVED_BIT25               (1U << 25)
#define SPM_DBG1_RESERVED_BIT26               (1U << 26)
#define SPM_DBG1_RESERVED_BIT27               (1U << 27)
#define SPM_DBG1_RESERVED_BIT28               (1U << 28)
#define SPM_DBG1_RESERVED_BIT29               (1U << 29)
#define SPM_DBG1_RESERVED_BIT30               (1U << 30)
#define SPM_DBG1_RESERVED_BIT31               (1U << 31)

/*
 * Macro and Inline
 */
#define is_cpu_pdn(flags)		(!((flags) & SPM_FLAG_DIS_CPU_PDN))
#define is_infra_pdn(flags)		(!((flags) & SPM_FLAG_DIS_INFRA_PDN))
#define is_ddrphy_pdn(flags)		(!((flags) & SPM_FLAG_DIS_DDRPHY_PDN))

#endif
