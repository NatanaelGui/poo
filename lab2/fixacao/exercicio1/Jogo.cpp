#include <iostream>
#include"Jogo.h"

void Jogo::adquirir(const string &titulo, float valor){
    nome = titulo;
    preco = valor;
}

void Jogo::atualizar(float valor) {
    preco = valor;
    calcular();
}

void Jogo::jogar(int tempo) {
    horas = tempo;
    calcular();
}

void Jogo::exibir() {
    std::cout  << "Nome: " << nome << std::endl;
    std::cout  << "Preco: " << preco << std::endl;
    std::cout  << "Horas: " << horas << std::endl;
    std::cout  << "Custo: " << custo << std::endl;
}