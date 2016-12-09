/**
 * @file train.h
 *
 * @brief Train�V�X�e���C���^�t�F�[�X
 *
 * @htmlonly
 * @version $Id: train.h 86 2009-02-02 07:11:11Z Administrator $
 *
 * @author MINOURA Kenji / kenji_minoura@dnet.totec.co.jp
 *
 * Copyright (c) 2008 Totec Amenity, Ltd All rights reserved.
 * @endhtmlonly
 *
 ***********************************************************************/
/**
 * @mainpage �͂��߂�
 *
 * @section abstract ���̕����ɂ���
 * ���̕����́A�d�ԃV�~�����[�^�̓����\�����L�q�����ڍא݌v�d�l���ł���B@n
 * �����͑傫���f�[�^�\���̉���Z�N�V�����ƁA�t�@�C�����W���[���ʂ�
 * �C���^�t�F�[�X����Z�N�V�����ɕ�����Ă���A���ꂼ��̃Z�N�V������
 * �`���ŉ�����ڂ��T�������t���ŗ񋓂�����A���ڂ̏ڍא����������Ƃ���
 * �\���ɂȂ��Ă���B
 *
 * @section target �Ώ�
 * �d�ԃV�~�����[�^�̉�͎҂�ΏۂƂ��������ł���A�V�X�e���̊�{�d�l��
 * H8-BASE2�̃v���b�g�t�H�[���𗝉����Ă��邱�Ƃ��O��ł���B
 *
 ***********************************************************************/
#ifndef TRAIN_H
#define TRAIN_H

#ifdef __cplusplus
extern "C" {
#endif

#if (SSRP_ADDR < 1) || (SSRP_ADDR > 254)
#error "Define the SSRP_ADDR (1-254)"
#endif

#ifdef __cplusplus
}
#endif

#endif /* TRAIN_H */
