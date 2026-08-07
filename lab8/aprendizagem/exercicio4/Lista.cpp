#include "Lista.h"

// -----------------------------------------------
// Definicao da Classe Lista
// -----------------------------------------------

Lista::Lista()
{
	topo = 0;
	max = 0;
	itens = new Item[max];
}

Lista::Lista(int size)
{
	topo = 0;
	max = size;
	itens = new Item[max];
}

Lista::~Lista(){
	delete[] itens;
}

bool Lista::Vazia() const
{
	return topo == 0;
}

bool Lista::Cheia() const
{
	return topo == max;
}

void Lista::Adiciona(const Item& item)
{
	if (topo == max)
		Redimencionar();

	itens[topo++] = item;
}

void Lista::Redimencionar(){
	max = max * 2 + 1;
	Item *novoTamanho = new Item[max];
	
	for(int i = 0; i < topo; ++i)
		novoTamanho[i] = itens[i];

	delete[] itens;
	itens = novoTamanho;
}

void Lista::Visitar(void (*ptf)(Item &)){
	
	for (int i = 0; i < topo; ++i){
		ptf(itens[i]);
	}
}

// -----------------------------------------------