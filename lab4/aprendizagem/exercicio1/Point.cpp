#include <iostream>
#include "Point.h"

void Point::MoveTo(int px, int py){
    x = px;
    y = py;
}

void Point::Translate(int dx, int dy){
    x += dx;
    y += dy;
}

void Point::exibe(){
    std::cout << "Ponto X: " << x << " | Ponto Y: " << y << std::endl;
}