#include <string>
#include <iostream>
#include "Jogo.h"
using namespace std;

Jogo::Jogo(const string &titulo, float valor, int tempo){

    nome = titulo;
    preco = valor;
    horas = tempo;
    custo = preco;
    calcular();
}

void Jogo::atualizar(float valor){
    preco = valor;
    custo = preco;
    calcular();
}

void Jogo::jogar(int tempo){
    horas += tempo;
    calcular();
}

void Jogo::exibir(){
    cout << "\n====== " << nome << " ======\n";
    cout << "Preco: " << preco << endl;
    cout << "Horas Jogadas: " << horas << endl;
    cout << "Custo (preco/horas): " << custo << endl;    
    cout << "=============================" << endl;
}