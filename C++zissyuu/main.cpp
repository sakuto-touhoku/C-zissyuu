#include "Sample.h"

SampleClass* a;


int main()
{
	//SampleClassクラスのインスタンス（実態）を作る 
	a = new SampleClass;
	//３つのメンバ関数を呼び出す 
	a->Input();
	a->Plus();
	a->Disp();

	delete a;
}