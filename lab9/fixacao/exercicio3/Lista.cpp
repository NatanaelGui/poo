#include <iostream>
#include "Lista.h"
using namespace std;

Lista::Lista(int tam) {
    itens = new Item[size];
    size = 0;
    max = tam;
}

Lista::~Lista() {
    delete[] itens;
}

bool Lista::Vazia() const {
    return size == 0;
}

bool Lista::Cheia() const {    
    return size == max;
}

bool Lista::Adicionar(const Item &item) {
        
    if(size >= 0 && size < max){
        itens[size++] = item;        
        return true;
    }
    
    return false;    
}

Item Lista::operator[](int i) {
    
    if(i < 0 || i >= size){
        erroForaLimite();
        return 0;
    }

    return itens[i];
}

void Lista::erroForaLimite() {
    cout << endl << "Erro: Index da lista fora do limite: ";
}