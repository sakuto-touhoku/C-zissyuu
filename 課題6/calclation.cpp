#include<iostream>
#include"calclation.h"

void calclation::SetA(float value) {
	a = value;
}

void calclation::SetB(float value) {
	b = value;
}

void calclation::Disp() {
	std::cout << "a=" << a << ",b =" << b << std::endl;
}