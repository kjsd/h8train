/**
 * @file train.h
 *
 * @brief Trainシステムインタフェース
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
 * @mainpage はじめに
 *
 * @section abstract この文書について
 * この文書は、電車シミュレータの内部構造を記述した詳細設計仕様書である。@n
 * 文書は大きくデータ構造の解説セクションと、ファイルモジュール別の
 * インタフェース解説セクションに分かれており、それぞれのセクションは
 * 冒頭で解説項目を概略説明付きで列挙した後、項目の詳細説明が続くという
 * 構成になっている。
 *
 * @section target 対象
 * 電車シミュレータの解析者を対象とした文書であり、システムの基本仕様と
 * H8-BASE2のプラットフォームを理解していることが前提である。
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
