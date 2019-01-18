/**
 * @file train_def.c
 *
 * @version $Id: train.c 9 2008-12-22 01:23:29Z Administrator $
 * @version $Name:$
 *
 * @brief This file contains the implementation of modules which are
 * local definitions of Train component.
 *
 * @component Train
 *
 * @author MINOURA Kenji / kenji_minoura@dnet.totec.co.jp
 *
 * Copyright (c) 2008 Totec Amenity, Ltd All rights reserved.
 *
 * @see <related_items>
 ***********************************************************************/
#ifndef TRAIN_DEF_H
#define TRAIN_DEF_H

#ifdef __cplusplus
extern "C" {
#endif

#include <h8sdk.h>
#include <snd.h>
#include <ssrp.h>
#include "../include/train.h"

#define BLINK_BORDER 0x100
#define ANIM_BORDER(speed) ((0x100 - (speed)) << 1)

#define CMD_RUN (SSRP_CMD_EX | 0x00)
#define CMD_INVALID (SSRP_CMD_EX | 0x7f)

typedef enum
{
    ST_DEALLOCATE = 0,
    ST_READY,
    ST_RUNNING,
    ST_CHANGING,

    NUM_OF_STATE
} TRAIN_State;

typedef enum
{
    FUNC_NORMAL = 0,
    FUNC_PAUSE,
    FUNC_REVERSE,

    NUM_OF_FUNC
} TRAIN_Func;

typedef struct
{
    _UBYTE map[LCD_CG_MAXCHAR][LCD_CG_ROWS];
    /**< Bitmap */

    _UBYTE anim[TRAINIMG_MAX_ANIM][LCD_MAX_COLS];
    /**< Animation */

    SND_Music* music;
    /**< Music */
} TRAIN_Data;

typedef struct
{
    _UBYTE type;
    _UBYTE anim;
    _UBYTE func;
    _UBYTE speed;
    _UBYTE volume;
    _UBYTE music_part;
    SND_Position music_pos[SND_MAX_PART];
} TRAIN_Param;

typedef struct
{
    BOOL valid;
    SSRP_Address to;
    _UBYTE rsize;
    _UBYTE ssize;
    TRAIN_Param data;
} TRAIN_Send;

typedef struct
{
    BOOL (*handle)();
    TRAIN_State next;
} TRAIN_StateTable;

static void train_status();
static void train_setType(_UINT t);
static void train_execADC();
static void train_execPSW();
static void train_execLCD();
static BOOL train_hdl_deallocate();
static BOOL train_hdl_ready();
static BOOL train_hdl_running();
static BOOL train_hdl_changing();

#ifdef __cplusplus
}
#endif

#endif /* TRAIN_DEF_H */
