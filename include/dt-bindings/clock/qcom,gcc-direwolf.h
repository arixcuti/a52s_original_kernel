/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (c) 2021, The Linux Foundation. All rights reserved.
 */

#ifndef _DT_BINDINGS_CLK_QCOM_GCC_DIREWOLF_H
#define _DT_BINDINGS_CLK_QCOM_GCC_DIREWOLF_H

/* GCC clocks */
#define GCC_GPLL0						0
#define GCC_GPLL0_OUT_EVEN					1
#define GCC_GPLL2						2
#define GCC_GPLL4						3
#define GCC_GPLL7						4
#define GCC_GPLL8						5
#define GCC_GPLL9						6
#define GCC_AGGRE_NOC_PCIE0_TUNNEL_AXI_CLK		7
#define GCC_AGGRE_NOC_PCIE1_TUNNEL_AXI_CLK		8
#define GCC_AGGRE_NOC_PCIE_4_AXI_CLK			9
#define GCC_AGGRE_NOC_PCIE_SOUTH_SF_AXI_CLK		10
#define GCC_AGGRE_UFS_CARD_AXI_CLK				11
#define GCC_AGGRE_UFS_PHY_AXI_CLK				12
#define GCC_AGGRE_USB3_MP_AXI_CLK				13
#define GCC_AGGRE_USB3_PRIM_AXI_CLK			14
#define GCC_AGGRE_USB3_SEC_AXI_CLK				15
#define GCC_AGGRE_USB4_1_AXI_CLK				16
#define GCC_AGGRE_USB4_AXI_CLK				17
#define GCC_AGGRE_USB_NOC_AXI_CLK				18
#define GCC_AGGRE_USB_NOC_NORTH_AXI_CLK			19
#define GCC_AGGRE_USB_NOC_SOUTH_AXI_CLK			20
#define GCC_AHB2PHY0_CLK					21
#define GCC_AHB2PHY2_CLK					22
#define GCC_BOOT_ROM_AHB_CLK				23
#define GCC_CAMERA_AHB_CLK					24
#define GCC_CAMERA_HF_AXI_CLK				25
#define GCC_CAMERA_SF_AXI_CLK				26
#define GCC_CAMERA_THROTTLE_NRT_AXI_CLK			27
#define GCC_CAMERA_THROTTLE_RT_AXI_CLK			28
#define GCC_CAMERA_THROTTLE_XO_CLK				29
#define GCC_CAMERA_XO_CLK					30
#define GCC_CFG_NOC_USB3_MP_AXI_CLK			31
#define GCC_CFG_NOC_USB3_PRIM_AXI_CLK			32
#define GCC_CFG_NOC_USB3_SEC_AXI_CLK			33
#define GCC_CNOC_PCIE0_TUNNEL_CLK				34
#define GCC_CNOC_PCIE1_TUNNEL_CLK				35
#define GCC_CNOC_PCIE4_QX_CLK				36
#define GCC_DDRSS_GPU_AXI_CLK				37
#define GCC_DDRSS_PCIE_SF_TBU_CLK				38
#define GCC_DISP1_AHB_CLK					39
#define GCC_DISP1_HF_AXI_CLK				40
#define GCC_DISP1_SF_AXI_CLK				41
#define GCC_DISP1_THROTTLE_NRT_AXI_CLK			42
#define GCC_DISP1_THROTTLE_RT_AXI_CLK			43
#define GCC_DISP1_XO_CLK					44
#define GCC_DISP_AHB_CLK					45
#define GCC_DISP_HF_AXI_CLK					46
#define GCC_DISP_SF_AXI_CLK					47
#define GCC_DISP_THROTTLE_NRT_AXI_CLK			48
#define GCC_DISP_THROTTLE_RT_AXI_CLK			49
#define GCC_DISP_XO_CLK					50
#define GCC_EMAC0_AXI_CLK					51
#define GCC_EMAC0_PTP_CLK					52
#define GCC_EMAC0_PTP_CLK_SRC				53
#define GCC_EMAC0_RGMII_CLK					54
#define GCC_EMAC0_RGMII_CLK_SRC				55
#define GCC_EMAC0_SLV_AHB_CLK				56
#define GCC_EMAC1_AXI_CLK					57
#define GCC_EMAC1_PTP_CLK					58
#define GCC_EMAC1_PTP_CLK_SRC				59
#define GCC_EMAC1_RGMII_CLK					60
#define GCC_EMAC1_RGMII_CLK_SRC				61
#define GCC_EMAC1_SLV_AHB_CLK				62
#define GCC_GP1_CLK						63
#define GCC_GP1_CLK_SRC					64
#define GCC_GP2_CLK						65
#define GCC_GP2_CLK_SRC					66
#define GCC_GP3_CLK						67
#define GCC_GP3_CLK_SRC					68
#define GCC_GP4_CLK						69
#define GCC_GP4_CLK_SRC					70
#define GCC_GP5_CLK						71
#define GCC_GP5_CLK_SRC					72
#define GCC_GPU_CFG_AHB_CLK					73
#define GCC_GPU_GPLL0_CLK_SRC				74
#define GCC_GPU_GPLL0_DIV_CLK_SRC				75
#define GCC_GPU_IREF_EN					76
#define GCC_GPU_MEMNOC_GFX_CLK				77
#define GCC_GPU_SNOC_DVM_GFX_CLK				78
#define GCC_GPU_TCU_THROTTLE_AHB_CLK			79
#define GCC_GPU_TCU_THROTTLE_CLK				80
#define GCC_PCIE0_PHY_RCHNG_CLK				81
#define GCC_PCIE1_PHY_RCHNG_CLK				82
#define GCC_PCIE2A_PHY_RCHNG_CLK				83
#define GCC_PCIE2B_PHY_RCHNG_CLK				84
#define GCC_PCIE3A_PHY_RCHNG_CLK				85
#define GCC_PCIE3B_PHY_RCHNG_CLK				86
#define GCC_PCIE4_PHY_RCHNG_CLK				87
#define GCC_PCIE_0_AUX_CLK					88
#define GCC_PCIE_0_AUX_CLK_SRC				89
#define GCC_PCIE_0_CFG_AHB_CLK				90
#define GCC_PCIE_0_MSTR_AXI_CLK				91
#define GCC_PCIE_0_PHY_RCHNG_CLK_SRC			92
#define GCC_PCIE_0_PIPE_CLK					93
#define GCC_PCIE_0_SLV_AXI_CLK				94
#define GCC_PCIE_0_SLV_Q2A_AXI_CLK				95
#define GCC_PCIE_1_AUX_CLK					96
#define GCC_PCIE_1_AUX_CLK_SRC				97
#define GCC_PCIE_1_CFG_AHB_CLK				98
#define GCC_PCIE_1_MSTR_AXI_CLK				99
#define GCC_PCIE_1_PHY_RCHNG_CLK_SRC			100
#define GCC_PCIE_1_PIPE_CLK					101
#define GCC_PCIE_1_SLV_AXI_CLK				102
#define GCC_PCIE_1_SLV_Q2A_AXI_CLK				103
#define GCC_PCIE_2A2B_CLKREF_CLK				104
#define GCC_PCIE_2A_AUX_CLK					105
#define GCC_PCIE_2A_AUX_CLK_SRC				106
#define GCC_PCIE_2A_CFG_AHB_CLK				107
#define GCC_PCIE_2A_MSTR_AXI_CLK				108
#define GCC_PCIE_2A_PHY_RCHNG_CLK_SRC			109
#define GCC_PCIE_2A_PIPE_CLK				110
#define GCC_PCIE_2A_PIPE_CLK_SRC				111
#define GCC_PCIE_2A_PIPE_DIV_CLK_SRC			112
#define GCC_PCIE_2A_PIPEDIV2_CLK				113
#define GCC_PCIE_2A_SLV_AXI_CLK				114
#define GCC_PCIE_2A_SLV_Q2A_AXI_CLK			115
#define GCC_PCIE_2B_AUX_CLK					116
#define GCC_PCIE_2B_AUX_CLK_SRC				117
#define GCC_PCIE_2B_CFG_AHB_CLK				118
#define GCC_PCIE_2B_MSTR_AXI_CLK				119
#define GCC_PCIE_2B_PHY_RCHNG_CLK_SRC			120
#define GCC_PCIE_2B_PIPE_CLK				121
#define GCC_PCIE_2B_PIPE_CLK_SRC				122
#define GCC_PCIE_2B_PIPE_DIV_CLK_SRC			123
#define GCC_PCIE_2B_PIPEDIV2_CLK				124
#define GCC_PCIE_2B_SLV_AXI_CLK				125
#define GCC_PCIE_2B_SLV_Q2A_AXI_CLK			126
#define GCC_PCIE_3A3B_CLKREF_CLK				127
#define GCC_PCIE_3A_AUX_CLK					128
#define GCC_PCIE_3A_AUX_CLK_SRC				129
#define GCC_PCIE_3A_CFG_AHB_CLK				130
#define GCC_PCIE_3A_MSTR_AXI_CLK				131
#define GCC_PCIE_3A_PHY_RCHNG_CLK_SRC			132
#define GCC_PCIE_3A_PIPE_CLK				133
#define GCC_PCIE_3A_PIPE_CLK_SRC				134
#define GCC_PCIE_3A_PIPE_DIV_CLK_SRC			135
#define GCC_PCIE_3A_PIPEDIV2_CLK				136
#define GCC_PCIE_3A_SLV_AXI_CLK				137
#define GCC_PCIE_3A_SLV_Q2A_AXI_CLK			138
#define GCC_PCIE_3B_AUX_CLK					139
#define GCC_PCIE_3B_AUX_CLK_SRC				140
#define GCC_PCIE_3B_CFG_AHB_CLK				141
#define GCC_PCIE_3B_MSTR_AXI_CLK				142
#define GCC_PCIE_3B_PHY_RCHNG_CLK_SRC			143
#define GCC_PCIE_3B_PIPE_CLK				144
#define GCC_PCIE_3B_PIPE_CLK_SRC				145
#define GCC_PCIE_3B_PIPE_DIV_CLK_SRC			146
#define GCC_PCIE_3B_PIPEDIV2_CLK				147
#define GCC_PCIE_3B_SLV_AXI_CLK				148
#define GCC_PCIE_3B_SLV_Q2A_AXI_CLK			149
#define GCC_PCIE_4_AUX_CLK					150
#define GCC_PCIE_4_AUX_CLK_SRC				151
#define GCC_PCIE_4_CFG_AHB_CLK				152
#define GCC_PCIE_4_CLKREF_CLK				153
#define GCC_PCIE_4_MSTR_AXI_CLK				154
#define GCC_PCIE_4_PHY_RCHNG_CLK_SRC			155
#define GCC_PCIE_4_PIPE_CLK					156
#define GCC_PCIE_4_PIPE_CLK_SRC				157
#define GCC_PCIE_4_PIPE_DIV_CLK_SRC			158
#define GCC_PCIE_4_PIPEDIV2_CLK				159
#define GCC_PCIE_4_SLV_AXI_CLK				160
#define GCC_PCIE_4_SLV_Q2A_AXI_CLK				161
#define GCC_PCIE_RSCC_AHB_CLK				162
#define GCC_PCIE_RSCC_XO_CLK				163
#define GCC_PCIE_RSCC_XO_CLK_SRC				164
#define GCC_PCIE_THROTTLE_CFG_CLK				165
#define GCC_PDM2_CLK						166
#define GCC_PDM2_CLK_SRC					167
#define GCC_PDM_AHB_CLK					168
#define GCC_PDM_XO4_CLK					169
#define GCC_QMIP_CAMERA_NRT_AHB_CLK			170
#define GCC_QMIP_CAMERA_RT_AHB_CLK				171
#define GCC_QMIP_DISP1_AHB_CLK				172
#define GCC_QMIP_DISP1_ROT_AHB_CLK				173
#define GCC_QMIP_DISP_AHB_CLK				174
#define GCC_QMIP_DISP_ROT_AHB_CLK				175
#define GCC_QMIP_VIDEO_CVP_AHB_CLK				176
#define GCC_QMIP_VIDEO_VCODEC_AHB_CLK			177
#define GCC_QUPV3_WRAP0_CORE_2X_CLK			178
#define GCC_QUPV3_WRAP0_CORE_CLK				179
#define GCC_QUPV3_WRAP0_QSPI0_CLK				180
#define GCC_QUPV3_WRAP0_S0_CLK				181
#define GCC_QUPV3_WRAP0_S0_CLK_SRC				182
#define GCC_QUPV3_WRAP0_S1_CLK				183
#define GCC_QUPV3_WRAP0_S1_CLK_SRC				184
#define GCC_QUPV3_WRAP0_S2_CLK				185
#define GCC_QUPV3_WRAP0_S2_CLK_SRC				186
#define GCC_QUPV3_WRAP0_S3_CLK				187
#define GCC_QUPV3_WRAP0_S3_CLK_SRC				188
#define GCC_QUPV3_WRAP0_S4_CLK				189
#define GCC_QUPV3_WRAP0_S4_CLK_SRC				190
#define GCC_QUPV3_WRAP0_S4_DIV_CLK_SRC			191
#define GCC_QUPV3_WRAP0_S5_CLK				192
#define GCC_QUPV3_WRAP0_S5_CLK_SRC				193
#define GCC_QUPV3_WRAP0_S6_CLK				194
#define GCC_QUPV3_WRAP0_S6_CLK_SRC				195
#define GCC_QUPV3_WRAP0_S7_CLK				196
#define GCC_QUPV3_WRAP0_S7_CLK_SRC				197
#define GCC_QUPV3_WRAP1_CORE_2X_CLK			198
#define GCC_QUPV3_WRAP1_CORE_CLK				199
#define GCC_QUPV3_WRAP1_QSPI0_CLK				200
#define GCC_QUPV3_WRAP1_S0_CLK				201
#define GCC_QUPV3_WRAP1_S0_CLK_SRC				202
#define GCC_QUPV3_WRAP1_S1_CLK				203
#define GCC_QUPV3_WRAP1_S1_CLK_SRC				204
#define GCC_QUPV3_WRAP1_S2_CLK				205
#define GCC_QUPV3_WRAP1_S2_CLK_SRC				206
#define GCC_QUPV3_WRAP1_S3_CLK				207
#define GCC_QUPV3_WRAP1_S3_CLK_SRC				208
#define GCC_QUPV3_WRAP1_S4_CLK				209
#define GCC_QUPV3_WRAP1_S4_CLK_SRC				210
#define GCC_QUPV3_WRAP1_S4_DIV_CLK_SRC			211
#define GCC_QUPV3_WRAP1_S5_CLK				212
#define GCC_QUPV3_WRAP1_S5_CLK_SRC				213
#define GCC_QUPV3_WRAP1_S6_CLK				214
#define GCC_QUPV3_WRAP1_S6_CLK_SRC				215
#define GCC_QUPV3_WRAP1_S7_CLK				216
#define GCC_QUPV3_WRAP1_S7_CLK_SRC				217
#define GCC_QUPV3_WRAP2_CORE_2X_CLK			218
#define GCC_QUPV3_WRAP2_CORE_CLK				219
#define GCC_QUPV3_WRAP2_QSPI0_CLK				220
#define GCC_QUPV3_WRAP2_S0_CLK				221
#define GCC_QUPV3_WRAP2_S0_CLK_SRC				222
#define GCC_QUPV3_WRAP2_S1_CLK				223
#define GCC_QUPV3_WRAP2_S1_CLK_SRC				224
#define GCC_QUPV3_WRAP2_S2_CLK				225
#define GCC_QUPV3_WRAP2_S2_CLK_SRC				226
#define GCC_QUPV3_WRAP2_S3_CLK				227
#define GCC_QUPV3_WRAP2_S3_CLK_SRC				228
#define GCC_QUPV3_WRAP2_S4_CLK				229
#define GCC_QUPV3_WRAP2_S4_CLK_SRC				230
#define GCC_QUPV3_WRAP2_S4_DIV_CLK_SRC			231
#define GCC_QUPV3_WRAP2_S5_CLK				232
#define GCC_QUPV3_WRAP2_S5_CLK_SRC				233
#define GCC_QUPV3_WRAP2_S6_CLK				234
#define GCC_QUPV3_WRAP2_S6_CLK_SRC				235
#define GCC_QUPV3_WRAP2_S7_CLK				236
#define GCC_QUPV3_WRAP2_S7_CLK_SRC				237
#define GCC_QUPV3_WRAP_0_M_AHB_CLK				238
#define GCC_QUPV3_WRAP_0_S_AHB_CLK				239
#define GCC_QUPV3_WRAP_1_M_AHB_CLK				240
#define GCC_QUPV3_WRAP_1_S_AHB_CLK				241
#define GCC_QUPV3_WRAP_2_M_AHB_CLK				242
#define GCC_QUPV3_WRAP_2_S_AHB_CLK				243
#define GCC_SDCC2_AHB_CLK					244
#define GCC_SDCC2_APPS_CLK					245
#define GCC_SDCC2_APPS_CLK_SRC				246
#define GCC_SDCC4_AHB_CLK					247
#define GCC_SDCC4_APPS_CLK					248
#define GCC_SDCC4_APPS_CLK_SRC				249
#define GCC_SYS_NOC_USB_AXI_CLK				250
#define GCC_UFS_1_CARD_CLKREF_CLK				251
#define GCC_UFS_CARD_AHB_CLK				252
#define GCC_UFS_CARD_AXI_CLK				253
#define GCC_UFS_CARD_AXI_CLK_SRC				254
#define GCC_UFS_CARD_CLKREF_CLK				255
#define GCC_UFS_CARD_ICE_CORE_CLK				256
#define GCC_UFS_CARD_ICE_CORE_CLK_SRC			257
#define GCC_UFS_CARD_PHY_AUX_CLK				258
#define GCC_UFS_CARD_PHY_AUX_CLK_SRC			259
#define GCC_UFS_CARD_RX_SYMBOL_0_CLK			260
#define GCC_UFS_CARD_RX_SYMBOL_0_CLK_SRC			261
#define GCC_UFS_CARD_RX_SYMBOL_1_CLK			262
#define GCC_UFS_CARD_RX_SYMBOL_1_CLK_SRC			263
#define GCC_UFS_CARD_TX_SYMBOL_0_CLK			264
#define GCC_UFS_CARD_TX_SYMBOL_0_CLK_SRC			265
#define GCC_UFS_CARD_UNIPRO_CORE_CLK			266
#define GCC_UFS_CARD_UNIPRO_CORE_CLK_SRC			267
#define GCC_UFS_PHY_AHB_CLK					268
#define GCC_UFS_PHY_AXI_CLK					269
#define GCC_UFS_PHY_AXI_CLK_SRC				270
#define GCC_UFS_PHY_ICE_CORE_CLK				271
#define GCC_UFS_PHY_ICE_CORE_CLK_SRC			272
#define GCC_UFS_PHY_PHY_AUX_CLK				273
#define GCC_UFS_PHY_PHY_AUX_CLK_SRC			274
#define GCC_UFS_PHY_RX_SYMBOL_0_CLK			275
#define GCC_UFS_PHY_RX_SYMBOL_0_CLK_SRC			276
#define GCC_UFS_PHY_RX_SYMBOL_1_CLK			277
#define GCC_UFS_PHY_RX_SYMBOL_1_CLK_SRC			278
#define GCC_UFS_PHY_TX_SYMBOL_0_CLK			279
#define GCC_UFS_PHY_TX_SYMBOL_0_CLK_SRC			280
#define GCC_UFS_PHY_UNIPRO_CORE_CLK			281
#define GCC_UFS_PHY_UNIPRO_CORE_CLK_SRC			282
#define GCC_UFS_REF_CLKREF_CLK				283
#define GCC_USB2_HS0_CLKREF_CLK				284
#define GCC_USB2_HS1_CLKREF_CLK				285
#define GCC_USB2_HS2_CLKREF_CLK				286
#define GCC_USB2_HS3_CLKREF_CLK				287
#define GCC_USB30_MP_MASTER_CLK				288
#define GCC_USB30_MP_MASTER_CLK_SRC			289
#define GCC_USB30_MP_MOCK_UTMI_CLK				290
#define GCC_USB30_MP_MOCK_UTMI_CLK_SRC			291
#define GCC_USB30_MP_MOCK_UTMI_POSTDIV_CLK_SRC		292
#define GCC_USB30_MP_SLEEP_CLK				293
#define GCC_USB30_PRIM_MASTER_CLK				294
#define GCC_USB30_PRIM_MASTER_CLK_SRC			295
#define GCC_USB30_PRIM_MOCK_UTMI_CLK			296
#define GCC_USB30_PRIM_MOCK_UTMI_CLK_SRC			297
#define GCC_USB30_PRIM_MOCK_UTMI_POSTDIV_CLK_SRC		298
#define GCC_USB30_PRIM_SLEEP_CLK				299
#define GCC_USB30_SEC_MASTER_CLK				300
#define GCC_USB30_SEC_MASTER_CLK_SRC			301
#define GCC_USB30_SEC_MOCK_UTMI_CLK			302
#define GCC_USB30_SEC_MOCK_UTMI_CLK_SRC			303
#define GCC_USB30_SEC_MOCK_UTMI_POSTDIV_CLK_SRC		304
#define GCC_USB30_SEC_SLEEP_CLK				305
#define GCC_USB34_PRIM_PHY_PIPE_CLK_SRC			306
#define GCC_USB34_SEC_PHY_PIPE_CLK_SRC			307
#define GCC_USB3_MP0_CLKREF_CLK				308
#define GCC_USB3_MP1_CLKREF_CLK				309
#define GCC_USB3_MP_PHY_AUX_CLK				310
#define GCC_USB3_MP_PHY_AUX_CLK_SRC			311
#define GCC_USB3_MP_PHY_COM_AUX_CLK			312
#define GCC_USB3_MP_PHY_PIPE_0_CLK				313
#define GCC_USB3_MP_PHY_PIPE_0_CLK_SRC			314
#define GCC_USB3_MP_PHY_PIPE_1_CLK				315
#define GCC_USB3_MP_PHY_PIPE_1_CLK_SRC			316
#define GCC_USB3_PRIM_PHY_AUX_CLK				317
#define GCC_USB3_PRIM_PHY_AUX_CLK_SRC			318
#define GCC_USB3_PRIM_PHY_COM_AUX_CLK			319
#define GCC_USB3_PRIM_PHY_PIPE_CLK				320
#define GCC_USB3_PRIM_PHY_PIPE_CLK_SRC			321
#define GCC_USB3_SEC_PHY_AUX_CLK				322
#define GCC_USB3_SEC_PHY_AUX_CLK_SRC			323
#define GCC_USB3_SEC_PHY_COM_AUX_CLK			324
#define GCC_USB3_SEC_PHY_PIPE_CLK				325
#define GCC_USB3_SEC_PHY_PIPE_CLK_SRC			326
#define GCC_USB4_1_CFG_AHB_CLK				327
#define GCC_USB4_1_DP_CLK					328
#define GCC_USB4_1_MASTER_CLK				329
#define GCC_USB4_1_MASTER_CLK_SRC				330
#define GCC_USB4_1_PHY_DP_CLK_SRC				331
#define GCC_USB4_1_PHY_P2RR2P_PIPE_CLK			332
#define GCC_USB4_1_PHY_P2RR2P_PIPE_CLK_SRC		333
#define GCC_USB4_1_PHY_PCIE_PIPE_CLK			334
#define GCC_USB4_1_PHY_PCIE_PIPE_CLK_SRC			335
#define GCC_USB4_1_PHY_PCIE_PIPE_MUX_CLK_SRC		336
#define GCC_USB4_1_PHY_PCIE_PIPEGMUX_CLK_SRC		337
#define GCC_USB4_1_PHY_RX0_CLK				338
#define GCC_USB4_1_PHY_RX0_CLK_SRC				339
#define GCC_USB4_1_PHY_RX1_CLK				340
#define GCC_USB4_1_PHY_RX1_CLK_SRC				341
#define GCC_USB4_1_PHY_SYS_CLK_SRC				342
#define GCC_USB4_1_PHY_USB_PIPE_CLK			343
#define GCC_USB4_1_SB_IF_CLK				344
#define GCC_USB4_1_SB_IF_CLK_SRC				345
#define GCC_USB4_1_SYS_CLK					346
#define GCC_USB4_1_TMU_CLK					347
#define GCC_USB4_1_TMU_CLK_SRC				348
#define GCC_USB4_CFG_AHB_CLK				349
#define GCC_USB4_CLKREF_CLK					350
#define GCC_USB4_DP_CLK					351
#define GCC_USB4_EUD_CLKREF_CLK				352
#define GCC_USB4_MASTER_CLK					353
#define GCC_USB4_MASTER_CLK_SRC				354
#define GCC_USB4_PHY_DP_CLK_SRC				355
#define GCC_USB4_PHY_P2RR2P_PIPE_CLK			356
#define GCC_USB4_PHY_P2RR2P_PIPE_CLK_SRC			357
#define GCC_USB4_PHY_PCIE_PIPE_CLK				358
#define GCC_USB4_PHY_PCIE_PIPE_CLK_SRC			359
#define GCC_USB4_PHY_PCIE_PIPE_MUX_CLK_SRC		360
#define GCC_USB4_PHY_PCIE_PIPEGMUX_CLK_SRC		361
#define GCC_USB4_PHY_RX0_CLK				362
#define GCC_USB4_PHY_RX0_CLK_SRC				363
#define GCC_USB4_PHY_RX1_CLK				364
#define GCC_USB4_PHY_RX1_CLK_SRC				365
#define GCC_USB4_PHY_SYS_CLK_SRC				366
#define GCC_USB4_PHY_USB_PIPE_CLK				367
#define GCC_USB4_SB_IF_CLK					368
#define GCC_USB4_SB_IF_CLK_SRC				369
#define GCC_USB4_SYS_CLK					370
#define GCC_USB4_TMU_CLK					371
#define GCC_USB4_TMU_CLK_SRC				372
#define GCC_VIDEO_AHB_CLK					373
#define GCC_VIDEO_AXI0_CLK					374
#define GCC_VIDEO_AXI1_CLK					375
#define GCC_VIDEO_CVP_THROTTLE_CLK				376
#define GCC_VIDEO_VCODEC_THROTTLE_CLK			377
#define GCC_VIDEO_XO_CLK					378
#define GCC_AGGRE_UFS_CARD_AXI_HW_CTL_CLK			379
#define GCC_AGGRE_UFS_PHY_AXI_HW_CTL_CLK			380
#define GCC_UFS_CARD_AXI_HW_CTL_CLK			381
#define GCC_UFS_CARD_ICE_CORE_HW_CTL_CLK			382
#define GCC_UFS_CARD_PHY_AUX_HW_CTL_CLK			383
#define GCC_UFS_CARD_UNIPRO_CORE_HW_CTL_CLK		384
#define GCC_UFS_PHY_AXI_HW_CTL_CLK				385
#define GCC_UFS_PHY_ICE_CORE_HW_CTL_CLK			386
#define GCC_UFS_PHY_PHY_AUX_HW_CTL_CLK			387
#define GCC_UFS_PHY_UNIPRO_CORE_HW_CTL_CLK		388

/* GCC resets */
#define GCC_EMAC0_BCR						0
#define GCC_EMAC1_BCR						1
#define GCC_PCIE_0_LINK_DOWN_BCR				2
#define GCC_PCIE_0_NOCSR_COM_PHY_BCR				3
#define GCC_PCIE_0_PHY_BCR					4
#define GCC_PCIE_0_PHY_NOCSR_COM_PHY_BCR			5
#define GCC_PCIE_0_TUNNEL_BCR					6
#define GCC_PCIE_1_LINK_DOWN_BCR				7
#define GCC_PCIE_1_NOCSR_COM_PHY_BCR				8
#define GCC_PCIE_1_PHY_BCR					9
#define GCC_PCIE_1_PHY_NOCSR_COM_PHY_BCR			10
#define GCC_PCIE_1_TUNNEL_BCR					11
#define GCC_PCIE_2A_BCR						12
#define GCC_PCIE_2A_LINK_DOWN_BCR				13
#define GCC_PCIE_2A_NOCSR_COM_PHY_BCR				14
#define GCC_PCIE_2A_PHY_BCR					15
#define GCC_PCIE_2A_PHY_NOCSR_COM_PHY_BCR			16
#define GCC_PCIE_2B_BCR						17
#define GCC_PCIE_2B_LINK_DOWN_BCR				18
#define GCC_PCIE_2B_NOCSR_COM_PHY_BCR				19
#define GCC_PCIE_2B_PHY_BCR					20
#define GCC_PCIE_2B_PHY_NOCSR_COM_PHY_BCR			21
#define GCC_PCIE_3A_BCR						22
#define GCC_PCIE_3A_LINK_DOWN_BCR				23
#define GCC_PCIE_3A_NOCSR_COM_PHY_BCR				24
#define GCC_PCIE_3A_PHY_BCR					25
#define GCC_PCIE_3A_PHY_NOCSR_COM_PHY_BCR			26
#define GCC_PCIE_3B_BCR						27
#define GCC_PCIE_3B_LINK_DOWN_BCR				28
#define GCC_PCIE_3B_NOCSR_COM_PHY_BCR				29
#define GCC_PCIE_3B_PHY_BCR					30
#define GCC_PCIE_3B_PHY_NOCSR_COM_PHY_BCR			31
#define GCC_PCIE_4_BCR						32
#define GCC_PCIE_4_LINK_DOWN_BCR				33
#define GCC_PCIE_4_NOCSR_COM_PHY_BCR				34
#define GCC_PCIE_4_PHY_BCR					35
#define GCC_PCIE_4_PHY_NOCSR_COM_PHY_BCR			36
#define GCC_PCIE_PHY_CFG_AHB_BCR				37
#define GCC_PCIE_PHY_COM_BCR					38
#define GCC_PCIE_RSCC_BCR					39
#define GCC_QUSB2PHY_HS0_MP_BCR					40
#define GCC_QUSB2PHY_HS1_MP_BCR					41
#define GCC_QUSB2PHY_HS2_MP_BCR					42
#define GCC_QUSB2PHY_HS3_MP_BCR					43
#define GCC_QUSB2PHY_PRIM_BCR					44
#define GCC_QUSB2PHY_SEC_BCR					45
#define GCC_SDCC2_BCR						46
#define GCC_SDCC4_BCR						47
#define GCC_UFS_CARD_BCR					48
#define GCC_UFS_PHY_BCR						49
#define GCC_USB2_PHY_PRIM_BCR					50
#define GCC_USB2_PHY_SEC_BCR					51
#define GCC_USB30_MP_BCR					52
#define GCC_USB30_PRIM_BCR					53
#define GCC_USB30_SEC_BCR					54
#define GCC_USB3_DP_PHY_PRIM_BCR				55
#define GCC_USB3_DP_PHY_SEC_BCR					56
#define GCC_USB3_PHY_PRIM_BCR					57
#define GCC_USB3_PHY_SEC_BCR					58
#define GCC_USB3_UNIPHY_MP0_BCR					59
#define GCC_USB3_UNIPHY_MP1_BCR					60
#define GCC_USB3PHY_PHY_PRIM_BCR				61
#define GCC_USB3PHY_PHY_SEC_BCR					62
#define GCC_USB3UNIPHY_PHY_MP0_BCR				63
#define GCC_USB3UNIPHY_PHY_MP1_BCR				64
#define GCC_USB4_1_BCR						65
#define GCC_USB4_1_DP_PHY_PRIM_BCR				66
#define GCC_USB4_1_DPPHY_AUX_BCR				67
#define GCC_USB4_1_PHY_PRIM_BCR					68
#define GCC_USB4_BCR						69
#define GCC_USB4_DP_PHY_PRIM_BCR				70
#define GCC_USB4_DPPHY_AUX_BCR					71
#define GCC_USB4_PHY_PRIM_BCR					72
#define GCC_USB4PHY_1_PHY_PRIM_BCR				73
#define GCC_USB4PHY_PHY_PRIM_BCR				74
#define GCC_USB_PHY_CFG_AHB2PHY_BCR				75
#define GCC_VIDEO_BCR						76

#endif
