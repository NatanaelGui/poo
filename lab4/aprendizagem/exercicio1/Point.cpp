#include <iostream>
#include "Point.hpp"

void Point::MoveTo(int px, int py){
    x = px;
    y = py;
}
void Point::Translate(int dx, int dy){
    x += dx;
    y += dy;
}