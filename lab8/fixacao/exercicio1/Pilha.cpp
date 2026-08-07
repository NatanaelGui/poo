#include <iostream>
using namespace std;
#include "Pilha.h"

Pilha::Pilha(){
    
    max = 2;
    topo = 0;
    itens = new Item[max];
}

Pilha::~Pilha(){
    delete[] itens;    
}

bool Pilha::Vazia() const {    
    return topo == 0;
}

// bool Pilha::Cheia() const {    
//     return topo == MAX;
// }

void Pilha::Empilhar(const Item & item) {

    if(topo < max){
        itens[topo++] = item;
        return;
    }

    max *= 2 ;
    Item *nova_pilha = new Item[max];
    
    for(int i = 0; i < max; ++i)
        nova_pilha[i] = itens[i];
    
    nova_pilha[topo++] = item;
    
    delete[] itens;
    itens = nova_pilha;    
}

bool Pilha::Desempilhar(Item& item) {
    if(topo > 0){
        item = itens[--topo];
        return true;
    }
    return false;
}

void Pilha::Exibir() {
    for(int i = 0; i < topo; ++i)
        cout << itens[i] << ", ";
}