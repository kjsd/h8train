/**
 * @file music_beautiful_dreamer.c
 *
 * @brief This header file declares the definitions that are music score the
 * "Beautiful Dreamer".
 *
 * @htmlonly
 * @version $Id: music_beautiful_dreamer.c 54 2009-01-23 03:00:56Z Administrator $
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
#include "../include/music_beautiful_dreamer.h"

/**
 * Beautiful Dreamer main melody
 */
static const SND_Tone bd_melody[] = {
    { &SND_MONO_F1, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_E1, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_F1, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_C1, SND_L4 + SND_L8, &ENVELOPE_L4 },
    { &SND_MONO_A0, SND_L4 + SND_L8, &ENVELOPE_L4 },

    { &SND_MONO_A0, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_G0, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_Fb0, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_G0, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_D1, SND_L4 + SND_L8, &ENVELOPE_L4 },
                                                    
    { &SND_MONO_C1, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_E1, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_D1, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_D1, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_C1, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_Ab0, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_Ab0, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_A0, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_G0, SND_L8, &ENVELOPE_L8 },
                                                    
    { &SND_MONO_A0, (SND_L4 + SND_L8) * 3, &ENVELOPE_L0 },
                                                    
    { &SND_MONO_F1, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_E1, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_F1, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_C1, SND_L4 + SND_L8, &ENVELOPE_L4 },
    { &SND_MONO_A0, SND_L4 + SND_L8, &ENVELOPE_L4 },
                                                    
    { &SND_MONO_G0, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_Fb0, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_G0, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_D1, (SND_L4 + SND_L8) * 2, &ENVELOPE_L2 },
                                                    
    { &SND_MONO_C1, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_E1, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_D1, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_D1, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_C1, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_Ab0, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_Ab0, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_A0, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_G0, SND_L8, &ENVELOPE_L8 },
                                                    
    { &SND_MONO_F0, (SND_L4 + SND_L8) * 3, &ENVELOPE_L0 },
                                                    
    { &SND_MONO_C1, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_Ab0, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_G0, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_E0, SND_L4 + SND_L8, &ENVELOPE_L4 },
    { &SND_MONO_D1, SND_L4 + SND_L8, &ENVELOPE_L4 },
                                                    
    { &SND_MONO_D1, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_C1, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_A0, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_F0, (SND_L4 + SND_L8) * 2, &ENVELOPE_L2 },
                                                    
    { &SND_MONO_F1, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_E1, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_F1, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_D1, SND_L4 + SND_L8, &ENVELOPE_L4 },
    { &SND_MONO_G1, SND_L4, &ENVELOPE_L4 },
    { &SND_MONO_F1, SND_L8, &ENVELOPE_L8 },
                                                    
    { &SND_MONO_E1, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_F1, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_D1, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_C1, (SND_L4 + SND_L8) * 2, &ENVELOPE_L2 },
                                                    
    { &SND_MONO_F1, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_E1, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_F1, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_C1, SND_L4 + SND_L8, &ENVELOPE_L4 },
    { &SND_MONO_A0, SND_L4 + SND_L8, &ENVELOPE_L4 },
                                                    
    { &SND_MONO_G0, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_Fb0, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_G0, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_D1, (SND_L4 + SND_L8) * 2, &ENVELOPE_L2 },
                                                    
    { &SND_MONO_C1, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_E1, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_D1, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_D1, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_C1, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_Ab0, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_Ab0, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_A0, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_G0, SND_L8, &ENVELOPE_L8 },
                                                    
    { &SND_MONO_A0, (SND_L4 + SND_L8) * 3, &ENVELOPE_L0 },
                                                    
    { &SND_MONO_D1, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_E1, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_F1, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_F1, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_C1, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_A0, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_C1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_Ab0, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_A0, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_A0, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_G0, SND_L8, &ENVELOPE_L8 },

    { &SND_MONO_F0, (SND_L4 + SND_L8) * 3, &ENVELOPE_L0 },
};

/**
 * Beautiful Dreamer main part
 */
static const SND_Melody bd_part[] = {
    {
        bd_melody, UTIL_ARRAY_SIZE_OF(bd_melody)
    }
};

static const SND_Part bd_score[] = {
    {
        bd_part, UTIL_ARRAY_SIZE_OF(bd_part)
    }
};

const SND_Music MUSIC_BeautifulDreamer = {
    bd_score, UTIL_ARRAY_SIZE_OF(bd_score)
};
