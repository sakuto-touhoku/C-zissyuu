#include<iostream>
#include "CircleClass.h"

void CircleClass::Input()
{
	std::cout << "���a�́H";
	std::cin >> r;
}

void CircleClass::Calc()
{
	area = r * r * 3.16f;
}

void CircleClass::Disp()
{
	std::cout << "�ʂ̖ʐρ�" << area << "\n";
}

