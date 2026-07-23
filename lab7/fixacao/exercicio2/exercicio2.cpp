#include <iostream>
#include "Jogo.h"
using namespace std;

int main()
{
    Jogo gears{"Gears", 90.0f};

    // gears.atualizar(100.0f);
    // gears.jogar(5);
    // gears.exibir();
    
    Atualizar(&gears, 100.0f);
    Jogar(&gears, 5);
    Exibir(&gears);
}