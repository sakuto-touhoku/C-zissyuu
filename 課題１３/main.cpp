#include "Calculation.h" 

//�v���g�^�C�v�錾 
void SetX(float a, float b);
void SetY(float a, float b);

//�O���[�o���ϐ� 
Calclation *x;
Calclation *y;
//���C���֐� 
int main()
{
	//�C���X�^���X�w�̏��� 
	SetX(5.0, 10.0);
	x.Disp();

	//�C���X�^���X�x�̏��� 
	SetY(8.0, 3.0);
	y.Disp();
}

//�C���X�^���X�w�̃A�N�Z�X�֐����Ă� 
void SetX(float a, float b)
{

	x = new Calclation;
	x->SetA(a);
	x->SetB(b);
	delete x;

}

//�C���X�^���X�x�̃A�N�Z�X�֐����Ă� 
void SetY(float a, float b)
{
	y = new Calclation;
	y->SetA(a);
	y->SetB(b);
	delete y;
}