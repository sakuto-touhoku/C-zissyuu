// Calclation.cpp

#include "Calclation.h"
#include <iostream>

// �R���X�g���N�^�̒�`�i�K�v�ɉ����āj
// Calclation::Calclation() {
//     a = 0.0f;
//     b = 0.0f;
// }

// �ϐ� a �̃Z�b�^�[�֐��̒�`
void Calclation::SetA(float value) {
    a = value;
}

// �ϐ� b �̃Z�b�^�[�֐��̒�`
void Calclation::SetB(float value) {
    b = value;
}

// �v�Z�ƌ��ʕ\���̊֐��̒�`
void Calclation::Disp() {
    std::cout << a << " + " << b << " = " << a + b << std::endl;
    std::cout << a << " - " << b << " = " << a - b << std::endl;
}
