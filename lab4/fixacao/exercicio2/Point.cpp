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

// void Point::exibir(){
//     std::cout << "Valor de X: " << x << std::endl;
//     std::cout << "Valor de Y: " << y << std::endl;
// }