#include <iostream>
#include "Tela.h"
using namespace std;

int main()
{
    
    Tela t;
    t.moveTo(1080, 720);
    t.exibir();
    
    t.translate(1080, 720);
    t.exibir();
    return 0;
}
