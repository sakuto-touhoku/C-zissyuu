// Calclation.cpp

#include "Calclation.h"
#include <iostream>

// コンストラクタの定義（必要に応じて）
// Calclation::Calclation() {
//     a = 0.0f;
//     b = 0.0f;
// }

// 変数 a のセッター関数の定義
void Calclation::SetA(float value) {
    a = value;
}

// 変数 b のセッター関数の定義
void Calclation::SetB(float value) {
    b = value;
}

// 計算と結果表示の関数の定義
void Calclation::Disp() {
    std::cout << a << " + " << b << " = " << a + b << std::endl;
    std::cout << a << " - " << b << " = " << a - b << std::endl;
}
