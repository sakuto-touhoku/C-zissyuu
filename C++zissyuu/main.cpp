#include "Sample.h"

SampleClass* a;


int main()
{
	//SampleClass�N���X�̃C���X�^���X�i���ԁj����� 
	a = new SampleClass;
	//�R�̃����o�֐����Ăяo�� 
	a->Input();
	a->Plus();
	a->Disp();

	delete a;
}