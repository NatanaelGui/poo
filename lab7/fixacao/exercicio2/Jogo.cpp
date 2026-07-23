#include "Jogo.h"
#include <iostream>
using namespace std;

void calcular(Jogo *esse)
{
    if (esse->horas > 0)
        esse->custo = esse->preco / esse->horas;
}

void Exibir(const Jogo *esse)
{
    cout << fixed;
    cout.precision(2);

    cout << esse->nome << " R$"
        << esse->preco << " "
        << esse->horas << "h = R$"
        << esse->custo << "/h\n";
}

void Atualizar(Jogo *esse, float valor)
{
    esse->preco = valor;
    calcular(esse);
}

void Jogar(Jogo *esse, int tempo)
{
    esse->horas = esse->horas + tempo;
    calcular(esse);
}
// // -----------------------------------------------