/* Copyright Statement:
 *
 * This software/firmware and related documentation ("MediaTek Software") are
 * protected under relevant copyright laws. The information contained herein is
 * confidential and proprietary to MediaTek Inc. and/or its licensors. Without
 * the prior written permission of MediaTek inc. and/or its licensors, any
 * reproduction, modification, use or disclosure of MediaTek Software, and
 * information contained herein, in whole or in part, shall be strictly
 * prohibited.
 *
 * MediaTek Inc. (C) 2014. All rights reserved.
 *
 * BY OPENING THIS FILE, RECEIVER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
 * THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
 * RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO RECEIVER
 * ON AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL
 * WARRANTIES, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR
 * NONINFRINGEMENT. NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH
 * RESPECT TO THE SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY,
 * INCORPORATED IN, OR SUPPLIED WITH THE MEDIATEK SOFTWARE, AND RECEIVER AGREES
 * TO LOOK ONLY TO SUCH THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO.
 * RECEIVER EXPRESSLY ACKNOWLEDGES THAT IT IS RECEIVER'S SOLE RESPONSIBILITY TO
 * OBTAIN FROM ANY THIRD PARTY ALL PROPER LICENSES CONTAINED IN MEDIATEK
 * SOFTWARE. MEDIATEK SHALL ALSO NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE
 * RELEASES MADE TO RECEIVER'S SPECIFICATION OR TO CONFORM TO A PARTICULAR
 * STANDARD OR OPEN FORUM. RECEIVER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S
 * ENTIRE AND CUMULATIVE LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE
 * RELEASED HEREUNDER WILL BE, AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE
 * MEDIATEK SOFTWARE AT ISSUE, OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE
 * CHARGE PAID BY RECEIVER TO MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
 *
 * The following software/firmware and/or related documentation ("MediaTek
 * Software") have been modified by MediaTek Inc. All revisions are subject to
 * any receiver's applicable license agreements with MediaTek Inc.
 */


#ifndef _CFG_BT_DEFAULT_H
#define _CFG_BT_DEFAULT_H


/* The default value of bt nvram file */

static ap_nvram_btradio_struct stBtDefault_6628 =
{
    {0x00, 0x00, 0x46, 0x66, 0x28, 0x01},
    {0x60, 0x00},
#if defined(__MTK_MERGE_INTERFACE_SUPPORT__)
    {0x63, 0x10, 0x00, 0x00},
#else
    {0x23, 0x10, 0x00, 0x00},
#endif
    {0x07, 0x80, 0x00, 0x06, 0x05, 0x07},
    {0x03, 0x40, 0x1F, 0x40, 0x1F, 0x00, 0x04},
    {0x80, 0x00},
    {0xFF, 0xFF, 0xFF},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, //not used
    {0x00, 0x00}, // not used
    {0x00, 0x00, 0x00, 0x00}, // not used
    ///////////// Reserved /////////////
    {0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
};

static ap_nvram_btradio_struct stBtDefault_6630 =
{
    {0x00, 0x00, 0x46, 0x66, 0x30, 0x01},
    {0x60, 0x00}, //not used
#if defined(__MTK_MERGE_INTERFACE_SUPPORT__)
    {0x63, 0x10, 0x00, 0x00},
#elif defined(__MTK_BT_I2S_SUPPORT__)
    {0x03, 0x10, 0x00, 0x02},
#else
    {0x23, 0x10, 0x00, 0x00},
#endif
    {0x07, 0x80, 0x00, 0x06, 0x07, 0x07},
    {0x03, 0x40, 0x1F, 0x40, 0x1F, 0x00, 0x04},
    {0x80, 0x00}, //not used
    {0xFF, 0xFF, 0xFF},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    {0x00, 0x00}, // not used
    {0x00, 0x00, 0x00, 0x00}, // not used
    ///////////// Reserved /////////////
    {0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
};

static ap_nvram_btradio_struct stBtDefault_6632 =
{
    {0x00, 0x00, 0x46, 0x66, 0x32, 0x01},
    {0x60, 0x00}, //not used
#if defined(__MTK_MERGE_INTERFACE_SUPPORT__)
    {0x63, 0x10, 0x00, 0x00},
#elif defined(__MTK_BT_I2S_SUPPORT__)
    {0x21, 0x10, 0x00, 0x00},
#else
    {0x23, 0x10, 0x00, 0x00},
#endif
    {0x06, 0x00, 0x00, 0x00, 0x04, 0x07}, // Radio command bit[0-5]
    {0x03, 0x40, 0x06, 0x40, 0x06, 0x00, 0x00},
    {0x80, 0x00}, //not used
    {0xFF, 0xFF, 0xFF}, // Tx power offset bit[0-2]
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    {0x00, 0x00}, // Radio command bit[6-7]
    {0xFF, 0xFF, 0xFF, 0x00}, // TX power offset bit[3-5]
    ///////////// Reserved /////////////
    {0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
};

static ap_nvram_btradio_struct stBtDefault_8163 =
{
    {0x00, 0x00, 0x46, 0x81, 0x63, 0x01},
    {0x60, 0x00}, //not used
#if defined(__MTK_MERGE_INTERFACE_SUPPORT__)
    {0x63, 0x10, 0x00, 0x00},
#elif defined(__MTK_BT_I2S_SUPPORT__)
    {0x03, 0x10, 0x00, 0x02},
#else
    {0x23, 0x10, 0x00, 0x00},
#endif
    {0x07, 0x80, 0x00, 0x06, 0x05, 0x07},
    {0x03, 0x40, 0x1F, 0x40, 0x1F, 0x00, 0x04},
    {0x80, 0x00}, //not used
    {0xFF, 0xFF, 0xFF},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    {0x00, 0x00}, // not used
    {0x00, 0x00, 0x00, 0x00}, // not used
    ///////////// Reserved /////////////
    {0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
};

static ap_nvram_btradio_struct stBtDefault_8127 =
{
    {0x00, 0x00, 0x46, 0x81, 0x27, 0x01},
    {0x60, 0x00}, //not used
#if defined(__MTK_MERGE_INTERFACE_SUPPORT__)
    {0x63, 0x10, 0x00, 0x00},
#elif defined(__MTK_BT_I2S_SUPPORT__)
    {0x03, 0x10, 0x00, 0x02},
#else
    {0x23, 0x10, 0x00, 0x00},
#endif
    {0x07, 0x80, 0x00, 0x06, 0x05, 0x07},
    {0x03, 0x40, 0x1F, 0x40, 0x1F, 0x00, 0x04},
    {0x80, 0x00}, //not used
    {0xFF, 0xFF, 0xFF},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    {0x00, 0x00}, // not used
    {0x00, 0x00, 0x00, 0x00}, // not used
    ///////////// Reserved /////////////
    {0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
};

static ap_nvram_btradio_struct stBtDefault_6582 =
{
    {0x00, 0x00, 0x46, 0x65, 0x82, 0x01},
    {0x60, 0x00}, //not used
    {0x23, 0x10, 0x00, 0x00}, //not used
    {0x07, 0x80, 0x00, 0x06, 0x05, 0x07},
    {0x03, 0x40, 0x1F, 0x40, 0x1F, 0x00, 0x04},
    {0x80, 0x00}, //not used
    {0xFF, 0xFF, 0xFF},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, //not used
    {0x00, 0x00}, // not used
    {0x00, 0x00, 0x00, 0x00}, // not used
    ///////////// Reserved /////////////
    {0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
};

static ap_nvram_btradio_struct stBtDefault_6592 =
{
    {0x00, 0x00, 0x46, 0x65, 0x92, 0x01},
    {0x60, 0x00}, //not used
    {0x23, 0x10, 0x00, 0x00}, //not used
    {0x07, 0x80, 0x00, 0x06, 0x05, 0x07},
    {0x03, 0x40, 0x1F, 0x40, 0x1F, 0x00, 0x04},
    {0x80, 0x00}, //not used
    {0xFF, 0xFF, 0xFF},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, //not used
    {0x00, 0x00}, // not used
    {0x00, 0x00, 0x00, 0x00}, // not used
    ///////////// Reserved /////////////
    {0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
};

static ap_nvram_btradio_struct stBtDefault_6752 =
{
    {0x00, 0x00, 0x46, 0x67, 0x52, 0x01},
    {0x60, 0x00}, //not used
    {0x23, 0x10, 0x00, 0x00}, //not used
    {0x07, 0x80, 0x00, 0x06, 0x05, 0x07},
    {0x03, 0x40, 0x1F, 0x40, 0x1F, 0x00, 0x04},
    {0x80, 0x00}, //not used
    {0xFF, 0xFF, 0xFF},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, //not used
    {0x00, 0x00}, // not used
    {0x00, 0x00, 0x00, 0x00}, // not used
    ///////////// Reserved /////////////
    {0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
};

static ap_nvram_btradio_struct stBtDefault_6735 =
{
    {0x00, 0x00, 0x46, 0x03, 0x21, 0x01},
    {0x60, 0x00}, //not used
    {0x23, 0x10, 0x00, 0x00}, //not used
    {0x07, 0x80, 0x00, 0x06, 0x07, 0x07},
    {0x03, 0x40, 0x1F, 0x40, 0x1F, 0x00, 0x04},
    {0x80, 0x00}, //not used
    {0xFF, 0xFF, 0xFF},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, //not used
    {0x00, 0x00}, // not used
    {0x00, 0x00, 0x00, 0x00}, // not used
    ///////////// Reserved /////////////
    {0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
};

static ap_nvram_btradio_struct stBtDefault_6735m =
{
    {0x00, 0x00, 0x46, 0x03, 0x35, 0x01},
    {0x60, 0x00}, //not used
    {0x23, 0x10, 0x00, 0x00}, //not used
    {0x07, 0x80, 0x00, 0x06, 0x07, 0x07},
    {0x03, 0x40, 0x1F, 0x40, 0x1F, 0x00, 0x04},
    {0x80, 0x00}, //not used
    {0xFF, 0xFF, 0xFF},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, //not used
    {0x00, 0x00}, // not used
    {0x00, 0x00, 0x00, 0x00}, // not used
    ///////////// Reserved /////////////
    {0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
};

static ap_nvram_btradio_struct stBtDefault_6753 =
{
    {0x00, 0x00, 0x46, 0x03, 0x37, 0x01},
    {0x60, 0x00}, //not used
    {0x23, 0x10, 0x00, 0x00}, //not used
    {0x07, 0x80, 0x00, 0x06, 0x07, 0x07},
    {0x03, 0x40, 0x1F, 0x40, 0x1F, 0x00, 0x04},
    {0x80, 0x00}, //not used
    {0xFF, 0xFF, 0xFF},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, //not used
    {0x00, 0x00}, // not used
    {0x00, 0x00, 0x00, 0x00}, // not used
    ///////////// Reserved /////////////
    {0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
};

static ap_nvram_btradio_struct stBtDefault_6580 =
{
    {0x00, 0x00, 0x46, 0x65, 0x80, 0x01},
    {0x60, 0x00}, //not used
    {0x23, 0x10, 0x00, 0x00}, //not used
    {0x07, 0x80, 0x00, 0x06, 0x05, 0x07},
    {0x03, 0x40, 0x1F, 0x40, 0x1F, 0x00, 0x04},
    {0x80, 0x00}, //not used
    {0xFF, 0xFF, 0xFF},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, //not used
    {0x00, 0x00}, // not used
    {0x00, 0x00, 0x00, 0x00}, // not used
    ///////////// Reserved /////////////
    {0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
};

static ap_nvram_btradio_struct stBtDefault_6755 =
{
    {0x00, 0x00, 0x46, 0x03, 0x26, 0x01},
    {0x60, 0x00}, //not used
    {0x23, 0x10, 0x00, 0x00}, //not used
    {0x07, 0x80, 0x00, 0x06, 0x05, 0x07},
    {0x03, 0x40, 0x1F, 0x40, 0x1F, 0x00, 0x04},
    {0x80, 0x00}, //not used
    {0xFF, 0xFF, 0xFF},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, //not used
    {0x00, 0x00}, // not used
    {0x00, 0x00, 0x00, 0x00}, // not used
    ///////////// Reserved /////////////
    {0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
};

static ap_nvram_btradio_struct stBtDefault_6797 =
{
    {0x00, 0x00, 0x46, 0x02, 0x79, 0x01},
    {0x60, 0x00}, //not used
    {0x23, 0x10, 0x00, 0x00}, //not used
    {0x07, 0x80, 0x00, 0x06, 0x05, 0x07},
    {0x03, 0x40, 0x1F, 0x40, 0x1F, 0x00, 0x04},
    {0x80, 0x00}, //not used
    {0xFF, 0xFF, 0xFF},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, //not used
    {0x00, 0x00}, // not used
    {0x00, 0x00, 0x00, 0x00}, // not used
    ///////////// Reserved /////////////
    {0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
};

static ap_nvram_btradio_struct stBtDefault_6757 =
{
    {0x00, 0x00, 0x46, 0x05, 0x51, 0x01},
    {0x60, 0x00}, //not used
    {0x23, 0x10, 0x00, 0x00}, //not used
    {0x07, 0x80, 0x00, 0x06, 0x07, 0x07},
    {0x03, 0x40, 0x1F, 0x40, 0x1F, 0x00, 0x04},
    {0x80, 0x00}, //not used
    {0xFF, 0xFF, 0xFF},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, //not used
    {0x00, 0x00}, // not used
    {0x00, 0x00, 0x00, 0x00}, // not used
    ///////////// Reserved /////////////
    {0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
};

static ap_nvram_btradio_struct stBtDefault_7623 =
{
    {0x00, 0x00, 0x46, 0x76, 0x23, 0x01},
    {0x60, 0x00}, //not used
    {0x23, 0x10, 0x00, 0x00}, //not used
    {0x07, 0x80, 0x00, 0x06, 0x05, 0x07},
    {0x03, 0x40, 0x1F, 0x40, 0x1F, 0x00, 0x04},
    {0x80, 0x00}, //not used
    {0xFF, 0xFF, 0xFF},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, //not used
    {0x00, 0x00}, // not used
    {0x00, 0x00, 0x00, 0x00}, // not used
    ///////////// Reserved /////////////
    {0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
};
#endif
