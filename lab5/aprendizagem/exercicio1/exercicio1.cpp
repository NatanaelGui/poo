#include <iostream>
#include "Jogo.h"
using namespace std;

int main()
{
    
    Jogo j {"God of War", 200};
    j.jogar(8);
    j.atualizar(80);
    j.exibir();
    return 0;
}
