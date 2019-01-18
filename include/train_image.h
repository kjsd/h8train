/**
 * @file train_image.h
 *
 * @brief �d�ԉ摜�f�[�^
 *
 * �d�Ԃ̃L�����N�^�f�[�^�ƃA�j���[�V�����p�^�[������`����Ă���B
 * �L�����N�^�̃f�[�^�`���� lcd.h �����B
 *
 * @htmlonly
 * @version $Id: train_image.h 46 2009-01-16 03:52:26Z Administrator $
 *
 * @author MINOURA Kenji / kenji_minoura@dnet.totec.co.jp
 *
 * Copyright (c) 2008 Totec Amenity, Ltd All rights reserved.
 * @endhtmlonly
 *
 ***********************************************************************/
#ifndef TRAINIMG_H
#define TRAINIMG_H

#ifdef __cplusplus
extern "C" {
#endif

/** �� */
#define SP 0x20
/** �A�h���X1 */
#define T1 0x00
/** �A�h���X2 */
#define T2 0x01
/** �A�h���X3 */
#define T3 0x02
/** �A�h���X4 */
#define T4 0x03
/** �A�h���X5 */
#define T5 0x04
/** �A�h���X6 */
#define T6 0x05
/** �A�h���X7 */
#define T7 0x06
/** �A�h���X8 */
#define T8 0x07
/** �A�j���[�V�����p�^�[���̍ő�l */
#define TRAINIMG_MAX_ANIM 31

/*
    01234012340123401234 ~ 012340123401234 ~ 01234
   0   **         ****** ~ *****           ~     
   1   ***********       ~ *  **    ****** ~ *   
   2  * *   * *  ******* ~ ****   ***      ~ ****
   3 *        *  *  *    ~ *  *   *        ~    *
   4 * ********** ****** ~ *************** ~    **
   5****   **   **   **  ~ *   ****** **   ~  ****
   6 * ****  ***  * *  * ~ * **      *  *  ~ *  * 
   7  *    **   **   **  ~  *         **   ~  **  
*/
/**
 * @brief SL�̃r�b�g�}�b�v�f�[�^
 */
#define TRAINIMG_BMP_SL                                     \
    {                                                       \
        { 0x03, 0x03, 0x05, 0x08, 0x0b, 0x1e, 0x0b, 0x04 }, \
        { 0x00, 0x1f, 0x02, 0x00, 0x1f, 0x06, 0x19, 0x06 }, \
        { 0x01, 0x1e, 0x13, 0x12, 0x1d, 0x06, 0x19, 0x06 }, \
        { 0x1f, 0x00, 0x1f, 0x08, 0x1f, 0x06, 0x09, 0x06 }, \
        { 0x1f, 0x13, 0x1e, 0x12, 0x1f, 0x11, 0x16, 0x08 }, \
        { 0x00, 0x01, 0x07, 0x04, 0x1f, 0x1f, 0x00, 0x00 }, \
        { 0x00, 0x1f, 0x00, 0x00, 0x1f, 0x0c, 0x12, 0x0c }, \
        { 0x00, 0x10, 0x1e, 0x02, 0x03, 0x0f, 0x12, 0x0c }  \
    }
/**
 * @brief SL�̃A�j���[�V�����p�^�[��
 */
#define TRAINIMG_ANIM_SL                                                \
    {                                                                   \
        { SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP }, \
        { SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, T1 }, \
        { SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, T1, T2 }, \
        { SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, T1, T2, T3 }, \
        { SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, T1, T2, T3, T4 }, \
        { SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, T1, T2, T3, T4, T4 }, \
        { SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, T1, T2, T3, T4, T4, T4 }, \
        { SP, SP, SP, SP, SP, SP, SP, SP, SP, T1, T2, T3, T4, T4, T4, T4 }, \
        { SP, SP, SP, SP, SP, SP, SP, SP, T1, T2, T3, T4, T4, T4, T4, T4 }, \
        { SP, SP, SP, SP, SP, SP, SP, T1, T2, T3, T4, T4, T4, T4, T4, T5 }, \
        { SP, SP, SP, SP, SP, SP, T1, T2, T3, T4, T4, T4, T4, T4, T5, T6 }, \
        { SP, SP, SP, SP, SP, T1, T2, T3, T4, T4, T4, T4, T4, T5, T6, T7 }, \
        { SP, SP, SP, SP, T1, T2, T3, T4, T4, T4, T4, T4, T5, T6, T7, T7 }, \
        { SP, SP, SP, T1, T2, T3, T4, T4, T4, T4, T4, T5, T6, T7, T7, T7 }, \
        { SP, SP, T1, T2, T3, T4, T4, T4, T4, T4, T5, T6, T7, T7, T7, T8 }, \
        { SP, T1, T2, T3, T4, T4, T4, T4, T4, T5, T6, T7, T7, T7, T8, SP }, \
        { T1, T2, T3, T4, T4, T4, T4, T4, T5, T6, T7, T7, T7, T8, SP, SP }, \
        { T2, T3, T4, T4, T4, T4, T4, T5, T6, T7, T7, T7, T8, SP, SP, SP }, \
        { T3, T4, T4, T4, T4, T4, T5, T6, T7, T7, T7, T8, SP, SP, SP, SP }, \
        { T4, T4, T4, T4, T4, T5, T6, T7, T7, T7, T8, SP, SP, SP, SP, SP }, \
        { T4, T4, T4, T4, T5, T6, T7, T7, T7, T8, SP, SP, SP, SP, SP, SP }, \
        { T4, T4, T4, T5, T6, T7, T7, T7, T8, SP, SP, SP, SP, SP, SP, SP }, \
        { T4, T4, T5, T6, T7, T7, T7, T8, SP, SP, SP, SP, SP, SP, SP, SP }, \
        { T4, T5, T6, T7, T7, T7, T8, SP, SP, SP, SP, SP, SP, SP, SP, SP }, \
        { T5, T6, T7, T7, T7, T8, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP }, \
        { T6, T7, T7, T7, T8, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP }, \
        { T7, T7, T7, T8, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP }, \
        { T7, T7, T8, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP }, \
        { T7, T8, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP }, \
        { T8, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP }, \
        { SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP } \
    }

/*
    01234012340123401234 ~ 012340123401234 ~ 01234 
   0 **** ************** ~ *************** ~ **** 
   1*  * *      **       ~   **            ~  * **
   2*** ********  ****** ~ **  *********** ~ * * *
   3*** * * *  *  *  * * ~  *  * * *  * *  ~ * * *
   4* * *      *  *      ~  *  *           ~ * * *
   5* * ********  ****** ~ **  *********** ~ * ***
   6 **** *  * **** *  * ~  **** *  * *  * ~ ***  
   7 **    **        **  ~        **   **  ~      
*/
/**
 * @brief ���S���ʓd�Ԃ̃r�b�g�}�b�v�f�[�^
 */
#define TRAINIMG_BMP_MEITETSU                               \
    {                                                       \
        { 0x0f, 0x12, 0x1d, 0x1d, 0x15, 0x15, 0x0f, 0x0c }, \
        { 0x0f, 0x10, 0x1f, 0x0a, 0x00, 0x1f, 0x09, 0x06 }, \
        { 0x1f, 0x06, 0x19, 0x09, 0x09, 0x19, 0x0f, 0x00 }, \
        { 0x1f, 0x00, 0x1f, 0x05, 0x00, 0x1f, 0x09, 0x06 }, \
        { 0x1f, 0x06, 0x19, 0x09, 0x09, 0x19, 0x0f, 0x00 }, \
        { 0x1f, 0x00, 0x1f, 0x0a, 0x00, 0x1f, 0x09, 0x06 }, \
        { 0x1f, 0x00, 0x1f, 0x0a, 0x00, 0x1f, 0x09, 0x06 }, \
        { 0x1e, 0x0b, 0x15, 0x15, 0x15, 0x17, 0x1c, 0x1c }  \
    }
/**
 * @brief ���S���ʓd�Ԃ̃A�j���[�V�����p�^�[��
 */
#define TRAINIMG_ANIM_MEITETSU                                          \
    {                                                                   \
        { SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP }, \
        { SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, T1 }, \
        { SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, T1, T2 }, \
        { SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, T1, T2, T3 }, \
        { SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, T1, T2, T3, T4 }, \
        { SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, T1, T2, T3, T4, T4 }, \
        { SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, T1, T2, T3, T4, T4, T4 }, \
        { SP, SP, SP, SP, SP, SP, SP, SP, SP, T1, T2, T3, T4, T4, T4, T4 }, \
        { SP, SP, SP, SP, SP, SP, SP, SP, T1, T2, T3, T4, T4, T4, T4, T5 }, \
        { SP, SP, SP, SP, SP, SP, SP, T1, T2, T3, T4, T4, T4, T4, T5, T6 }, \
        { SP, SP, SP, SP, SP, SP, T1, T2, T3, T4, T4, T4, T4, T5, T6, T7 }, \
        { SP, SP, SP, SP, SP, T1, T2, T3, T4, T4, T4, T4, T5, T6, T7, T7 }, \
        { SP, SP, SP, SP, T1, T2, T3, T4, T4, T4, T4, T5, T6, T7, T7, T7 }, \
        { SP, SP, SP, T1, T2, T3, T4, T4, T4, T4, T5, T6, T7, T7, T7, T7 }, \
        { SP, SP, T1, T2, T3, T4, T4, T4, T4, T5, T6, T7, T7, T7, T7, T8 }, \
        { SP, T1, T2, T3, T4, T4, T4, T4, T5, T6, T7, T7, T7, T7, T8, SP }, \
        { T1, T2, T3, T4, T4, T4, T4, T5, T6, T7, T7, T7, T7, T8, SP, SP }, \
        { T2, T3, T4, T4, T4, T4, T5, T6, T7, T7, T7, T7, T8, SP, SP, SP }, \
        { T3, T4, T4, T4, T4, T5, T6, T7, T7, T7, T7, T8, SP, SP, SP, SP }, \
        { T4, T4, T4, T4, T5, T6, T7, T7, T7, T7, T8, SP, SP, SP, SP, SP }, \
        { T4, T4, T4, T5, T6, T7, T7, T7, T7, T8, SP, SP, SP, SP, SP, SP }, \
        { T4, T4, T5, T6, T7, T7, T7, T7, T8, SP, SP, SP, SP, SP, SP, SP }, \
        { T4, T5, T6, T7, T7, T7, T7, T8, SP, SP, SP, SP, SP, SP, SP, SP }, \
        { T5, T6, T7, T7, T7, T7, T8, SP, SP, SP, SP, SP, SP, SP, SP, SP }, \
        { T6, T7, T7, T7, T7, T8, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP }, \
        { T7, T7, T7, T7, T8, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP }, \
        { T7, T7, T7, T8, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP }, \
        { T7, T7, T8, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP }, \
        { T7, T8, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP }, \
        { T8, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP }, \
        { SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP } \
    }

/*
    01234012340123401234 ~ 012340123401234 
   0      ************** ~ *********      
   1     *  *            ~       *  *     
   2    ****  ********** ~ *****  ****    
   3  **      * * * * *  ~ * * *      **  
   4 *   *    * ******** ~ *** *    *   * 
   5* **      * *        ~   * *      ** *
   6 *  **************** ~ ***********  * 
   7****  **  **         ~    **  **  ****
*/
/**
 * @brief �V����0�n�̃r�b�g�}�b�v�f�[�^
 */
#define TRAINIMG_BMP_SHINKANSEN                             \
    {                                                       \
        { 0x00, 0x00, 0x01, 0x06, 0x08, 0x16, 0x09, 0x1e }, \
        { 0x0f, 0x12, 0x1c, 0x00, 0x10, 0x00, 0x1f, 0x0c }, \
        { 0x1f, 0x00, 0x1f, 0x15, 0x17, 0x14, 0x1f, 0x18 }, \
        { 0x1f, 0x00, 0x1f, 0x0a, 0x1f, 0x00, 0x1f, 0x00 }, \
        { 0x1f, 0x00, 0x1f, 0x15, 0x1d, 0x05, 0x1f, 0x03 }, \
        { 0x1e, 0x09, 0x07, 0x00, 0x01, 0x00, 0x1f, 0x06 }, \
        { 0x00, 0x00, 0x10, 0x0c, 0x02, 0x0d, 0x12, 0x0f }, \
        { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }  \
    }
/**
 * @brief �V����0�n�̃A�j���[�V�����p�^�[��
 */
#define TRAINIMG_ANIM_SHINKANSEN                                        \
    {                                                                   \
        { SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP }, \
        { SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, T1 }, \
        { SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, T1, T2 }, \
        { SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, T1, T2, T3 }, \
        { SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, T1, T2, T3, T4 }, \
        { SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, T1, T2, T3, T4, T4 }, \
        { SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, T1, T2, T3, T4, T4, T4 }, \
        { SP, SP, SP, SP, SP, SP, SP, SP, SP, T1, T2, T3, T4, T4, T4, T4 }, \
        { SP, SP, SP, SP, SP, SP, SP, SP, T1, T2, T3, T4, T4, T4, T4, T4 }, \
        { SP, SP, SP, SP, SP, SP, SP, T1, T2, T3, T4, T4, T4, T4, T4, T4 }, \
        { SP, SP, SP, SP, SP, SP, T1, T2, T3, T4, T4, T4, T4, T4, T4, T4 }, \
        { SP, SP, SP, SP, SP, T1, T2, T3, T4, T4, T4, T4, T4, T4, T4, T4 }, \
        { SP, SP, SP, SP, T1, T2, T3, T4, T4, T4, T4, T4, T4, T4, T4, T5 }, \
        { SP, SP, SP, T1, T2, T3, T4, T4, T4, T4, T4, T4, T4, T4, T5, T6 }, \
        { SP, SP, T1, T2, T3, T4, T4, T4, T4, T4, T4, T4, T4, T5, T6, T7 }, \
        { SP, T1, T2, T3, T4, T4, T4, T4, T4, T4, T4, T4, T5, T6, T7, SP }, \
        { T1, T2, T3, T4, T4, T4, T4, T4, T4, T4, T4, T5, T6, T7, SP, SP }, \
        { T2, T3, T4, T4, T4, T4, T4, T4, T4, T4, T5, T6, T7, SP, SP, SP }, \
        { T3, T4, T4, T4, T4, T4, T4, T4, T4, T5, T6, T7, SP, SP, SP, SP }, \
        { T4, T4, T4, T4, T4, T4, T4, T4, T5, T6, T7, SP, SP, SP, SP, SP }, \
        { T4, T4, T4, T4, T4, T4, T4, T5, T6, T7, SP, SP, SP, SP, SP, SP }, \
        { T4, T4, T4, T4, T4, T4, T5, T6, T7, SP, SP, SP, SP, SP, SP, SP }, \
        { T4, T4, T4, T4, T4, T5, T6, T7, SP, SP, SP, SP, SP, SP, SP, SP }, \
        { T4, T4, T4, T4, T5, T6, T7, SP, SP, SP, SP, SP, SP, SP, SP, SP }, \
        { T4, T4, T4, T5, T6, T7, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP }, \
        { T4, T4, T5, T6, T7, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP }, \
        { T4, T5, T6, T7, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP }, \
        { T5, T6, T7, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP }, \
        { T6, T7, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP }, \
        { T7, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP }, \
        { SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP, SP } \
    }

#ifdef __cplusplus
}
#endif

#endif /* TRAINIMG_H */
