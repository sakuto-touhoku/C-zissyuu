/*
Sample.cpp
SampleClass �N���X�̊e�����o�֐����`
*/
//�w�b�_���C���N���[�h
#include <iostream>
#include "Sample.h" //�N���X��錾���Ă���w�b�_
//�����o�ϐ��ɒl�������郁���o�֐�
void SampleClass::Input() {
	a = 10;
	b = 3;
}
//�����o�ϐ����m�̌v�Z���s�������o�֐�
void SampleClass::Plus() {
	c = a + b;
}
//�����o�ϐ��̓��e���o�͂��郁���o�֐�
void SampleClass::Disp() {
	std::cout << "�ϐ��b�̒l��" << c << "\n";
}
