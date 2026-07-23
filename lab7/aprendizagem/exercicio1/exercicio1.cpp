#include <iostream>
#include "Jogo.h"
using namespace std;

int main()
{
    const int MAX_JOGOS = 4;
    Jogo jogos[MAX_JOGOS] = {
        {"God of War",  20.0f,  5},
        {"Mario",       200.0f, 95},
        {"Star Fox",    300.0f, 100},
        {"Halo",        100.0f, 80}
    };
    
    Jogo topJogado     = jogos[0], 
         topMenorCusto = jogos[0], 
         topMenorPreco = jogos[0];
    
    for(int j = 1; j < MAX_JOGOS; ++j){
        
        // topJogado = topJogado.Comparar(jogos[j],         maisJogado);
        // topMenorCusto = topMenorCusto.Comparar(jogos[j], menorCusto);            
        // topMenorPreco = topMenorPreco.Comparar(jogos[j], menorPreco);
        
        topJogado = (topJogado.getHoras() >= jogos[j].getHoras() ? topJogado : jogos[j]);
        topMenorCusto = (topMenorCusto.getCusto() <= jogos[j].getCusto() ? topMenorCusto : jogos[j]);
        topMenorPreco = (topMenorPreco.getPreco() <= jogos[j].getPreco() ? topMenorPreco : jogos[j]);
    }
    
    cout << "O Jogo Mais Jogado: ";
    topJogado.Exibir();

    cout << endl << "O Jogo Com Menor Custo: ";
    topMenorCusto.Exibir();

    cout << endl << "O Jogo Com Menor Preco: ";
    topMenorPreco.Exibir();

    return 0;
}
