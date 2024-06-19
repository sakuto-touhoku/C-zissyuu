#include "sample.h"
void Function();
#include<iostream>

int main()
{
	std::cout << "プログラム開始\n";
	Function();
	std::cout << "プログラム終了\n";
}

void Function()
{
	std::cout << "関数が呼び出されました\n";
	Sample instSample;
	instSample.menberFunc();
}