#include "Tela.h"
#include <iostream>

void Tela::translate(int dx, int dy){    
    int posicaoX_tmp = posicaoX + dx;
    int posicaoY_tmp = posicaoY + dy;

    if( (posicaoX_tmp >= 0 && posicaoX_tmp <= 1919) && (posicaoY_tmp >= 0 && posicaoY_tmp <= 1079)){
        posicaoX = posicaoX_tmp;
        posicaoY = posicaoY_tmp;
    } 
    else 
        std::cout << "Erro: Cordenadas Fora do limite da tela." << std::endl;
}

void Tela::moveTo(int px, int py){
    if( (px >= 0 && px <= 1919) && (py >= 0 && py <= 1079)){
        posicaoX = px;
        posicaoY = py;
    } else 
        std::cout << "Erro: Cordenadas Fora do limite da tela." << std::endl;
}

void Tela::exibir(){
    std::cout << "Posicao X:" << posicaoX << std::endl;
    std::cout << "Posicao Y:" << posicaoY << std::endl;
}