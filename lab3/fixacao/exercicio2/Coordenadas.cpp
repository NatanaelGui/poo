#include "Coordenadas.h"
#include <iostream>

void Coordenadas::moveDxDy(int dx, int dy){
    x += dx;
    y += dy;
}

void Coordenadas::movePxPy(int px, int py){
    x = px;
    y = py;
}

void Coordenadas::exibe(){
    
    std::cout << "Valor de X: " << x << std::endl;
    std::cout << "Valor de Y: " << y << std::endl;
}