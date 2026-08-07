#include <iostream>
#include <string>
#include "Pilha.h"
using namespace std;

int main()
{
    cout << "Expressao: ";
    string ch;
    Pilha pilha;
    
    getline(cin, ch);
    Item primeiro;
    for(int i = 0; ch[i]; ++i){
        
        if(ch[i] == '(')
            pilha.Empilhar(ch[i]);
        
        else if(ch[i] == ')'){
            if(pilha.Vazia()){
                pilha.Empilhar(ch[i]);
                continue;
            }
            pilha.Desempilhar(primeiro);
        }
    }

    if(!pilha.Vazia()){
        while(pilha.Desempilhar(primeiro)){}
        
        if(primeiro == '(')
            cout << "[Erro] Parentese nao foi fechado" << endl;

        else
            cout << "[Erro] Parentese nao foi aberto" << endl;

        return 0;
    }

    
    cout << "[Ok] Parenteses corretos" << endl;                
    return 0;
}
