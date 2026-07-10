#include <iostream>
#include "Jogo.h"
using namespace std;

int main()
{
    
    const Jogo ratchet {"Ratche & Clank", 150.0f};
    // ratchet.atualizar(125.0f);  // modificaa
    ratchet.exibir();           // nao modifica
    
    return 0;
}
