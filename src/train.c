/**
 * @file train.c
 *
 * @version $Id: train.c 54 2009-01-23 03:00:56Z Administrator $
 * @version $Name:$
 *
 * @brief This file contains the implementation of modules which are
 * responsibility of management of Train Animation.
 *
 * @component Train
 *
 * @author MINOURA Kenji / kenji_minoura@dnet.totec.co.jp
 *
 * Copyright (c) 2008 Totec Amenity, Ltd All rights reserved.
 *
 * @see <related_items>
 ***********************************************************************/
#ifdef __cplusplus
extern "C" {
void abort(void);
#endif
void main(void);
#ifdef __cplusplus
}
#endif

#include <h8sdk.h>
#include <util.h>
#include <led.h>
#include <lcd.h>
#include <adc.h>
#include <sci.h>
#include <push_switch.h>
#include "../include/music_beautiful_dreamer.h"
#include "../include/music_for_elise.h"
#include "../include/music_toukaidou_shinkansen.h"
#include "../include/train_image.h"
#include "train_def.h"


static const TRAIN_Data train[] = {
    /** Pattern 1 */
    {
        TRAINIMG_BMP_SL,
        TRAINIMG_ANIM_SL,
        &MUSIC_BeautifulDreamer,
    },

    /** Pattern 2 */
    {
        TRAINIMG_BMP_MEITETSU,
        TRAINIMG_ANIM_MEITETSU,
        &MUSIC_ForElise,
    },

    /** Pattern 3. */
    {
        TRAINIMG_BMP_SHINKANSEN,
        TRAINIMG_ANIM_SHINKANSEN,
        &MUSIC_ToukaidouShinkansen,
    }
};

static TRAIN_Param train_p = {
    0, 0, FUNC_NORMAL, 0, 0, 0, { 0 } };
static TRAIN_Send train_send_p = {
    FALSE, SSRP_ADDR_INVALID, 0, 0,
    { 0, 0, FUNC_NORMAL, 0, 0, 0, { 0 } }
};
static BOOL train_display = FALSE;

static TRAIN_StateTable train_state_tbl[] = {
    { train_hdl_deallocate, ST_READY }, 
    { train_hdl_ready, ST_RUNNING },
    { train_hdl_running, ST_CHANGING },
    { train_hdl_changing, ST_READY }
};


static void train_setType(_UINT t)
{
    _SINT i;

    for (i = 0; i < LCD_CG_MAXCHAR; i++)
    {
        LCD_setChar(i, train[t].map[i]);
    }
}

static void train_execADC()
{
    _SDWORD adcdata = -1;

    adcdata = ADC_get(ADC_AN0, FALSE);
    if (adcdata >= 0)
    {
        train_p.volume = adcdata >> 2;
        SND_setVolume(train_p.volume);
    }

    adcdata = ADC_get(ADC_AN1, TRUE);
    if (adcdata >= 0)
    {
        train_p.speed = adcdata >> 2;
        SND_setTempo(train_p.speed);
    }
}

static void train_execPSW()
{
    if (PSW_get(PSW_SW1))
    {
        train_p.type = UTIL_NEXT_RING(train_p.type,
                                      UTIL_ARRAY_SIZE_OF(train) - 1);

        train_setType(train_p.type);
        SND_setMusic(train[train_p.type].music, 0, NULL);
    }
    if (PSW_get(PSW_SW2))
    {
        train_p.func = UTIL_NEXT_RING(train_p.func, NUM_OF_FUNC - 1);

        switch (train_p.func)
        {
        case FUNC_NORMAL:
            SND_play();
            break;

        case FUNC_PAUSE:
            SND_pause();
            break;

        case FUNC_REVERSE:
            SND_reverse();
            break;

        default:
            UTIL_ASSERT(FALSE);
            break;
        }
    }
}

static void train_execLCD()
{
    static _UWORD anim_counter = 0;
    static _UWORD free_counter = 0;

    switch (train_p.func)
    {
    case FUNC_NORMAL:
        LCD_puts("  ");

        if ((anim_counter > ANIM_BORDER(train_p.speed)) && (train_p.speed != 0))
        {
            if (train_p.anim < UTIL_ARRAY_SIZE_OF(train[train_p.type].anim) - 1)
            {
                train_p.anim++;
                train_display = TRUE;
            }
            else
            {
                train_display = FALSE;
            }
            anim_counter = 0;
        }
        break;

    case FUNC_PAUSE:
        if (free_counter & BLINK_BORDER)
        {
            LCD_puts(" P");
        }
        else
        {
            LCD_puts("  ");
        }
        break;

    case FUNC_REVERSE:
        if (free_counter & BLINK_BORDER)
        {
            LCD_puts(" R");
        }
        else
        {
            LCD_puts("  ");
        }

        if ((anim_counter > ANIM_BORDER(train_p.speed)) && (train_p.speed != 0))
        {
            if (train_p.anim > 0)
            {
                --train_p.anim;
                train_display = TRUE;
            }
            else
            {
                train_display = FALSE;
            }

            anim_counter = 0;
        }
        break;

    default:
        UTIL_ASSERT(FALSE);
        break;
    }

    LCD_puts("\n");
    if (anim_counter == 0)
    {
        LCD_write(train[train_p.type].anim[train_p.anim],
                  UTIL_ARRAY_SIZE_OF(train[train_p.type].anim[train_p.anim]));
    }
    else
    {
        LCD_puts("\n");
    }

    anim_counter++;
    free_counter++;
}

static void train_status()
{
    _SBYTE str[4] = { '\0' };

    UTIL_itoa(train_p.speed, 10, str, sizeof(str) - 1);

    LCD_puts(str);
    LCD_puts("k ");

    str[2] = '\0';
    LCD_puts(SSRP_AddrStr);
    LCD_puts(":");
    UTIL_itoa(SSRP_getPear(SSRP_CON_FRONT), 16, str, sizeof(str) - 2);
    LCD_puts(str);
    UTIL_itoa(SSRP_getPear(SSRP_CON_BACK), 16, str, sizeof(str) - 2);
    LCD_puts(str);
    UTIL_itoa(SSRP_getTotalPear(), 16, str, sizeof(str) - 2);
    LCD_puts(str);

    if (SSRP_getPear(SSRP_CON_FRONT) == SSRP_ADDR_INVALID)
    {
        LED_OFF(LED_D5);
    }
    else
    {
        LED_ON(LED_D5);
    }
    if (SSRP_getPear(SSRP_CON_BACK) == SSRP_ADDR_INVALID)
    {
        LED_OFF(LED_D6);
    }
    else
    {
        LED_ON(LED_D6);
    }
}   

static BOOL train_hdl_deallocate()
{
    LCD_puts("\n\n");
    return SSRP_ready();
}

static BOOL train_hdl_ready()
{
    SSRP_Header* header = NULL;
    _UBYTE* data = NULL;
    _SINT rsize = 0;
    BOOL rtn = FALSE;
    SND_Position* pos = NULL;

    LCD_puts("\n\n");

    if (!SSRP_ready()) goto func_END;

    rsize = SSRP_recvfrom(&header, &data);
    if (rsize > 0)
    {
        if (SSRP_COMMAND_EQ(header, CMD_RUN, SSRP_FLG_EVT))
        {
            train_p = *((TRAIN_Param*)data);
            pos = train_p.music_pos;
            rtn = TRUE;
            goto func_END;
        }
    }

    if (PSW_get(PSW_SW2))
    {
        train_p.music_part = 0;
        rtn = TRUE;
        goto func_END;
    }

func_END:
    if (rtn)
    {
        train_setType(train_p.type);
        SND_setMusic(train[train_p.type].music, train_p.music_part, pos);
        switch (train_p.func)
        {
        case FUNC_NORMAL:
            SND_play();
            break;

        case FUNC_PAUSE:
            SND_pause();
            break;

        case FUNC_REVERSE:
            SND_reverse();
            break;

        default:
            UTIL_ASSERT(FALSE);
            break;
        }
    }
    return rtn;
}

static BOOL train_hdl_running()
{
    BOOL rtn = FALSE;

    if (!SSRP_ready()) goto func_END;

    train_execADC();
    train_execPSW();
    train_execLCD();

    switch (train_p.func)
    {
    case FUNC_NORMAL:
        if (train_p.anim > 15)
        {
            train_send_p.to = SSRP_getPear(SSRP_CON_FRONT);
            train_send_p.data.anim = train_p.anim - 16;
            train_send_p.data.func = FUNC_NORMAL;

            rtn = TRUE;
            goto func_END;
        }
        break;

    case FUNC_REVERSE:
        if (train_p.anim < 15)
        {
            train_send_p.to = SSRP_getPear(SSRP_CON_BACK);
            train_send_p.data.anim = train_p.anim +
                UTIL_ARRAY_SIZE_OF(train[train_p.type].anim) - 15;
            train_send_p.data.func = FUNC_REVERSE;

            rtn = TRUE;
            goto func_END;
        }
        break;

    default:
        break;
    }

func_END:
    if (rtn)
    {
        _UWORD num_of_part = 0;

        train_send_p.data.type = train_p.type;
        train_send_p.data.speed = train_p.speed;
        train_send_p.data.volume = train_p.volume;
        train_send_p.rsize = 0;
        train_send_p.valid = FALSE;

        num_of_part = SND_getPosition(&train_send_p.data.music_part,
                                      train_send_p.data.music_pos);
        train_send_p.ssize =
            sizeof(TRAIN_Param) - sizeof(train_send_p.data.music_pos) +
            (sizeof(SND_Position) * num_of_part);
    }
    return rtn;
}

static BOOL train_hdl_changing()
{
    _SINT rsize = 0;

    if (!SSRP_ready()) return FALSE;

    if (!train_send_p.valid)
    {
        rsize = SSRP_sendto(train_send_p.to, CMD_RUN, SSRP_FLG_EVT,
                            (_UBYTE*)&train_send_p.data + train_send_p.rsize,
                            train_send_p.ssize - train_send_p.rsize,
                            NULL, FALSE);
        if (rsize < 0)
        {
            SSRP_shutdown(SSRP_TRX_SEND);
        }
        else
        {
            train_send_p.rsize += rsize;
            if (train_send_p.rsize == train_send_p.ssize)
            {
                train_send_p.valid = TRUE;
            }
        }
    }

    train_execLCD();

    if (train_send_p.valid && !train_display)
    {
        train_p.anim = 0;
        train_p.func = FUNC_NORMAL;
        SND_stop();

        return TRUE;
    }

    return FALSE;
}

void main(void)
{
    TRAIN_State state = ST_DEALLOCATE;

    LED_INIT;
    LCD_init();
    SCI_init();
    PSW_init(FALSE);
    ADC_init(ADC_SCAN, FALSE);
    ADC_enable(ADC_AN1);
    ADC_start();

    SSRP_init(SSRP_ADDR);
    SND_init();

    for (;;)
    {
        SSRP_exec();

        train_status();
        if (train_state_tbl[state].handle())
        {
            state = train_state_tbl[state].next;
        }
    }
}

#ifdef __cplusplus
void abort(void)
{
	
}
#endif
