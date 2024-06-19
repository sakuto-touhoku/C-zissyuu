#include<iostream>
#include "CircleClass.h"

void CircleClass::Input()
{
	std::cout << "”¼Œa‚ÍH";
	std::cin >> r;
}

void CircleClass::Calc()
{
	area = r * r * 3.16f;
}

void CircleClass::Disp()
{
	std::cout << "–Ê‚Ì–ÊÏ" << area << "\n";
}

