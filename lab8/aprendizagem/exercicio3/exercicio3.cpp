#include <iostream>
#include "Pilha.h"
using namespace std;

void operandos(char ch, Pilha &pilha){

    if(ch == '\n')
        return;

    Item resultado = 0;
    Item n1 = 0, n2 = 0;    
    
    switch (ch)
    {
    case '+':
        pilha.Desempilhar(n2);                
        pilha.Desempilhar(n1);                
        resultado = n1 + n2;        
        pilha.Empilhar(resultado);
        break;
    
    case '-':    
        pilha.Desempilhar(n2);                
        pilha.Desempilhar(n1);        
        resultado = n1 - n2;
        pilha.Empilhar(resultado);
        break;
    
    case '*':    
        pilha.Desempilhar(n2);        
        pilha.Desempilhar(n1);                
        if(n1 != 0 && n2 != 0){
            resultado = n1 * n2;
            pilha.Empilhar(resultado);
        }
        break;
    
    default:
        cout << "Erro!" << endl;
        break;
    }

}

int main()
{
    
    cout << "Expressao: ";
    Item ch;
    Pilha pilha;    
    
    do {
        cin.get(ch);
            
        while (ch != '+' && ch != '-' && ch != '*' && ch != '/' && ch != '\n' ) {
            pilha.Empilhar(ch -= 48); // Codigo do char sempre representando um int
            cin.get(ch);
        }
        operandos(ch, pilha);
    } while(ch != '\n');
    
    Item resultado;
    pilha.Desempilhar(resultado);
    cout << "\nResultado: " << int(resultado) << endl;
    return 0;
}
