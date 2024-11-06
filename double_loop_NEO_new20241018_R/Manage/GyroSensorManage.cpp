/******************************************************************************
 *  ファイル名：GyroSensorManage.cpp
 *　　　　内容：ジャイロセンサ管理クラスの定義
 *  　　作成日：2024/10/19
 *  　　作成者：近藤　悠太
 *****************************************************************************/

/* ヘッダインクルード */
#include "GyroSensorManage.h"   // ジャイロセンサ管理クラス

using namespace ev3api; // 名前空間ev3api

/* 静的インスタンス */
GyroSensor mGetRollAngle(PORT_4);    // ロール角取得


/******************************************************
 *  関数名：コンストラクタ
 *    概要：インスタンス生成時の処理をする
 *  　引数：なし
 *  返却値：なし
 *  　備考：なし
 ******************************************************/
GyroSensorManage::GyroSensorManage()
{
    ;
}

/******************************************************
 *  関数名：getRollAngle
 *    概要：ロール角を取得する
 *  　引数：なし
 *  返却値：なし
 *  　備考：なし
 ******************************************************/
void GyroSensorManage::getRollAngle()
{
    roll_angle = mGetRollAngle.getAngle();
}

/******************************************************
 *  関数名：readRollAngle
 *    概要：ロール角を読み出す
 *  　引数：なし
 *  返却値：ロール角
 *  　備考：constメンバ関数
 ******************************************************/
int16_t GyroSensorManage::readRollAngle() const
{
    return roll_angle;
}