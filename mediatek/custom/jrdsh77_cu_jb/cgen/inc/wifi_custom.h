/* Copyright Statement:
 *
 * This software/firmware and related documentation ("MediaTek Software") are
 * protected under relevant copyright laws. The information contained herein
 * is confidential and proprietary to MediaTek Inc. and/or its licensors.
 * Without the prior written permission of MediaTek inc. and/or its licensors,
 * any reproduction, modification, use or disclosure of MediaTek Software,
 * and information contained herein, in whole or in part, shall be strictly prohibited.
 */
/* MediaTek Inc. (C) 2010. All rights reserved.
 *
 * BY OPENING THIS FILE, RECEIVER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
 * THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
 * RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO RECEIVER ON
 * AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
 * NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
 * SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
 * SUPPLIED WITH THE MEDIATEK SOFTWARE, AND RECEIVER AGREES TO LOOK ONLY TO SUCH
 * THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. RECEIVER EXPRESSLY ACKNOWLEDGES
 * THAT IT IS RECEIVER'S SOLE RESPONSIBILITY TO OBTAIN FROM ANY THIRD PARTY ALL PROPER LICENSES
 * CONTAINED IN MEDIATEK SOFTWARE. MEDIATEK SHALL ALSO NOT BE RESPONSIBLE FOR ANY MEDIATEK
 * SOFTWARE RELEASES MADE TO RECEIVER'S SPECIFICATION OR TO CONFORM TO A PARTICULAR
 * STANDARD OR OPEN FORUM. RECEIVER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND
 * CUMULATIVE LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
 * AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
 * OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY RECEIVER TO
 * MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
 *
 * The following software/firmware and/or related documentation ("MediaTek Software")
 * have been modified by MediaTek Inc. All revisions are subject to any receiver's
 * applicable license agreements with MediaTek Inc.
 */

/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2008
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/


/*******************************************************************************
 *
 * Filename:
 * ---------
 *   wifi_custom.h
 *
 * Project:
 * --------
 *   YuSu
 *
 * Description:
 * ------------
 *    This file is the header of wifi customization related function or definition.
 *
 * Author:
 * -------
 *  Renbang Jiang (MTK80150)
 *
 *------------------------------------------------------------------------------
 * $Revision:$
 * $Modtime:$
 * $Log:$
 *
 * 07 10 2010 renbang.jiang
 * [ALPS00121785][Need Patch] [Volunteer Patch] use NVRAM to save Wi-Fi custom data 
 * .
 *
 * 07 10 2010 renbang.jiang
 * [ALPS00121785][Need Patch] [Volunteer Patch] use NVRAM to save Wi-Fi custom data 
 * .
 *
 * 07 10 2010 renbang.jiang
 * [ALPS00121785][Need Patch] [Volunteer Patch] use NVRAM to save Wi-Fi custom data 
 * .
 *
 *
 *******************************************************************************/
#ifndef __WIFI_CUSTOM_H
#define __WIFI_CUSTOM_H

#define WIFI_CUSTOM_SD_BLOCK_SIZE 512
#define WIFI_CUSTOM_SD_BUS_WIDTH  4 
#define WIFI_CUSTOM_SD_CLOCK_RATE 0

#define WIFI_CUSTOM_BT_COEXIST_WINDOW_T 0
#define WIFI_CUSTOM_ENABLE_TX_AUTO_FRAGMENT_FOR_BT 0
#define WIFI_CUSTOM_BTCR0 0
#define WIFI_CUSTOM_BTCR1 0
#define WIFI_CUSTOM_BTCR2 0
#define WIFI_CUSTOM_BTCR3 0

#if defined (MTK_MT6611)

#define WIFI_CUSTOM_SINGLE_ACL_BTCR0 0x82048041
#define WIFI_CUSTOM_SINGLE_ACL_BTCR1 0x19040F00

#define WIFI_CUSTOM_SINGLE_MIX_BTCR0 0x82040061
#define WIFI_CUSTOM_SINGLE_MIX_BTCR1 0x19040E00

#define WIFI_CUSTOM_DUAL_ACL_BTCR0   0x82000061
#define WIFI_CUSTOM_DUAL_ACL_BTCR1   0x09040F00

#define WIFI_CUSTOM_DUAL_MIX_BTCR0   0x82000061
#define WIFI_CUSTOM_DUAL_MIX_BTCR1   0x09040F00

#elif defined (MTK_MT6612)

#define WIFI_CUSTOM_SINGLE_ACL_BTCR0 0x7E048041
#define WIFI_CUSTOM_SINGLE_ACL_BTCR1 0x18840F00

#define WIFI_CUSTOM_SINGLE_MIX_BTCR0 0x82040061
#define WIFI_CUSTOM_SINGLE_MIX_BTCR1 0x18840E00

#define WIFI_CUSTOM_DUAL_ACL_BTCR0   0x7E000061
#define WIFI_CUSTOM_DUAL_ACL_BTCR1   0x08840F00

#define WIFI_CUSTOM_DUAL_MIX_BTCR0   0x7E000061
#define WIFI_CUSTOM_DUAL_MIX_BTCR1   0x08840F00

#elif defined (MTK_MT6616)

#define WIFI_CUSTOM_SINGLE_ACL_BTCR0 0x79048041
#define WIFI_CUSTOM_SINGLE_ACL_BTCR1 0x18040F00

#define WIFI_CUSTOM_SINGLE_MIX_BTCR0 0x82040061
#define WIFI_CUSTOM_SINGLE_MIX_BTCR1 0x18040E00

#define WIFI_CUSTOM_DUAL_ACL_BTCR0   0x79000061
#define WIFI_CUSTOM_DUAL_ACL_BTCR1   0x08040F00

#define WIFI_CUSTOM_DUAL_MIX_BTCR0   0x79000061
#define WIFI_CUSTOM_DUAL_MIX_BTCR1   0x08040F00

#else

#define WIFI_CUSTOM_SINGLE_ACL_BTCR0 0x82048041
#define WIFI_CUSTOM_SINGLE_ACL_BTCR1 0x19040F00

#define WIFI_CUSTOM_SINGLE_MIX_BTCR0 0x82040061
#define WIFI_CUSTOM_SINGLE_MIX_BTCR1 0x19040E00

#define WIFI_CUSTOM_DUAL_ACL_BTCR0   0x82000061
#define WIFI_CUSTOM_DUAL_ACL_BTCR1   0x09040F00

#define WIFI_CUSTOM_DUAL_MIX_BTCR0   0x82000061
#define WIFI_CUSTOM_DUAL_MIX_BTCR1   0x09040F00

#endif

#define WIFI_CUSTOM_SINGLE_ACL_BTCR2 0x0F0001D0
#define WIFI_CUSTOM_SINGLE_ACL_BTCR3 0x0200000A

#define WIFI_CUSTOM_SINGLE_MIX_BTCR2 0x00000000
#define WIFI_CUSTOM_SINGLE_MIX_BTCR3 0x00000000

#define WIFI_CUSTOM_DUAL_ACL_BTCR2   0x0A0001D0
#define WIFI_CUSTOM_DUAL_ACL_BTCR3   0x02000000
    
#define WIFI_CUSTOM_DUAL_MIX_BTCR2   0x00000000
#define WIFI_CUSTOM_DUAL_MIX_BTCR3   0x00000000
        
#define WIFI_CUSTOM_BT_SETTING 1
#define WIFI_CUSTOM_SINGLE_ANT 0
#define WIFI_CUSTOM_BT_PROFILE 0
#define WIFI_CUSTOM_PTA_ENABLED 0
    
#define WIFI_CUSTOM_MAC_ADDRESS {0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
#define WIFI_CUSTOM_COUNTRY_CODE {0x0000, 0x0000, 0x0000, 0x0000}
#define WIFI_CUSTOM_UAPSD_AC 0xFF
#define WIFI_CUSTOM_POWER_MODE 2
#define WIFI_CUSTOM_ATIM_WINDOW 0
#define WIFI_CUSTOM_VOIP_INTERVAL 0
#define WIFI_CUSTOM_POLL_INTERVAL 0
#define WIFI_CUSTOM_POLL_INTERVAL_B 500
#define WIFI_CUSTOM_L3_PKT_FILTER_EN 0
#define WIFI_CUSTOM_ADHOC_MODE 1
#define WIFI_CUSTOM_ROAMING_EN 1
    
#define WIFI_CUSTOM_MULTI_DOMAIN_CAP 0
    
#define WIFI_CUSTOM_GPIO2_MODE 0
    
#define WIFI_CUSTOM_VI_AIFSN_BIAS 0
#define WIFI_CUSTOM_VI_MAX_TXOP_LIMIT 0xFFFF
    
#define WIFI_CUSTOM_INIT_DELAY_IND 100
    
#define WIFI_CUSTOM_USE_WAPI 0
    
#define WIFI_CUSTOM_DAISY_CHAIN_EN 0
    
#define WIFI_CUSTOM_LED_BLINK_MODE 3
#define WIFI_CUSTOM_LED_BLINK_ON_TIME 80
#define WIFI_CUSTOM_LED_BLINK_OFF_TIME 24
    
#define WIFI_CUSTOM_WMM_PS_EN 0
#define WIFI_CUSTOM_MULTI_DTIM_WAKE   300
    
#define WIFI_CUSTOM_RESERVED { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}

#endif 
