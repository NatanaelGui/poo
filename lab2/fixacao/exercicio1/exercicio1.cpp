#include <iostream>
#include "Jogo.h"
using namespace std;

int main()
{
    
    Jogo jogo;
    jogo.adquirir("God of War", 169.90);
    jogo.jogar(6);
    jogo.exibir();
    
    return 0;
}