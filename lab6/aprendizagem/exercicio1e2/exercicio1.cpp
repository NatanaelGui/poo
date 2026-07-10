#include <iostream>
#include "Atleta.h"
using namespace std;

int main()
{
    
    Atleta rick { 13, 14 };
    Atleta john { 10, 16 };
    Atleta mark { 7, 9 };
    Atleta time;

    mark.calcular(mark);
    rick.calcular(rick);    
    john.calcular(john);

    time.acumular(time, rick);    
    time.acumular(time, john);    
    time.acumular(time, mark);
    
    mark.exibir(mark);
    rick.exibir(rick);    
    john.exibir(john);
    time.exibir(time);
    return 0;
}
