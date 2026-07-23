#include <iostream>
#include "Atleta.h"
using namespace std;

int main()
{    
    const int MAX_ATLETAS = 4;
    Atleta atletas[MAX_ATLETAS] {
        {"Rick", 10, 14 },
        {"John", 10, 16 },
        {"Mark", 12, 15 },
        {"Luis", 15, 20 }        
    };
    
    Atleta topPercentual = atletas[0];
    atletas[0].exibir();
    for(int i = 1; i < MAX_ATLETAS; ++i){
        
        atletas[i].exibir();
        topPercentual = topPercentual.comparar(atletas[i]) ? topPercentual : atletas[i];
    }

    cout << endl << "Atleta com o maior percentual: ";
    topPercentual.exibir();

    return 0;
}
