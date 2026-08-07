#include <iostream>
#include <stack>
#include "Pilha.h"
using namespace std;

int main()
{
    
    Pilha pilha = Pilha();    
    char ch;
    do
    {
        cout << endl << "======== Operacoes da pilha ========" << endl;
        cout << "1. Empilha" << endl;
        cout << "2. Desempilha" << endl;
        // cout << "3. Retorna se esta cheia" << endl;
        cout << "3. Retorna se esta vazia" << endl;
        cout << "4. Exibir pilha" << endl;
        cout << "5. Sair" << endl;
        
        cin >> ch;
        Item i;
        switch (ch)
        {
        case '1':
            cout << "Digite o item para empilhar: ";
            cin >> i;
            pilha.Empilhar(i);
            break;

        case '2':
            Item item;
            pilha.Desempilhar(item);            
            break;

        // case '3':
        //     cout << boolalpha;
        //     cout << pilha.Cheia() << endl;
        //     break;

        case '3':
            cout << boolalpha;
            cout << pilha.Vazia() << endl;
            break;
        
        case '4':
            pilha.Exibir();
            break;

        case '5':
            break;
        
        default:
            cout << "Escolha uma opcao valida" << endl;
            break;
        }
    } while (ch != '5');
    
    
    return 0;
}