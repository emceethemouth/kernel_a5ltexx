/* Copyright (c) 2012-2014, The Linux Foundation. All rights reserved.
#ifndef MDSS_HX8394C_DSI_PANEL_H
#include "mdss_panel.h"
#ifdef CONFIG_FB_MSM_MIPI_SAMSUNG_QHD_VIDEO_PT_PANEL
#include "smart_mtp_s6e88a.h"
#endif

enum {
	MIPI_RESUME_STATE,
	MIPI_SUSPEND_STATE,
};
enum mdss_cmd_list {
	PANEL_BRIGHT_CTRL,
	PANEL_CABC_DISABLE,
	PANEL_BRIGHT_CTRL,
	PANEL_DISPLAY_ON_SEQ,
	PANEL_DISPLAY_OFF_SEQ,
	PANEL_DISPLAY_ON,
	PANEL_DISPLAY_OFF,
	PANEL_MTP_ENABLE,
	PANEL_MTP_DISABLE,
	PANEL_ACL_OFF,
#endif
struct cmd_map {
	int *bl_level;
	int *cmd_idx;
	int size;
};

struct candella_lux_map {
	int *lux_tab;
	int *cmd_idx;
	int lux_tab_size;
	int bkl[256];
};
struct panel_hrev {
enum {
	PANEL_HX8394C_720P_VIDEO,
	MAX_PANEL_LIST,
#endif	/* MDSS_HX8394C_DSI_PANEL_H */