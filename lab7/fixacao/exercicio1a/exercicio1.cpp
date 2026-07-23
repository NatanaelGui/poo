#include <iostream>
#include "Jogo.h"
using namespace std;

const int MAX = 4;

int main()
{
    // vetor de objetos inicializados
    Jogo colecao[MAX] = 
    {
         Jogo("Gears", 90.0f, 30),
         Jogo("Doom", 60.0f, 120),
         Jogo("Halo", 80.0f, 40),
         Jogo("Bom de Guerra", 20.0f, 150)
    };

    cout << "Colecao de Jogos:\n";
    for (int i = 0; i < MAX; i++)
        colecao[i].exibir();

    // aponta para primeiro elemento
    const Jogo* atual = &colecao[0];

    // compara com todos os elementos
    cout << "\nComparacao entre Jogos:\n";    
    
    for (int i = 1; i < MAX; i++){
        
        for(int j = i; j < MAX; j++){
            
            atual->comparar(colecao[j]);
        }
                
        atual = &colecao[i];
    }

    return 0;
}