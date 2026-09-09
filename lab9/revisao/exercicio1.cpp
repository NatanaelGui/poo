#include <iostream>
#include "Tempo.h"
using namespace std;

int main()
{
    Tempo a { 2, 30 };
    Tempo b { 1, 10 };
    Tempo c { 0, 20 };
    Tempo total = a + b - c;
    total.Exibir();
    
    total = total + 2;
    total.Exibir();
    
    total = total * 2;
    total.Exibir();
};