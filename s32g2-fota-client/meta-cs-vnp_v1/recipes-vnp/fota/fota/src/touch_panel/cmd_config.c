/*
 * Copyright 2021 NXP
 *
 * SPDX-License-Identifier:  BSD-3-Clause
*/
#include "cmd_config.h"

/*****************
* Receive Commands map
* ***************/

const char msg_rec_S32G_updates[]={0xdd,0x00,0x04,0x00,0x01,0xdd,0xDC,0xdd,0xdd};
const char msg_rec_S32G_unupdates[]={0xdd,0x00,0x04,0x00,0x02,0xdd,0xdc,0xdd,0xdd};
const char msg_rec_S32G_later_updates[]={0xdd,0x00,0x04,0x00,0x03,0xdd,0xdc,0xdd,0xdd};

const char msg_rec_S32G_install[]={0xdd,0x00,0x08,0x00,0x01,0xdd,0xdc,0xdd,0xdd};
const char msg_rec_S32G_uninstall[]={0xdd,0x00,0x08,0x00,0x02,0xdd,0xdc,0xdd,0xdd};
const char msg_rec_S32G_later_install[]={0xdd,0x00,0x08,0x00,0x03,0xdd,0xdc,0xdd,0xdd};



const char msg_rec_S32G_active[]={0xdd,0x00,0x0A,0x00,0x01,0xdd,0xdc,0xdd,0xdd};
const char msg_rec_S32G_inactive[]={0xdd,0x00,0x0A,0x00,0x02,0xdd,0xdc,0xdd,0xdd};
const char msg_rec_S32G_later_active[]={0xdd,0x00,0x0A,0x00,0x03,0xdd,0xdc,0xdd,0xdd};

const char msg_rec_S32G_English[]={0xdd,0x00,0x00,0x00,0x07,0xdd,0xdc,0xdd,0xdd};




