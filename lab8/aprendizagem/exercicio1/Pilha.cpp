#include "Pilha.h"

// -----------------------------------------------
// Definicao da Classe Pilha
// -----------------------------------------------

Pilha::Pilha()
{
	topo = 0;
	max = 10;
	itens = new Item[max];
}

Pilha::Pilha(int size)
{
	topo = 0;
	max = size;
	itens = new Item[max];
}

Pilha::~Pilha(){
	delete[] itens;
}

bool Pilha::Vazia() const
{
	return topo == 0;
}

void Pilha::Empilhar(const Item& item)
{
	if (topo == max)
		Redimencionar();

	itens[topo++] = item;
}

void Pilha::Redimencionar(){
	max = max * 2 + 1;
	Item *novoTamanho = new Item[max];
	
	for(int i = 0; i < topo; ++i)
		novoTamanho[i] = itens[i];

	delete[] itens;
	itens = novoTamanho;
}

bool Pilha::Desempilhar(Item& item)
{
	if (topo > 0)
	{
		item = itens[--topo];
		return true;
	}

	return false;
}

// -----------------------------------------------