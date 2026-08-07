#include <iostream>
#include "Lista.h"
using namespace std;

void Exibir(Item & i){
    cout << "[" << i << "] ";
}

void ExibirLowerCase(Item & i){
    cout << Item(tolower(i));    
}

void ExibirMedia(Item & i){
    static int resultado;
    static int qtdItens;

    i == 0 ? resultado : resultado += i;
    
    ++qtdItens;
    cout << "[" << resultado / qtdItens << "] ";
}

int main (){
    Lista l;
    Item i = 1;
    l.Adiciona(i);
    
    i = 2;
    l.Adiciona(i);
    
    i = 3;
    l.Adiciona(i);
    
    i = 4;
    l.Adiciona(i);
    
    i = 5;
    l.Adiciona(i);
        
    l.Visitar(ExibirMedia);    
    return 0;
}
