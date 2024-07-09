#include "Figure.h"

void Figure::SetTeihen(float f) {
    teihen = f;
}

void Figure::SetTakasa(float f) {
    takasa = f;
}

void Figure::Disp() const {
    std::cout << "–ÊÏ: " << menseki << std::endl;
}