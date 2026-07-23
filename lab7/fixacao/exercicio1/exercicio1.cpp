#include <iostream>
#include "Jogo.h"
using namespace std;

int main()
{
    Jogo gears = Jogo("Gears", 90.0f, 30);
    Jogo doom = Jogo("Doom", 60.0f, 120);
    Jogo halo = Jogo("Halo", 80.0f, 40);
    Jogo bomGuerra = Jogo("Bom de Guerra", 20.0f, 150);
    
    cout << "\nComparacao entre Jogos:\n";    
    const Jogo& topPlay = doom.comparar(gears, maisJogado);
    const Jogo& topValue = gears.comparar(doom, menorCusto);
    
    cout << "Jogo Mais Jogado: " << endl;
    topPlay.exibir();    
    
    cout << endl << "Jogo Mais Barato: " << endl;
    topValue.exibir();

    return 0;
}