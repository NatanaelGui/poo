#include <iostream>
#include "Point.h"

Point::Point (){}

Point::Point (int px, int py){
    MoveTo(px, py);
}

void Point::MoveTo(int px, int py){
    x = px;
    y = py;
}

void Point::Translate(int dx, int dy){
    x += dx;
    y += dy;
}

void Point::Print(){
    std::cout << "X: " << x << std::endl;
    std::cout << "Y: " << y << std::endl;
}