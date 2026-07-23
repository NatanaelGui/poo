#include <iostream>
using namespace std;
#include "Jogo.h"

Jogo::Jogo(){

    nome = "";
    preco = 0.0f;
    horas = 0;
    custo = preco;
}

Jogo::Jogo(const string &titulo, float valor, int tempo){
    
    nome = titulo;
    preco = valor;
    horas = tempo;
    Calcular();
}

Jogo::~Jogo(){}

void Jogo::Atualizar(float valor){
    
    preco = valor;
}

void Jogo::Jogar(int tempo){
    
    horas += tempo;
}

void Jogo::Exibir() const{
    
    cout << fixed;
    cout.precision(2);

    cout << nome << " R$"
         << preco << " "
         << horas << "h = R$"
         << custo << "/h" << endl;
}

const Jogo& maisJogado(const Jogo& j1, const Jogo& j2){
    
    if(j1.getHoras() >= j2.getHoras()){
        return j1;
    }
    
    return j2;
}

const Jogo& menorCusto(const Jogo& j1, const Jogo& j2){
    
    if(j1.getCusto() <= j2.getCusto()){
        return j1;
    }
    
    return j2;
}

const Jogo& menorPreco(const Jogo& j1, const Jogo& j2){
    
    if(j1.getPreco() <= j2.getPreco()){
        return j1;
    }
    
    return j2;
}
