/******************************************************************************
 * Copyright (C) 2014-2018 Zhifeng Gong <gozfree@163.com>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with libraries; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 ******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <stdint.h>
#include <x264.h>
#include <libmacro.h>
#include <liblog.h>

#include "muxer.h"
#include "common.h"

static int flv_open(struct muxer_ctx *cc, struct media_params *media)
{
    return 0;
}

struct muxer aq_flv_muxer = {
    .name         = "flv",
    .open         = flv_open,
    .write_header = NULL,
    .write_packet = NULL,
    .write_tailer = NULL,
    .read_header  = NULL,
    .read_packet  = NULL,
    .read_tailer  = NULL,
    .close  = NULL,
};
