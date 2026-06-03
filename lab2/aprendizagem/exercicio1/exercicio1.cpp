#include <iostream>
#include "ContaBancaria.h"
using namespace std;

int main()
{
    ContaBancaria c;
    c.criarConta("Alberto Santos", 20061873, 14.00);
    c.exibir();    
    c.depositar(14.00);
    c.exibir();
    c.sacar(14.00);
    c.exibir();
    return 0;
}
