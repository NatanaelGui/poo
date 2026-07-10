#include <string>
#include <iostream>
#include "Jogo.h"
using namespace std;

Jogo::Jogo(const string &titulo, float valor, int tempo){
    static int cont = 0;
    cout << "Objeto " << titulo << " criado " << ++cont << "o " << endl;
    nome = titulo;
    preco = valor;
    horas = tempo;
    custo = preco;
    calcular();
}

Jogo::~Jogo() {
    static int cont = 0;
    cout << "Objeto " << nome << " destruido " << ++cont << "o " << endl;
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

void Jogo::exibir() const{
    cout << "\n====== " << nome << " ======\n";
    cout << "Preco: " << preco << endl;
    cout << "Horas Jogadas: " << horas << endl;
    cout << "Custo (preco/horas): " << custo << endl;    
    cout << "=============================" << endl;
}