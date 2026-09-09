#include <iostream>
#include "Lista.h"
using namespace std;

int main()
{
    Lista lista{5};
    lista.Adicionar(2);
    lista.Adicionar(3);
    lista.Adicionar(6);
    
    cout << lista[0]; // deve exibir 2
    cout << lista[1]; // deve exibir 3
    cout << lista[2]; // deve exibir 6
    cout << lista[3]; // deve exibir 0 e mensagem de erro
}