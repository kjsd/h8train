/**
 * @file music_toukaidou_shinkansen.c
 *
 * @brief This header file declares the definitions that are music score the
 * "Toukaidou Shinkansen".
 *
 * @htmlonly
 * @version $Id: music_toukaidou_shinkansen.c 54 2009-01-23 03:00:56Z Administrator $
 *
 * @author MINOURA Kenji / kenji_minoura@dnet.totec.co.jp
 *
 * Copyright (c) 2008 Totec Amenity, Ltd All rights reserved.
 * @endhtmlonly
 *
 ***********************************************************************/
#include <h8sdk.h>
#include <util.h>
#include <envelope.h>
#include <snddata.h>
#include "../include/music_toukaidou_shinkansen.h"

/**
 * Toukaidou Shinkansen A-melo
 */
static const SND_Tone ts_melodyA[] = {
    { &SND_MONO_E2, SND_L4, &ENVELOPE_L4 },
    { &SND_MONO_E2, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_F2, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_G2, SND_L4, &ENVELOPE_L4 },
    { &SND_MONO_C2, SND_L4, &ENVELOPE_L4 },
                                                
    { &SND_MONO_A2, SND_L4, &ENVELOPE_L4 },
    { &SND_MONO_G2, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_F2, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_G2, SND_L4, &ENVELOPE_L4 },
    { &SND_MONO_C2, SND_L4, &ENVELOPE_L4 },
                                                
    { &SND_MONO_F2, SND_L4, &ENVELOPE_L4 },
    { &SND_MONO_E2, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_D2, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_E2, SND_L4, &ENVELOPE_L4 },
    { &SND_MONO_C2, SND_L4, &ENVELOPE_L4 },
                                                
    { &SND_MONO_A1, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_C2, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_H1, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_D2, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_C2, SND_L2, &ENVELOPE_L2 },
};

static const _UBYTE ts_CD0[] = { SND_A1, SND_D1 };
static const _UBYTE ts_CD1[] = { SND_G1, SND_C1 };
static const _UBYTE ts_CD2[] = { SND_E1, SND_C1 };
static const SND_Chord ts_C0 = {
    ts_CD0, UTIL_ARRAY_SIZE_OF(ts_CD0)
};
static const SND_Chord ts_C1 = {
    ts_CD1, UTIL_ARRAY_SIZE_OF(ts_CD1)
};
static const SND_Chord ts_C2 = {
    ts_CD2, UTIL_ARRAY_SIZE_OF(ts_CD2)
};

static const SND_Tone ts_melodyB[] = {
    { &SND_MONO_C1, SND_L2, &ENVELOPE_L2 },
    { &SND_MONO_E1, SND_L2, &ENVELOPE_L2 },
   
    { &SND_MONO_F1, SND_L2, &ENVELOPE_L2 },
    { &SND_MONO_E1, SND_L2, &ENVELOPE_L2 },

    { &ts_C0, SND_L2, &ENVELOPE_L2 },
    { &ts_C1, SND_L2, &ENVELOPE_L2 },

    { &SND_MONO_F0, SND_L4, &ENVELOPE_L4 },
    { &SND_MONO_G0, SND_L4, &ENVELOPE_L4 },

    { &ts_C2, SND_L2, &ENVELOPE_L2 }
};

static const SND_Melody ts_partA[] = {
    {
        ts_melodyA, UTIL_ARRAY_SIZE_OF(ts_melodyA)
    }
};

static const SND_Melody ts_partB[] = {
    {
        ts_melodyB, UTIL_ARRAY_SIZE_OF(ts_melodyB)
    }
};

static const SND_Part ts_score[] = {
    {
        ts_partA, UTIL_ARRAY_SIZE_OF(ts_partA)
    },
    {
        ts_partB, UTIL_ARRAY_SIZE_OF(ts_partB)
    }
};

const SND_Music MUSIC_ToukaidouShinkansen = {
    ts_score, UTIL_ARRAY_SIZE_OF(ts_score)
};
