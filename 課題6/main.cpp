// main.cpp

#include "Calclation.h"

int main() {
    float a = 42.195f, b = 3.14f;

    // Calclation クラスのインスタンスを作成
    Calclation x;

    // 変数 a の値をセットする
    x.SetA(a);

    // 変数 b の値をセットする
    x.SetB(b);

    // 計算と結果を表示する
    x.Disp();

    return 0;
}