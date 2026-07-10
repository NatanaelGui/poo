#include <iostream>
#include "Jogo.h"
using namespace std;
int main()
{
    
    Jogo sackboy = Jogo("Sackboy", 150.0f); //cria objeto temporario? R: nao
    
    Jogo horizon;
    horizon = Jogo("Horizon", 199.0f); // objeto temporario

    Jogo mk {"Mortal Kombat", 89.99f};
    return 0;
}
