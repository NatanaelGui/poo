#include <iostream>
#include "Tempo.h"
using std::cout;
using std::endl;

int main()
{   
    
    Tempo a { 2, 30 };
    Tempo b { 1, 10 };
    Tempo c { 0, 20 };

    Tempo total;
    total += a;
    total.Exibir();

    total += b;
    total.Exibir();

    total -= c;
    total.Exibir();
}