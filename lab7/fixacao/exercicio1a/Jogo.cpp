#include "Jogo.h"
#include <iostream>
using namespace std;

// -----------------------------------------------
// Definição da Classe Jogo
// -----------------------------------------------

Jogo::Jogo()
{
    nome = "";
    preco = custo = 0.0f;
    horas = 0;
}

Jogo::Jogo(const string &titulo, float valor, int tempo)
{
    nome = titulo;
    preco = valor;
    horas = tempo;
    custo = valor;
    calcular();
}

Jogo::~Jogo()
{
}

const Jogo &Jogo::comparar(const Jogo &jogo) const
{
    
    const Jogo& mJogado = this->maisJogado(*this, jogo);
    std::cout << "O jogo mais jogado entre " << this->nome << " e " << jogo.nome << " eh: "; 
    mJogado.exibir();

    std::cout << "O jogo com menor custo entre " << this->nome << " e " << jogo.nome << " eh: "; 
    const Jogo& mCusto = this->menorCusto(*this, jogo);
    mCusto.exibir();

    return *this;
}

const Jogo& Jogo::maisJogado(const Jogo &a, const Jogo &b) const
{
    if (a.horas > b.horas)
        return a;
    else
        return b;
}

const Jogo& Jogo::menorCusto(const Jogo &a, const Jogo &b) const
{
    if (a.custo < b.custo)
        return a;
    else
        return b;
}

void Jogo::atualizar(float valor)
{
    preco = valor;
    calcular();
}

void Jogo::jogar(int tempo)
{
    horas = horas + tempo;
    calcular();
}

void Jogo::exibir() const
{
    cout << fixed;
    cout.precision(2);

    cout << nome << " R$"
         << preco << " "
         << horas << "h = R$"
         << custo << "/h\n";
}

// -----------------------------------------------