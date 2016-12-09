/**
 * @file music_for_elise.c
 *
 * @brief This header file declares the definitions that are music score the
 * "For Elise".
 *
 * @htmlonly
 * @version $Id: music_for_elise.c 54 2009-01-23 03:00:56Z Administrator $
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
#include "../include/music_for_elise.h"

#define MUSIC_FORELISE_BAR (SND_L16 * 6)

/**
 * For Elise A-melo.
 */
static const SND_Tone fe_melody0A[] = {
    { &SND_MONO_E2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_Db2, SND_L16, &ENVELOPE_L16 },
                                                    
    { &SND_MONO_E2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_Db2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_H1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_D2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_C2, SND_L16, &ENVELOPE_L16 },
                                                    
    { &SND_MONO_A1, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_NA, SND_L16, &ENVELOPE_NA },
    { &SND_MONO_C1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_A1, SND_L16, &ENVELOPE_L16 },
                                                    
    { &SND_MONO_H1, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_NA, SND_L16, &ENVELOPE_NA },
    { &SND_MONO_E1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_Gb1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_H1, SND_L16, &ENVELOPE_L16 },
                                                    
    { &SND_MONO_C2, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_NA, SND_L16, &ENVELOPE_NA },
    { &SND_MONO_E1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_Db2, SND_L16, &ENVELOPE_L16 },
                                                    
    { &SND_MONO_E2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_Db2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_H1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_D2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_C2, SND_L16, &ENVELOPE_L16 },
                                                    
    { &SND_MONO_A1, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_NA, SND_L16, &ENVELOPE_NA },
    { &SND_MONO_C1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_A1, SND_L16, &ENVELOPE_L16 },
                                                    
    { &SND_MONO_H1, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_NA, SND_L16, &ENVELOPE_NA },
    { &SND_MONO_E1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_C2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_H1, SND_L16, &ENVELOPE_L16 },
};

/**
 * For Elise B-melo.
 */
static const SND_Tone fe_melody0B[] = {
    { &SND_MONO_E2, SND_L8 + SND_L16, &ENVELOPE_L8 },
    { &SND_MONO_G1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_F2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E2, SND_L16, &ENVELOPE_L16 },
                                                    
    { &SND_MONO_D2, SND_L8 + SND_L16, &ENVELOPE_L8 },
    { &SND_MONO_F1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_D2, SND_L16, &ENVELOPE_L16 },
                                                    
    { &SND_MONO_C2, SND_L8 + SND_L16, &ENVELOPE_L8 },
    { &SND_MONO_E1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_D2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_C2, SND_L16, &ENVELOPE_L16 },
                                                    
    { &SND_MONO_H1, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_NA, SND_L16, &ENVELOPE_NA },
    { &SND_MONO_E1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_NA, SND_L16, &ENVELOPE_NA },
                                                    
    { &SND_MONO_NA, SND_L16, &ENVELOPE_NA },
    { &SND_MONO_E2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E3, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_NA, SND_L16, &ENVELOPE_NA },
    { &SND_MONO_NA, SND_L16, &ENVELOPE_NA },
    { &SND_MONO_Db2, SND_L16, &ENVELOPE_L16 },
                                                    
    { &SND_MONO_E2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_NA, SND_L16, &ENVELOPE_NA },
    { &SND_MONO_NA, SND_L16, &ENVELOPE_NA },
    { &SND_MONO_Db2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_Db2, SND_L16, &ENVELOPE_L16 },

    { &SND_MONO_E2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_Db2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_H1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_D2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_C2, SND_L16, &ENVELOPE_L16 },
                                                    
    { &SND_MONO_A1, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_NA, SND_L16, &ENVELOPE_NA },
    { &SND_MONO_C1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_A1, SND_L16, &ENVELOPE_L16 },
                                                    
    { &SND_MONO_H1, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_NA, SND_L16, &ENVELOPE_NA },
    { &SND_MONO_E1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_Gb1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_H1, SND_L16, &ENVELOPE_L16 },
                                                    
    { &SND_MONO_C2, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_NA, SND_L16, &ENVELOPE_NA },
    { &SND_MONO_E1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_Db2, SND_L16, &ENVELOPE_L16 },
                                                    
    { &SND_MONO_E2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_Db2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_H1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_D2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_C2, SND_L16, &ENVELOPE_L16 },
                                                    
    { &SND_MONO_A1, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_NA, SND_L16, &ENVELOPE_NA },
    { &SND_MONO_C1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_A1, SND_L16, &ENVELOPE_L16 },
                                                    
    { &SND_MONO_H1, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_NA, SND_L16, &ENVELOPE_NA },
    { &SND_MONO_E1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_C2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_H1, SND_L16, &ENVELOPE_L16 }
};

/**
 * For Elise Inter melody
 */
static const SND_Tone fe_melody0A0[] = {
    { &SND_MONO_A1, SND_L4, &ENVELOPE_L4 },
};

/**
 * For Elise Inter melody
 */
static const SND_Tone fe_melody0A1[] = {
    { &SND_MONO_A1, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_NA, SND_L16, &ENVELOPE_NA },
    { &SND_MONO_H1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_C2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_D2, SND_L16, &ENVELOPE_L16 },
};

static const _UBYTE fe_0B0_CD0[] = { SND_A1, SND_E1 };
static const _UBYTE fe_0B0_CD1[] = { SND_A1, SND_F1 };
static const _UBYTE fe_0B0_CD2[] = { SND_A1, SND_G1, SND_E1 };
static const SND_Chord fe_0B0_C0 = {
    fe_0B0_CD0, UTIL_ARRAY_SIZE_OF(fe_0B0_CD0)
};
static const SND_Chord fe_0B0_C1 = {
    fe_0B0_CD1, UTIL_ARRAY_SIZE_OF(fe_0B0_CD1)
};
static const SND_Chord fe_0B0_C2 = {
    fe_0B0_CD2, UTIL_ARRAY_SIZE_OF(fe_0B0_CD2)
};

/**
 * For Elise Inter melody
 */
static const SND_Tone fe_melody0B0[] = {
    { &SND_MONO_A1, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_NA, SND_L16, &ENVELOPE_NA },
    { &fe_0B0_C0, SND_L16, &ENVELOPE_L32 },
    { &fe_0B0_C1, SND_L16, &ENVELOPE_L32 },
    { &fe_0B0_C2, SND_L16, &ENVELOPE_L32 },
};

static const _UBYTE fe_0C_CD0[] = { SND_Cb2, SND_Ab1, SND_G1, SND_E1 };
static const _UBYTE fe_0C_CD1[] = { SND_D2, SND_A1, SND_F1 };
static const _UBYTE fe_0C_CD2[] = { SND_E2, SND_Cb2 };
static const _UBYTE fe_0C_CD3[] = { SND_F2, SND_D2 };
static const _UBYTE fe_0C_CD4[] = { SND_F2, SND_D2, SND_Gb1 };
static const _UBYTE fe_0C_CD5[] = { SND_E2, SND_C2, SND_E1 };
static const _UBYTE fe_0C_CD6[] = { SND_D2, SND_F1 };
static const _UBYTE fe_0C_CD7[] = { SND_C2, SND_E1 };
static const _UBYTE fe_0C_CD8[] = { SND_H1, SND_D1 };
static const _UBYTE fe_0C_CD9[] = { SND_A1, SND_Fb1, SND_C1 };
static const _UBYTE fe_0C_CD10[] = { SND_A1, SND_C1 };
static const _UBYTE fe_0C_CD11[] = { SND_Db2, SND_G1 };
static const _UBYTE fe_0C_CD12[] = { SND_C2, SND_Db1 };
static const _UBYTE fe_0C_CD13[] = { SND_Ab1, SND_F1, SND_D1 };
static const _UBYTE fe_0C_CD14[] = { SND_A1, SND_F1, SND_D1 };
static const _UBYTE fe_0C_CD15[] = { SND_Gb1, SND_F1, SND_D1 };
static const _UBYTE fe_0C_CD16[] = { SND_G1, SND_F1, SND_D1 };
static const _UBYTE fe_0C_CD17[] = { SND_A1, SND_E1, SND_C1 };
static const _UBYTE fe_0C_CD18[] = { SND_H1, SND_E1, SND_D1 };
static const SND_Chord fe_0C_C0 = {
    fe_0C_CD0, UTIL_ARRAY_SIZE_OF(fe_0C_CD0)
};
static const SND_Chord fe_0C_C1 = {
    fe_0C_CD1, UTIL_ARRAY_SIZE_OF(fe_0C_CD1)
};
static const SND_Chord fe_0C_C2 = {
    fe_0C_CD2, UTIL_ARRAY_SIZE_OF(fe_0C_CD2)
};
static const SND_Chord fe_0C_C3 = {
    fe_0C_CD3, UTIL_ARRAY_SIZE_OF(fe_0C_CD3)
};
static const SND_Chord fe_0C_C4 = {
    fe_0C_CD4, UTIL_ARRAY_SIZE_OF(fe_0C_CD4)
};
static const SND_Chord fe_0C_C5 = {
    fe_0C_CD5, UTIL_ARRAY_SIZE_OF(fe_0C_CD5)
};
static const SND_Chord fe_0C_C6 = {
    fe_0C_CD6, UTIL_ARRAY_SIZE_OF(fe_0C_CD6)
};
static const SND_Chord fe_0C_C7 = {
    fe_0C_CD7, UTIL_ARRAY_SIZE_OF(fe_0C_CD7)
};
static const SND_Chord fe_0C_C8 = {
    fe_0C_CD8, UTIL_ARRAY_SIZE_OF(fe_0C_CD8)
};
static const SND_Chord fe_0C_C9 = {
    fe_0C_CD9, UTIL_ARRAY_SIZE_OF(fe_0C_CD9)
};
static const SND_Chord fe_0C_C10 = {
    fe_0C_CD10, UTIL_ARRAY_SIZE_OF(fe_0C_CD10)
};
static const SND_Chord fe_0C_C11 = {
    fe_0C_CD11, UTIL_ARRAY_SIZE_OF(fe_0C_CD11)
};
static const SND_Chord fe_0C_C12 = {
    fe_0C_CD12, UTIL_ARRAY_SIZE_OF(fe_0C_CD12)
};
static const SND_Chord fe_0C_C13 = {
    fe_0C_CD13, UTIL_ARRAY_SIZE_OF(fe_0C_CD13)
};
static const SND_Chord fe_0C_C14 = {
    fe_0C_CD14, UTIL_ARRAY_SIZE_OF(fe_0C_CD14)
};
static const SND_Chord fe_0C_C15 = {
    fe_0C_CD15, UTIL_ARRAY_SIZE_OF(fe_0C_CD15)
};
static const SND_Chord fe_0C_C16 = {
    fe_0C_CD16, UTIL_ARRAY_SIZE_OF(fe_0C_CD16)
};
static const SND_Chord fe_0C_C17 = {
    fe_0C_CD17, UTIL_ARRAY_SIZE_OF(fe_0C_CD17)
};
static const SND_Chord fe_0C_C18 = {
    fe_0C_CD18, UTIL_ARRAY_SIZE_OF(fe_0C_CD18)
};

/**
 * For Elise C-melo
 */
static const SND_Tone fe_melody0C[] = {
    { &SND_MONO_F1, SND_L16, &ENVELOPE_L4 },
    { &SND_MONO_A1, SND_L16, &ENVELOPE_L4 },
    { &SND_MONO_C2, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_F2, SND_L16 + SND_L32, &ENVELOPE_L16 },
    { &SND_MONO_E2, SND_L32, &ENVELOPE_L32 },

    { &SND_MONO_E2, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_D2, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_Ab2, SND_L16 + SND_L32, &ENVELOPE_L16 },
    { &SND_MONO_A2, SND_L32, &ENVELOPE_L32 },

    { &SND_MONO_A2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_G2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_F2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_D2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_C2, SND_L16, &ENVELOPE_L16 },

    { &SND_MONO_Ab1, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_A1, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_H1, SND_L64, &ENVELOPE_L32 },
    { &SND_MONO_A1, SND_L64, &ENVELOPE_L64 },
    { &SND_MONO_G1, SND_L32, &ENVELOPE_L32 },
    { &SND_MONO_A1, SND_L32, &ENVELOPE_L32 },
    { &SND_MONO_H1, SND_L32, &ENVELOPE_L32 },

    { &SND_MONO_C2, SND_L4, &ENVELOPE_L4 },
    { &SND_MONO_D2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_Db2, SND_L16, &ENVELOPE_L16 },

    { &SND_MONO_E2, SND_L8 + SND_L16, &ENVELOPE_L8 },
    { &SND_MONO_E2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_F2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_A1, SND_L16, &ENVELOPE_L16 },

    { &SND_MONO_C2, SND_L4, &ENVELOPE_L4 },
    { &SND_MONO_D2, SND_L16 + SND_L32, &ENVELOPE_L16 },
    { &SND_MONO_H1, SND_L32, &ENVELOPE_L32 },

    { &SND_MONO_C2, SND_L32, &ENVELOPE_L32 },
    { &SND_MONO_G2, SND_L32, &ENVELOPE_L32 },
    { &SND_MONO_G1, SND_L32, &ENVELOPE_L32 },
    { &SND_MONO_G2, SND_L32, &ENVELOPE_L32 },
    { &SND_MONO_A1, SND_L32, &ENVELOPE_L32 },
    { &SND_MONO_G2, SND_L32, &ENVELOPE_L32 },
    { &SND_MONO_H1, SND_L32, &ENVELOPE_L32 },
    { &SND_MONO_G2, SND_L32, &ENVELOPE_L32 },
    { &SND_MONO_C2, SND_L32, &ENVELOPE_L32 },
    { &SND_MONO_G2, SND_L32, &ENVELOPE_L32 },
    { &SND_MONO_D2, SND_L32, &ENVELOPE_L32 },
    { &SND_MONO_G2, SND_L32, &ENVELOPE_L32 },

    { &SND_MONO_E2, SND_L32, &ENVELOPE_L32 },
    { &SND_MONO_G2, SND_L32, &ENVELOPE_L32 },
    { &SND_MONO_C3, SND_L32, &ENVELOPE_L32 },
    { &SND_MONO_H2, SND_L32, &ENVELOPE_L32 },
    { &SND_MONO_A2, SND_L32, &ENVELOPE_L32 },
    { &SND_MONO_G2, SND_L32, &ENVELOPE_L32 },
    { &SND_MONO_F2, SND_L32, &ENVELOPE_L32 },
    { &SND_MONO_E2, SND_L32, &ENVELOPE_L32 },
    { &SND_MONO_D2, SND_L32, &ENVELOPE_L32 },
    { &SND_MONO_G2, SND_L32, &ENVELOPE_L32 },
    { &SND_MONO_F2, SND_L32, &ENVELOPE_L32 },
    { &SND_MONO_D2, SND_L32, &ENVELOPE_L32 },

    { &SND_MONO_C2, SND_L32, &ENVELOPE_L32 },
    { &SND_MONO_G2, SND_L32, &ENVELOPE_L32 },
    { &SND_MONO_G1, SND_L32, &ENVELOPE_L32 },
    { &SND_MONO_G2, SND_L32, &ENVELOPE_L32 },
    { &SND_MONO_A1, SND_L32, &ENVELOPE_L32 },
    { &SND_MONO_G2, SND_L32, &ENVELOPE_L32 },
    { &SND_MONO_H1, SND_L32, &ENVELOPE_L32 },
    { &SND_MONO_G2, SND_L32, &ENVELOPE_L32 },
    { &SND_MONO_C2, SND_L32, &ENVELOPE_L32 },
    { &SND_MONO_G2, SND_L32, &ENVELOPE_L32 },
    { &SND_MONO_D2, SND_L32, &ENVELOPE_L32 },
    { &SND_MONO_G2, SND_L32, &ENVELOPE_L32 },

    { &SND_MONO_E2, SND_L32, &ENVELOPE_L32 },
    { &SND_MONO_G2, SND_L32, &ENVELOPE_L32 },
    { &SND_MONO_C3, SND_L32, &ENVELOPE_L32 },
    { &SND_MONO_H2, SND_L32, &ENVELOPE_L32 },
    { &SND_MONO_A2, SND_L32, &ENVELOPE_L32 },
    { &SND_MONO_G2, SND_L32, &ENVELOPE_L32 },
    { &SND_MONO_F2, SND_L32, &ENVELOPE_L32 },
    { &SND_MONO_E2, SND_L32, &ENVELOPE_L32 },
    { &SND_MONO_D2, SND_L32, &ENVELOPE_L32 },
    { &SND_MONO_G2, SND_L32, &ENVELOPE_L32 },
    { &SND_MONO_F2, SND_L32, &ENVELOPE_L32 },
    { &SND_MONO_D2, SND_L32, &ENVELOPE_L32 },

    { &SND_MONO_E2, SND_L32, &ENVELOPE_L32 },
    { &SND_MONO_G2, SND_L32, &ENVELOPE_L32 },
    { &SND_MONO_E2, SND_L32, &ENVELOPE_L32 },
    { &SND_MONO_Db2, SND_L32, &ENVELOPE_L32 },
    { &SND_MONO_E2, SND_L32, &ENVELOPE_L32 },
    { &SND_MONO_H1, SND_L32, &ENVELOPE_L32 },
    { &SND_MONO_E2, SND_L32, &ENVELOPE_L32 },
    { &SND_MONO_Db2, SND_L32, &ENVELOPE_L32 },
    { &SND_MONO_E2, SND_L32, &ENVELOPE_L32 },
    { &SND_MONO_H1, SND_L32, &ENVELOPE_L32 },
    { &SND_MONO_E2, SND_L32, &ENVELOPE_L32 },
    { &SND_MONO_Db2, SND_L32, &ENVELOPE_L32 },

    { &SND_MONO_E2, SND_L8 + SND_L16, &ENVELOPE_L8 },
    { &SND_MONO_H1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_Db2, SND_L16, &ENVELOPE_L16 },

    { &SND_MONO_E2, SND_L8 + SND_L16, &ENVELOPE_L8 },
    { &SND_MONO_H1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_NA, SND_L16, &ENVELOPE_NA },

    { &SND_MONO_NA, SND_L16, &ENVELOPE_NA },
    { &SND_MONO_Db2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_NA, SND_L16, &ENVELOPE_NA },
    { &SND_MONO_NA, SND_L16, &ENVELOPE_NA },
    { &SND_MONO_Db2, SND_L16, &ENVELOPE_L16 },

    { &SND_MONO_E2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_Db2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_H1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_D2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_C2, SND_L16, &ENVELOPE_L16 },

    { &SND_MONO_A1, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_NA, SND_L16, &ENVELOPE_NA },
    { &SND_MONO_C1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_A1, SND_L16, &ENVELOPE_L16 },

    { &SND_MONO_H1, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_NA, SND_L16, &ENVELOPE_NA },
    { &SND_MONO_E1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_Gb1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_H1, SND_L16, &ENVELOPE_L16 },

    { &SND_MONO_C2, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_NA, SND_L16, &ENVELOPE_NA },
    { &SND_MONO_E1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_Db2, SND_L16, &ENVELOPE_L16 },

    { &SND_MONO_E2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_Db2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_H1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_D2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_C2, SND_L16, &ENVELOPE_L16 },

    { &SND_MONO_A1, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_NA, SND_L16, &ENVELOPE_NA },
    { &SND_MONO_C1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_A1, SND_L16, &ENVELOPE_L16 },

    { &SND_MONO_H1, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_NA, SND_L16, &ENVELOPE_NA },
    { &SND_MONO_E1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_C2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_H1, SND_L16, &ENVELOPE_L16 },

    { &SND_MONO_A1, SND_L8 + SND_L16, &ENVELOPE_L8 },
    { &SND_MONO_H1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_C2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_D2, SND_L16, &ENVELOPE_L16 },

    { &SND_MONO_E2, SND_L8 + SND_L16, &ENVELOPE_L8 },
    { &SND_MONO_G1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_F2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E2, SND_L16, &ENVELOPE_L16 },

    { &SND_MONO_D2, SND_L8 + SND_L16, &ENVELOPE_L8 },
    { &SND_MONO_F1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_D2, SND_L16, &ENVELOPE_L16 },

    { &SND_MONO_C2, SND_L8 + SND_L16, &ENVELOPE_L8 },
    { &SND_MONO_E1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_D2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_C2, SND_L16, &ENVELOPE_L16 },

    { &SND_MONO_H1, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_NA, SND_L16, &ENVELOPE_NA },
    { &SND_MONO_E1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_NA, SND_L16, &ENVELOPE_NA },

    { &SND_MONO_NA, SND_L16, &ENVELOPE_NA },
    { &SND_MONO_E2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E3, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_NA, SND_L16, &ENVELOPE_NA },
    { &SND_MONO_NA, SND_L16, &ENVELOPE_NA },
    { &SND_MONO_Db2, SND_L16, &ENVELOPE_L16 },

    { &SND_MONO_E2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_NA, SND_L16, &ENVELOPE_NA },
    { &SND_MONO_NA, SND_L16, &ENVELOPE_NA },
    { &SND_MONO_Db2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_Db2, SND_L16, &ENVELOPE_L16 },

    { &SND_MONO_E2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_Db2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_H1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_D2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_C2, SND_L16, &ENVELOPE_L16 },

    { &SND_MONO_A1, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_NA, SND_L16, &ENVELOPE_NA },
    { &SND_MONO_C1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_A1, SND_L16, &ENVELOPE_L16 },

    { &SND_MONO_H1, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_NA, SND_L16, &ENVELOPE_NA },
    { &SND_MONO_E1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_Gb1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_H1, SND_L16, &ENVELOPE_L16 },

    { &SND_MONO_C2, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_NA, SND_L16, &ENVELOPE_NA },
    { &SND_MONO_E1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_Db2, SND_L16, &ENVELOPE_L16 },

    { &SND_MONO_E2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_Db2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_H1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_D2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_C2, SND_L16, &ENVELOPE_L16 },

    { &SND_MONO_A1, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_NA, SND_L16, &ENVELOPE_NA },
    { &SND_MONO_C1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_A1, SND_L16, &ENVELOPE_L16 },

    { &SND_MONO_H1, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_NA, SND_L16, &ENVELOPE_NA },
    { &SND_MONO_E1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_C2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_H1, SND_L16, &ENVELOPE_L16 },

    { &SND_MONO_A1, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_NA, SND_L8, &ENVELOPE_NA },
    { &SND_MONO_NA, SND_L8, &ENVELOPE_NA },

    { &fe_0C_C0, SND_L4 + SND_L8, &ENVELOPE_L4 },

    { &fe_0C_C1, SND_L4, &ENVELOPE_L4 },
    { &fe_0C_C2, SND_L16, &ENVELOPE_L16 },
    { &fe_0C_C3, SND_L16, &ENVELOPE_L16 },

    { &fe_0C_C4, SND_L4, &ENVELOPE_L4 },
    { &fe_0C_C4, SND_L8, &ENVELOPE_L8 },

    { &fe_0C_C5, SND_L4 + SND_L8, &ENVELOPE_L4 },

    { &fe_0C_C6, SND_L4, &ENVELOPE_L4 },
    { &fe_0C_C7, SND_L16, &ENVELOPE_L16 },
    { &fe_0C_C8, SND_L16, &ENVELOPE_L16 },

    { &fe_0C_C9, SND_L4, &ENVELOPE_L4 },
    { &fe_0C_C10, SND_L8, &ENVELOPE_L8 },

    { &fe_0C_C10, SND_L8, &ENVELOPE_L8 },
    { &fe_0C_C7, SND_L8, &ENVELOPE_L8 },
    { &fe_0C_C8, SND_L8, &ENVELOPE_L8 },

    { &fe_0C_C10, SND_L4 + SND_L8, &ENVELOPE_L4 },

    { &fe_0C_C0, SND_L4 + SND_L8, &ENVELOPE_L4 },

    { &fe_0C_C1, SND_L4, &ENVELOPE_L4 },
    { &fe_0C_C2, SND_L16, &ENVELOPE_L16 },
    { &fe_0C_C3, SND_L16, &ENVELOPE_L16 },

    { &fe_0C_C3, SND_L4, &ENVELOPE_L4 },
    { &fe_0C_C3, SND_L8, &ENVELOPE_L8 },

    { &fe_0C_C3, SND_L4 + SND_L8, &ENVELOPE_L4 },

    { &fe_0C_C11, SND_L4, &ENVELOPE_L4 },
    { &fe_0C_C6, SND_L16, &ENVELOPE_L16 },
    { &fe_0C_C12, SND_L16, &ENVELOPE_L16 },

    { &fe_0C_C13, SND_L4, &ENVELOPE_L4 },
    { &fe_0C_C14, SND_L8, &ENVELOPE_L8 },

    { &fe_0C_C15, SND_L4, &ENVELOPE_L4 },
    { &fe_0C_C16, SND_L8, &ENVELOPE_L8 },

    { &fe_0C_C17, SND_L4, &ENVELOPE_L4 },
    { &SND_MONO_NA, SND_L8, &ENVELOPE_NA },

    { &fe_0C_C18, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_NA, SND_L8, &ENVELOPE_NA },
    { &SND_MONO_NA, SND_L8, &ENVELOPE_NA },

    { &SND_MONO_A0, SND_L6C, &ENVELOPE_L6C },
    { &SND_MONO_C1, SND_L6C, &ENVELOPE_L6C },
    { &SND_MONO_E1, SND_L6C, &ENVELOPE_L6C },
    { &SND_MONO_A1, SND_L6C, &ENVELOPE_L6C },
    { &SND_MONO_C2, SND_L6C, &ENVELOPE_L6C },
    { &SND_MONO_E2, SND_L6C, &ENVELOPE_L6C },
    { &SND_MONO_D2, SND_L6C, &ENVELOPE_L6C },
    { &SND_MONO_C2, SND_L6C, &ENVELOPE_L6C },
    { &SND_MONO_H1, SND_L6C, &ENVELOPE_L6C },

    { &SND_MONO_A1, SND_L6C, &ENVELOPE_L6C },
    { &SND_MONO_C2, SND_L6C, &ENVELOPE_L6C },
    { &SND_MONO_E2, SND_L6C, &ENVELOPE_L6C },
    { &SND_MONO_A2, SND_L6C, &ENVELOPE_L6C },
    { &SND_MONO_C3, SND_L6C, &ENVELOPE_L6C },
    { &SND_MONO_E3, SND_L6C, &ENVELOPE_L6C },
    { &SND_MONO_D3, SND_L6C, &ENVELOPE_L6C },
    { &SND_MONO_C3, SND_L6C, &ENVELOPE_L6C },
    { &SND_MONO_H2, SND_L6C, &ENVELOPE_L6C },

    { &SND_MONO_A1, SND_L6C, &ENVELOPE_L6C },
    { &SND_MONO_C2, SND_L6C, &ENVELOPE_L6C },
    { &SND_MONO_E2, SND_L6C, &ENVELOPE_L6C },
    { &SND_MONO_A2, SND_L6C, &ENVELOPE_L6C },
    { &SND_MONO_C3, SND_L6C, &ENVELOPE_L6C },
    { &SND_MONO_E3, SND_L6C, &ENVELOPE_L6C },
    { &SND_MONO_D3, SND_L6C, &ENVELOPE_L6C },
    { &SND_MONO_C3, SND_L6C, &ENVELOPE_L6C },
    { &SND_MONO_H2, SND_L6C, &ENVELOPE_L6C },

    { &SND_MONO_Ab2, SND_L6C, &ENVELOPE_L6C },
    { &SND_MONO_A2, SND_L6C, &ENVELOPE_L6C },
    { &SND_MONO_Gb2, SND_L6C, &ENVELOPE_L6C },
    { &SND_MONO_G2, SND_L6C, &ENVELOPE_L6C },
    { &SND_MONO_Fb2, SND_L6C, &ENVELOPE_L6C },
    { &SND_MONO_F2, SND_L6C, &ENVELOPE_L6C },
    { &SND_MONO_E2, SND_L6C, &ENVELOPE_L6C },
    { &SND_MONO_Db2, SND_L6C, &ENVELOPE_L6C },
    { &SND_MONO_G2, SND_L6C, &ENVELOPE_L6C },

    { &SND_MONO_Cb3, SND_L6C, &ENVELOPE_L6C },
    { &SND_MONO_C3, SND_L6C, &ENVELOPE_L6C },
    { &SND_MONO_H2, SND_L6C, &ENVELOPE_L6C },
    { &SND_MONO_Ab2, SND_L6C, &ENVELOPE_L6C },
    { &SND_MONO_A2, SND_L6C, &ENVELOPE_L6C },
    { &SND_MONO_Gb2, SND_L6C, &ENVELOPE_L6C },
    { &SND_MONO_G2, SND_L6C, &ENVELOPE_L6C },
    { &SND_MONO_Fb2, SND_L6C, &ENVELOPE_L6C },
    { &SND_MONO_F2, SND_L6C, &ENVELOPE_L6C },

    { &SND_MONO_E2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_Db2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_H1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_D2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_C2, SND_L16, &ENVELOPE_L16 },

    { &SND_MONO_A1, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_NA, SND_L16, &ENVELOPE_NA },
    { &SND_MONO_C1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_A1, SND_L16, &ENVELOPE_L16 },

    { &SND_MONO_H1, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_NA, SND_L16, &ENVELOPE_NA },
    { &SND_MONO_E1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_Gb1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_H1, SND_L16, &ENVELOPE_L16 },

    { &SND_MONO_C2, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_NA, SND_L16, &ENVELOPE_NA },
    { &SND_MONO_E1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_Db2, SND_L16, &ENVELOPE_L16 },

    { &SND_MONO_E2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_Db2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_H1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_D2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_C2, SND_L16, &ENVELOPE_L16 },

    { &SND_MONO_A1, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_NA, SND_L16, &ENVELOPE_NA },
    { &SND_MONO_C1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_A1, SND_L16, &ENVELOPE_L16 },

    { &SND_MONO_H1, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_NA, SND_L16, &ENVELOPE_NA },
    { &SND_MONO_E1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_C2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_H1, SND_L16, &ENVELOPE_L16 },

    { &SND_MONO_A1, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_NA, SND_L16, &ENVELOPE_NA },
    { &SND_MONO_H1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_C2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_D2, SND_L16, &ENVELOPE_L16 },

    { &SND_MONO_E2, SND_L8 + SND_L16, &ENVELOPE_L8 },
    { &SND_MONO_G1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_F2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E2, SND_L16, &ENVELOPE_L16 },

    { &SND_MONO_D2, SND_L8 + SND_L16, &ENVELOPE_L8 },
    { &SND_MONO_F1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_D2, SND_L16, &ENVELOPE_L16 },

    { &SND_MONO_C2, SND_L8 + SND_L16, &ENVELOPE_L8 },
    { &SND_MONO_E1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_D1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_C1, SND_L16, &ENVELOPE_L16 },

    { &SND_MONO_H1, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_NA, SND_L16, &ENVELOPE_NA },
    { &SND_MONO_E1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_NA, SND_L16, &ENVELOPE_NA },

    { &SND_MONO_NA, SND_L16, &ENVELOPE_NA },
    { &SND_MONO_E2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E3, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_NA, SND_L16, &ENVELOPE_NA },
    { &SND_MONO_NA, SND_L16, &ENVELOPE_NA },
    { &SND_MONO_Db2, SND_L16, &ENVELOPE_L16 },

    { &SND_MONO_E2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_NA, SND_L16, &ENVELOPE_NA },
    { &SND_MONO_NA, SND_L16, &ENVELOPE_NA },
    { &SND_MONO_Db2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_Db2, SND_L16, &ENVELOPE_L16 },

    { &SND_MONO_E2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_Db2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_H1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_D2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_C2, SND_L16, &ENVELOPE_L16 },

    { &SND_MONO_A1, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_NA, SND_L16, &ENVELOPE_NA },
    { &SND_MONO_C1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_A1, SND_L16, &ENVELOPE_L16 },

    { &SND_MONO_H1, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_NA, SND_L16, &ENVELOPE_NA },
    { &SND_MONO_E1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_Gb1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_H1, SND_L16, &ENVELOPE_L16 },

    { &SND_MONO_C2, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_NA, SND_L16, &ENVELOPE_NA },
    { &SND_MONO_E1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_Db2, SND_L16, &ENVELOPE_L16 },

    { &SND_MONO_E2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_Db2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_H1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_D2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_C2, SND_L16, &ENVELOPE_L16 },

    { &SND_MONO_A1, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_NA, SND_L16, &ENVELOPE_NA },
    { &SND_MONO_C1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_A1, SND_L16, &ENVELOPE_L16 },

    { &SND_MONO_H1, SND_L8, &ENVELOPE_L8 },
    { &SND_MONO_NA, SND_L16, &ENVELOPE_NA },
    { &SND_MONO_E1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_C2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_H1, SND_L16, &ENVELOPE_L16 },

    { &fe_0C_C10, SND_L4, &ENVELOPE_L4 },
};

static const SND_Tone fe_melody1A[] = {
    { NULL, SND_L8, NULL },
    { NULL, MUSIC_FORELISE_BAR, NULL },

    { &SND_MONO_A0, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_A1, SND_L16, &ENVELOPE_L16 },
    { NULL, SND_L16, NULL },
    { NULL, SND_L8, NULL },

    { &SND_MONO_E0, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_Gb1, SND_L16, &ENVELOPE_L16 },
    { NULL, SND_L16, NULL },
    { NULL, SND_L8, NULL },

    { &SND_MONO_A0, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_A1, SND_L16, &ENVELOPE_L16 },
    { NULL, SND_L16, NULL },
    { NULL, SND_L8, NULL },

    { NULL, MUSIC_FORELISE_BAR, NULL },

    { &SND_MONO_A0, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_A1, SND_L16, &ENVELOPE_L16 },
    { NULL, SND_L16, NULL },
    { NULL, SND_L8, NULL },

    { &SND_MONO_A0, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_A1, SND_L16, &ENVELOPE_L16 },
    { NULL, SND_L16, NULL },
    { NULL, SND_L8, NULL },
};

static const SND_Tone fe_melody1A0[] = {
    { &SND_MONO_A0, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_A1, SND_L16, &ENVELOPE_L16 },
    { NULL, SND_L16, NULL },
};

static const SND_Tone fe_melody1A1[] = {
    { &SND_MONO_A0, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_A1, SND_L16, &ENVELOPE_L16 },
    { NULL, SND_L16, NULL },
    { NULL, SND_L8, NULL },
};

static const SND_Tone fe_melody1B[] = {
    { &SND_MONO_C1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_G1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_C2, SND_L16, &ENVELOPE_L16 },
    { NULL, SND_L16, NULL },
    { NULL, SND_L8, NULL },

    { &SND_MONO_G0, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_G1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_H1, SND_L16, &ENVELOPE_L16 },
    { NULL, SND_L16, NULL },
    { NULL, SND_L8, NULL },

    { &SND_MONO_A0, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_A1, SND_L16, &ENVELOPE_L16 },
    { NULL, SND_L16, NULL },
    { NULL, SND_L8, NULL },

    { &SND_MONO_E0, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E2, SND_L16, &ENVELOPE_L16 },
    { NULL, SND_L8, NULL },
    { &SND_MONO_E1, SND_L16, &ENVELOPE_L16 },

    { &SND_MONO_E2, SND_L16, &ENVELOPE_L16 },
    { NULL, SND_L8, NULL },
    { &SND_MONO_Db2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E2, SND_L16, &ENVELOPE_L16 },
    { NULL, SND_L16, NULL },

    { NULL, SND_L16, NULL },
    { &SND_MONO_Db2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E2, SND_L16, &ENVELOPE_L16 },
    { NULL, SND_L16, NULL },
    { NULL, SND_L8, NULL },

    { NULL, MUSIC_FORELISE_BAR, NULL },

    { &SND_MONO_A0, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_A1, SND_L16, &ENVELOPE_L16 },
    { NULL, SND_L16, NULL },
    { NULL, SND_L8, NULL },

    { &SND_MONO_E0, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_Gb1, SND_L16, &ENVELOPE_L16 },
    { NULL, SND_L16, NULL },
    { NULL, SND_L8, NULL },

    { &SND_MONO_A0, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_A1, SND_L16, &ENVELOPE_L16 },
    { NULL, SND_L16, NULL },
    { NULL, SND_L8, NULL },

    { NULL, MUSIC_FORELISE_BAR, NULL },

    { &SND_MONO_A0, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_A1, SND_L16, &ENVELOPE_L16 },
    { NULL, SND_L16, NULL },
    { NULL, SND_L8, NULL },

    { &SND_MONO_E0, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_Gb1, SND_L16, &ENVELOPE_L16 },
    { NULL, SND_L16, NULL },
    { NULL, SND_L8, NULL },
};

static const _UBYTE fe_1B0_CD0[] = { SND_C2, SND_Ab1 };
static const _UBYTE fe_1B0_CD1[] = { SND_C2, SND_A1 };
static const _UBYTE fe_1B0_CD2[] = { SND_C2, SND_Ab1, SND_G1 };
static const SND_Chord fe_1B0_C0 = {
    fe_1B0_CD0, UTIL_ARRAY_SIZE_OF(fe_1B0_CD0)
};
static const SND_Chord fe_1B0_C1 = {
    fe_1B0_CD1, UTIL_ARRAY_SIZE_OF(fe_1B0_CD1)
};
static const SND_Chord fe_1B0_C2 = {
    fe_1B0_CD2, UTIL_ARRAY_SIZE_OF(fe_1B0_CD2)
};

static const SND_Tone fe_melody1B0[] = {
    { &SND_MONO_A0, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_A1, SND_L16, &ENVELOPE_L16 },
    { &fe_1B0_C0, SND_L16, &ENVELOPE_L32 },
    { &fe_1B0_C1, SND_L16, &ENVELOPE_L32 },
    { &fe_1B0_C2, SND_L16, &ENVELOPE_L32 },
};

static const _UBYTE fe_1C_CD0[] = { SND_Ab1, SND_G1, SND_F1 };
static const _UBYTE fe_1C_CD1[] = { SND_H1, SND_G1, SND_F1 };
static const _UBYTE fe_1C_CD2[] = { SND_D2, SND_D1 };
static const _UBYTE fe_1C_CD3[] = { SND_E2, SND_C2 };
static const _UBYTE fe_1C_CD4[] = { SND_G2, SND_F2 };
static const _UBYTE fe_1C_CD5[] = { SND_G2, SND_E2 };
static const _UBYTE fe_1C_CD6[] = { SND_G2, SND_F2, SND_D2 };
static const _UBYTE fe_1C_CD7[] = { SND_G2, SND_E2, SND_C2 };
static const _UBYTE fe_1C_CD8[] = { SND_A1, SND_F1 };
static const _UBYTE fe_1C_CD9[] = { SND_H1, SND_G1 };
static const _UBYTE fe_1C_CD10[] = { SND_A1, SND_Gb1 };
static const _UBYTE fe_1C_CD11[] = { SND_A0, SND_D0 };
static const _UBYTE fe_1C_CD12[] = { SND_A0, SND_Db0 };
static const _UBYTE fe_1C_CD13[] = { SND_A0, SND_E0 };
static const _UBYTE fe_1C_CD14[] = { SND_Gb0, SND_E0 };
static const _UBYTE fe_1C_CD15[] = { SND_A1, SND_A0 };
static const _UBYTE fe_1C_CD16[] = { SND_Gb1, SND_E1 };
static const _UBYTE fe_1C_CD17[] = { SND_E2, SND_C2, SND_A1 };
static const SND_Chord fe_1C_C0 = {
    fe_1C_CD0, UTIL_ARRAY_SIZE_OF(fe_1C_CD0)
};
static const SND_Chord fe_1C_C1 = {
    fe_1C_CD1, UTIL_ARRAY_SIZE_OF(fe_1C_CD1)
};
static const SND_Chord fe_1C_C2 = {
    fe_1C_CD2, UTIL_ARRAY_SIZE_OF(fe_1C_CD2)
};
static const SND_Chord fe_1C_C3 = {
    fe_1C_CD3, UTIL_ARRAY_SIZE_OF(fe_1C_CD3)
};
static const SND_Chord fe_1C_C4 = {
    fe_1C_CD4, UTIL_ARRAY_SIZE_OF(fe_1C_CD4)
};
static const SND_Chord fe_1C_C5 = {
    fe_1C_CD5, UTIL_ARRAY_SIZE_OF(fe_1C_CD5)
};
static const SND_Chord fe_1C_C6 = {
    fe_1C_CD6, UTIL_ARRAY_SIZE_OF(fe_1C_CD6)
};
static const SND_Chord fe_1C_C7 = {
    fe_1C_CD7, UTIL_ARRAY_SIZE_OF(fe_1C_CD7)
};
static const SND_Chord fe_1C_C8 = {
    fe_1C_CD8, UTIL_ARRAY_SIZE_OF(fe_1C_CD8)
};
static const SND_Chord fe_1C_C9 = {
    fe_1C_CD9, UTIL_ARRAY_SIZE_OF(fe_1C_CD9)
};
static const SND_Chord fe_1C_C10 = {
    fe_1C_CD10, UTIL_ARRAY_SIZE_OF(fe_1C_CD10)
};
static const SND_Chord fe_1C_C11 = {
    fe_1C_CD11, UTIL_ARRAY_SIZE_OF(fe_1C_CD11)
};
static const SND_Chord fe_1C_C12 = {
    fe_1C_CD12, UTIL_ARRAY_SIZE_OF(fe_1C_CD12)
};
static const SND_Chord fe_1C_C13 = {
    fe_1C_CD13, UTIL_ARRAY_SIZE_OF(fe_1C_CD13)
};
static const SND_Chord fe_1C_C14 = {
    fe_1C_CD14, UTIL_ARRAY_SIZE_OF(fe_1C_CD14)
};
static const SND_Chord fe_1C_C15 = {
    fe_1C_CD15, UTIL_ARRAY_SIZE_OF(fe_1C_CD15)
};
static const SND_Chord fe_1C_C16 = {
    fe_1C_CD16, UTIL_ARRAY_SIZE_OF(fe_1C_CD16)
};
static const SND_Chord fe_1C_C17 = {
    fe_1C_CD17, UTIL_ARRAY_SIZE_OF(fe_1C_CD17)
};


static const SND_Tone fe_melody1C[] = {
    { &SND_MONO_F1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_A1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_C2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_A1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_C2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_A1, SND_L16, &ENVELOPE_L16 },

    { &SND_MONO_F1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_Ab1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_C2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_Ab1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_C2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_Ab1, SND_L16, &ENVELOPE_L16 },

    { &SND_MONO_F1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E2, SND_L16, &ENVELOPE_L16 },
    { &fe_1C_C0, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E2, SND_L16, &ENVELOPE_L16 },
    { &fe_1C_C1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E2, SND_L16, &ENVELOPE_L16 },

    { &SND_MONO_F1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_A1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_C2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_A1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_C2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_A1, SND_L16, &ENVELOPE_L16 },

    { &SND_MONO_F1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_A1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_C2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_A1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_C2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_A1, SND_L16, &ENVELOPE_L16 },

    { &SND_MONO_E1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_A1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_C2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_A1, SND_L16, &ENVELOPE_L16 },
    { &fe_1C_C2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_F1, SND_L16, &ENVELOPE_L16 },

    { &SND_MONO_G1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_G1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_G1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_F2, SND_L16, &ENVELOPE_L16 },

    { &fe_1C_C3, SND_L8, &ENVELOPE_L8 },
    { NULL, SND_L16, NULL },
    { &fe_1C_C4, SND_L16, &ENVELOPE_L8 },
    { &fe_1C_C5, SND_L16, &ENVELOPE_L8 },
    { &fe_1C_C6, SND_L16, &ENVELOPE_L8 },

    { &fe_1C_C7, SND_L8, &ENVELOPE_L8 },
    { &fe_1C_C8, SND_L8, &ENVELOPE_L8 },
    { &fe_1C_C9, SND_L8, &ENVELOPE_L8 },

    { &SND_MONO_C2, SND_L8, &ENVELOPE_L8 },
    { NULL, SND_L16, NULL },
    { &fe_1C_C4, SND_L16, &ENVELOPE_L8 },
    { &fe_1C_C5, SND_L16, &ENVELOPE_L8 },
    { &fe_1C_C6, SND_L16, &ENVELOPE_L8 },

    { &fe_1C_C7, SND_L8, &ENVELOPE_L8 },
    { &fe_1C_C8, SND_L8, &ENVELOPE_L8 },
    { &fe_1C_C9, SND_L8, &ENVELOPE_L8 },

    { &fe_1C_C10, SND_L8, &ENVELOPE_L8 },
    { NULL, SND_L4, NULL },

    { NULL, MUSIC_FORELISE_BAR, NULL },

    { NULL, SND_L4, NULL },
    { NULL, SND_L16, NULL },
    { &SND_MONO_Db2, SND_L16, &ENVELOPE_L16 },

    { &SND_MONO_E2, SND_L16, &ENVELOPE_L16 },
    { NULL, SND_L8, NULL },
    { &SND_MONO_Db2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E2, SND_L16, &ENVELOPE_L16 },
    { NULL, SND_L16, NULL },

    { NULL, MUSIC_FORELISE_BAR, NULL },

    { &SND_MONO_A0, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_A1, SND_L16, &ENVELOPE_L16 },
    { NULL, SND_L16, NULL },
    { NULL, SND_L8, NULL },

    { &SND_MONO_E0, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_Gb1, SND_L16, &ENVELOPE_L16 },
    { NULL, SND_L16, NULL },
    { NULL, SND_L8, NULL },

    { &SND_MONO_A0, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_A1, SND_L16, &ENVELOPE_L16 },
    { NULL, SND_L16, NULL },
    { NULL, SND_L8, NULL },

    { NULL, MUSIC_FORELISE_BAR, NULL },

    { &SND_MONO_A0, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_A1, SND_L16, &ENVELOPE_L16 },
    { NULL, SND_L16, NULL },
    { NULL, SND_L8, NULL },

    { &SND_MONO_A0, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_A1, SND_L16, &ENVELOPE_L16 },
    { NULL, SND_L16, NULL },
    { NULL, SND_L8, NULL },

    { &SND_MONO_A0, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_A1, SND_L16, &ENVELOPE_L16 },
    { NULL, SND_L16, NULL },
    { NULL, SND_L8, NULL },

    { &SND_MONO_C1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_G1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_C2, SND_L16, &ENVELOPE_L16 },
    { NULL, SND_L16, NULL },
    { NULL, SND_L8, NULL },

    { &SND_MONO_G0, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_G1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_H1, SND_L16, &ENVELOPE_L16 },
    { NULL, SND_L16, NULL },
    { NULL, SND_L8, NULL },

    { &SND_MONO_A0, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_A1, SND_L16, &ENVELOPE_L16 },
    { NULL, SND_L16, NULL },
    { NULL, SND_L8, NULL },

    { &SND_MONO_E0, SND_L16, &ENVELOPE_L32 },
    { &SND_MONO_E1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E2, SND_L16, &ENVELOPE_L16 },
    { NULL, SND_L8, NULL },
    { &SND_MONO_E1, SND_L16, &ENVELOPE_L16 },

    { &SND_MONO_E2, SND_L16, &ENVELOPE_L16 },
    { NULL, SND_L8, NULL },
    { &SND_MONO_Db2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E2, SND_L16, &ENVELOPE_L16 },
    { NULL, SND_L16, NULL },

    { NULL, SND_L16, NULL },
    { &SND_MONO_Db2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E2, SND_L16, &ENVELOPE_L16 },
    { NULL, SND_L16, NULL },
    { NULL, SND_L8, NULL },

    { NULL, MUSIC_FORELISE_BAR, NULL },

    { &SND_MONO_A0, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_A1, SND_L16, &ENVELOPE_L16 },
    { NULL, SND_L16, NULL },
    { NULL, SND_L8, NULL },

    { &SND_MONO_E0, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_Gb1, SND_L16, &ENVELOPE_L16 },
    { NULL, SND_L16, NULL },
    { NULL, SND_L8, NULL },

    { &SND_MONO_A0, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_A1, SND_L16, &ENVELOPE_L16 },
    { NULL, SND_L16, NULL },
    { NULL, SND_L8, NULL },

    { NULL, MUSIC_FORELISE_BAR, NULL },

    { &SND_MONO_A0, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_A1, SND_L16, &ENVELOPE_L16 },
    { NULL, SND_L16, NULL },
    { NULL, SND_L8, NULL },

    { &SND_MONO_E0, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_Gb1, SND_L16, &ENVELOPE_L16 },
    { NULL, SND_L16, NULL },
    { NULL, SND_L8, NULL },

    { &SND_MONO_A0, SND_L16, &ENVELOPE_L32 },
    { &SND_MONO_A0, SND_L16, &ENVELOPE_L32 },
    { &SND_MONO_A0, SND_L16, &ENVELOPE_L32 },
    { &SND_MONO_A0, SND_L16, &ENVELOPE_L32 },
    { &SND_MONO_A0, SND_L16, &ENVELOPE_L32 },
    { &SND_MONO_A0, SND_L16, &ENVELOPE_L32 },

    { &SND_MONO_A0, SND_L16, &ENVELOPE_L32 },
    { &SND_MONO_A0, SND_L16, &ENVELOPE_L32 },
    { &SND_MONO_A0, SND_L16, &ENVELOPE_L32 },
    { &SND_MONO_A0, SND_L16, &ENVELOPE_L32 },
    { &SND_MONO_A0, SND_L16, &ENVELOPE_L32 },
    { &SND_MONO_A0, SND_L16, &ENVELOPE_L32 },

    { &SND_MONO_A0, SND_L16, &ENVELOPE_L32 },
    { &SND_MONO_A0, SND_L16, &ENVELOPE_L32 },
    { &SND_MONO_A0, SND_L16, &ENVELOPE_L32 },
    { &SND_MONO_A0, SND_L16, &ENVELOPE_L32 },
    { &SND_MONO_A0, SND_L16, &ENVELOPE_L32 },
    { &SND_MONO_A0, SND_L16, &ENVELOPE_L32 },

    { &SND_MONO_A0, SND_L16, &ENVELOPE_L32 },
    { &SND_MONO_A0, SND_L16, &ENVELOPE_L32 },
    { &SND_MONO_A0, SND_L16, &ENVELOPE_L32 },
    { &SND_MONO_A0, SND_L16, &ENVELOPE_L32 },
    { &SND_MONO_A0, SND_L16, &ENVELOPE_L32 },
    { &SND_MONO_A0, SND_L16, &ENVELOPE_L32 },

    { &SND_MONO_A0, SND_L16, &ENVELOPE_L32 },
    { &SND_MONO_A0, SND_L16, &ENVELOPE_L32 },
    { &SND_MONO_A0, SND_L16, &ENVELOPE_L32 },
    { &SND_MONO_A0, SND_L16, &ENVELOPE_L32 },
    { &SND_MONO_A0, SND_L16, &ENVELOPE_L32 },
    { &SND_MONO_A0, SND_L16, &ENVELOPE_L32 },

    { &fe_1C_C11, SND_L16, &ENVELOPE_L32 },
    { &fe_1C_C11, SND_L16, &ENVELOPE_L32 },
    { &fe_1C_C11, SND_L16, &ENVELOPE_L32 },
    { &fe_1C_C11, SND_L16, &ENVELOPE_L32 },
    { &fe_1C_C11, SND_L16, &ENVELOPE_L32 },
    { &fe_1C_C11, SND_L16, &ENVELOPE_L32 },

    { &fe_1C_C12, SND_L16, &ENVELOPE_L32 },
    { &fe_1C_C12, SND_L16, &ENVELOPE_L32 },
    { &fe_1C_C12, SND_L16, &ENVELOPE_L32 },
    { &fe_1C_C12, SND_L16, &ENVELOPE_L32 },
    { &fe_1C_C12, SND_L16, &ENVELOPE_L32 },
    { &fe_1C_C12, SND_L16, &ENVELOPE_L32 },

    { &fe_1C_C13, SND_L16, &ENVELOPE_L32 },
    { &fe_1C_C13, SND_L16, &ENVELOPE_L32 },
    { &fe_1C_C13, SND_L16, &ENVELOPE_L32 },
    { &fe_1C_C13, SND_L16, &ENVELOPE_L32 },
    { &fe_1C_C14, SND_L16, &ENVELOPE_L32 },
    { &fe_1C_C14, SND_L16, &ENVELOPE_L32 },

    { &fe_1C_C15, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_A0, SND_L16, &ENVELOPE_L32 },
    { &SND_MONO_A0, SND_L16, &ENVELOPE_L32 },
    { &SND_MONO_A0, SND_L16, &ENVELOPE_L32 },
    { &SND_MONO_A0, SND_L16, &ENVELOPE_L32 },
    { &SND_MONO_A0, SND_L16, &ENVELOPE_L32 },

    { &SND_MONO_A0, SND_L16, &ENVELOPE_L32 },
    { &SND_MONO_A0, SND_L16, &ENVELOPE_L32 },
    { &SND_MONO_A0, SND_L16, &ENVELOPE_L32 },
    { &SND_MONO_A0, SND_L16, &ENVELOPE_L32 },
    { &SND_MONO_A0, SND_L16, &ENVELOPE_L32 },
    { &SND_MONO_A0, SND_L16, &ENVELOPE_L32 },

    { &SND_MONO_A0, SND_L16, &ENVELOPE_L32 },
    { &SND_MONO_A0, SND_L16, &ENVELOPE_L32 },
    { &SND_MONO_A0, SND_L16, &ENVELOPE_L32 },
    { &SND_MONO_A0, SND_L16, &ENVELOPE_L32 },
    { &SND_MONO_A0, SND_L16, &ENVELOPE_L32 },
    { &SND_MONO_A0, SND_L16, &ENVELOPE_L32 },

    { &SND_MONO_A0, SND_L16, &ENVELOPE_L32 },
    { &SND_MONO_A0, SND_L16, &ENVELOPE_L32 },
    { &SND_MONO_A0, SND_L16, &ENVELOPE_L32 },
    { &SND_MONO_A0, SND_L16, &ENVELOPE_L32 },
    { &SND_MONO_A0, SND_L16, &ENVELOPE_L32 },
    { &SND_MONO_A0, SND_L16, &ENVELOPE_L32 },

    { &SND_MONO_Ab0, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_Ab0, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_Ab0, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_Ab0, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_Ab0, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_Ab0, SND_L16, &ENVELOPE_L16 },

    { &SND_MONO_Ab0, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_Ab0, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_Ab0, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_Ab0, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_Ab0, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_Ab0, SND_L16, &ENVELOPE_L16 },

    { &SND_MONO_Ab0, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_Ab0, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_Ab0, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_Ab0, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_Ab0, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_Ab0, SND_L16, &ENVELOPE_L16 },

    { &SND_MONO_H0, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_H0, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_H0, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_H0, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_H0, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_H0, SND_L16, &ENVELOPE_L16 },

    { &SND_MONO_C1, SND_L4, &ENVELOPE_L4 },
    { NULL, SND_L8, NULL },

    { &fe_1C_C16, SND_L8, &ENVELOPE_L16 },
    { NULL, SND_L4, NULL },

    { &SND_MONO_A0, SND_L8, &ENVELOPE_L8 },
    { NULL, SND_L8, NULL },
    { &fe_1C_C17, SND_L8, &ENVELOPE_L16 },

    { &fe_1C_C17, SND_L8, &ENVELOPE_L16 },
    { NULL, SND_L8, NULL },
    { &fe_1C_C17, SND_L8, &ENVELOPE_L16 },

    { &fe_1C_C17, SND_L8, &ENVELOPE_L16 },
    { NULL, SND_L8, NULL },
    { &fe_1C_C17, SND_L8, &ENVELOPE_L16 },

    { &fe_1C_C17, SND_L8, &ENVELOPE_L16 },
    { NULL, SND_L4, NULL },

    { NULL, MUSIC_FORELISE_BAR, NULL },
    { NULL, MUSIC_FORELISE_BAR, NULL },

    { &SND_MONO_A0, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_A1, SND_L16, &ENVELOPE_L16 },
    { NULL, SND_L16, NULL },
    { NULL, SND_L8, NULL },

    { &SND_MONO_E0, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_Gb1, SND_L16, &ENVELOPE_L16 },
    { NULL, SND_L16, NULL },
    { NULL, SND_L8, NULL },

    { &SND_MONO_A0, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_A1, SND_L16, &ENVELOPE_L16 },
    { NULL, SND_L16, NULL },
    { NULL, SND_L8, NULL },

    { NULL, MUSIC_FORELISE_BAR, NULL },

    { &SND_MONO_A0, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_A1, SND_L16, &ENVELOPE_L16 },
    { NULL, SND_L16, NULL },
    { NULL, SND_L8, NULL },

    { &SND_MONO_E0, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_Gb1, SND_L16, &ENVELOPE_L16 },
    { NULL, SND_L16, NULL },
    { NULL, SND_L8, NULL },

    { &SND_MONO_A0, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_A1, SND_L16, &ENVELOPE_L16 },
    { NULL, SND_L16, NULL },
    { NULL, SND_L8, NULL },

    { &SND_MONO_C1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_G1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_C2, SND_L16, &ENVELOPE_L16 },
    { NULL, SND_L16, NULL },
    { NULL, SND_L8, NULL },

    { &SND_MONO_G0, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_G1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_H1, SND_L16, &ENVELOPE_L16 },
    { NULL, SND_L16, NULL },
    { NULL, SND_L8, NULL },

    { &SND_MONO_A0, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_A1, SND_L16, &ENVELOPE_L16 },
    { NULL, SND_L16, NULL },
    { NULL, SND_L8, NULL },

    { &SND_MONO_E0, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E2, SND_L16, &ENVELOPE_L16 },
    { NULL, SND_L8, NULL },
    { &SND_MONO_E1, SND_L16, &ENVELOPE_L16 },

    { &SND_MONO_E2, SND_L16, &ENVELOPE_L16 },
    { NULL, SND_L8, NULL },
    { &SND_MONO_Db2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E2, SND_L16, &ENVELOPE_L16 },
    { NULL, SND_L16, NULL },

    { NULL, SND_L16, NULL },
    { &SND_MONO_Db2, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E2, SND_L16, &ENVELOPE_L16 },
    { NULL, SND_L16, NULL },
    { NULL, SND_L8, NULL },

    { NULL, MUSIC_FORELISE_BAR, NULL },

    { &SND_MONO_A0, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_A1, SND_L16, &ENVELOPE_L16 },
    { NULL, SND_L16, NULL },
    { NULL, SND_L8, NULL },

    { &SND_MONO_E0, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_Gb1, SND_L16, &ENVELOPE_L16 },
    { NULL, SND_L16, NULL },
    { NULL, SND_L8, NULL },

    { &SND_MONO_A0, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_A1, SND_L16, &ENVELOPE_L16 },
    { NULL, SND_L16, NULL },
    { NULL, SND_L8, NULL },

    { NULL, MUSIC_FORELISE_BAR, NULL },

    { &SND_MONO_A0, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_A1, SND_L16, &ENVELOPE_L16 },
    { NULL, SND_L16, NULL },
    { NULL, SND_L8, NULL },

    { &SND_MONO_E0, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_E1, SND_L16, &ENVELOPE_L16 },
    { &SND_MONO_Gb1, SND_L16, &ENVELOPE_L16 },
    { NULL, SND_L16, NULL },
    { NULL, SND_L8, NULL },

    { &fe_1C_C15, SND_L4, &ENVELOPE_L4 },
};

/**
 * For Elise part
 */
static const SND_Melody fe_part0[] = {
    {
        fe_melody0A,
        UTIL_ARRAY_SIZE_OF(fe_melody0A)
    },
    {
        fe_melody0A0,
        UTIL_ARRAY_SIZE_OF(fe_melody0A0)
    },
    {
        fe_melody0A,
        UTIL_ARRAY_SIZE_OF(fe_melody0A)
    },
    {
        fe_melody0A1,
        UTIL_ARRAY_SIZE_OF(fe_melody0A1)
    },
    {
        fe_melody0B,
        UTIL_ARRAY_SIZE_OF(fe_melody0B)
    },
    {
        fe_melody0A1,
        UTIL_ARRAY_SIZE_OF(fe_melody0A1)
    },
    {
        fe_melody0B,
        UTIL_ARRAY_SIZE_OF(fe_melody0B)
    },
    {
        fe_melody0B0,
        UTIL_ARRAY_SIZE_OF(fe_melody0B0)
    },
    {
        fe_melody0C,
        UTIL_ARRAY_SIZE_OF(fe_melody0C)
    }
};

static const SND_Melody fe_part1[] = {
    {
        fe_melody1A,
        UTIL_ARRAY_SIZE_OF(fe_melody1A)
    },
    {
        fe_melody1A0,
        UTIL_ARRAY_SIZE_OF(fe_melody1A0)
    },
    {
        fe_melody1A,
        UTIL_ARRAY_SIZE_OF(fe_melody1A)
    },
    {
        fe_melody1A1,
        UTIL_ARRAY_SIZE_OF(fe_melody1A1)
    },
    {
        fe_melody1B,
        UTIL_ARRAY_SIZE_OF(fe_melody1B)
    },
    {
        fe_melody1A1,
        UTIL_ARRAY_SIZE_OF(fe_melody1A1)
    },
    {
        fe_melody1B,
        UTIL_ARRAY_SIZE_OF(fe_melody1B)
    },
    {
        fe_melody1B0,
        UTIL_ARRAY_SIZE_OF(fe_melody1B0)
    },
    {
        fe_melody1C,
        UTIL_ARRAY_SIZE_OF(fe_melody1C)
    }
};

static const SND_Part fe_score[] = {
    {
        fe_part0, UTIL_ARRAY_SIZE_OF(fe_part0)
    },
    {
        fe_part1, UTIL_ARRAY_SIZE_OF(fe_part1)
    },
};

const SND_Music MUSIC_ForElise = {
    fe_score, UTIL_ARRAY_SIZE_OF(fe_score)
};
