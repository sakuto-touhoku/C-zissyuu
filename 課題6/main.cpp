// main.cpp

#include "Calclation.h"

int main() {
    float a = 42.195f, b = 3.14f;

    // Calclation �N���X�̃C���X�^���X���쐬
    Calclation x;

    // �ϐ� a �̒l���Z�b�g����
    x.SetA(a);

    // �ϐ� b �̒l���Z�b�g����
    x.SetB(b);

    // �v�Z�ƌ��ʂ�\������
    x.Disp();

    return 0;
}