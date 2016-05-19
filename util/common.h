/******************************************************************************
 * Copyright (C) 2014-2015
 * file:    common.h
 * author:  gozfree <gozfree@163.com>
 * created: 2016-05-02 16:07
 * updated: 2016-05-02 16:07
 ******************************************************************************/
#ifndef _COMMON_H_
#define _COMMON_H_

#include <stdint.h>
#include <stdlib.h>
#include <sys/uio.h>

#ifdef __cplusplus
extern "C" {
#endif

enum conf_map_index {
    ALSA = 0,
    MJPEG,
    PLAYBACK,
    SDL,
    SNKFAKE,
    V4L2,
    VDEVFAKE,
    VENCODE,
    VDECODE,
    VIDEOCAP,
    X264,
    YUV420,
    YUV422P,
    UNKNOWN = -1
};

enum yuv_format {
    YUV420_IYUV = 0,	// YYYYYYYYUUVV
    YUV420_YV12 = 1,	// YYYYYYYYVVUU
    YUV420_NV12 = 2,	// YYYYYYYYUVUV
    YUV422_YU16 = 3,	// YYYYYYYYUUUUVVVV
    YUV422_YV16 = 4,	// YYYYYYYYVVVVUUUU
};

struct ikey_cvalue {
    int val;
    char str[32];
};


struct frame {
    struct iovec buf;
    int index;
};

struct video_param {
    int width;
    int height;
    int pix_fmt;
};

struct audio_param {

};

struct media_params {
    union {
        struct video_param video;
        struct audio_param audio;
    };
};

#ifdef __cplusplus
}
#endif
#endif