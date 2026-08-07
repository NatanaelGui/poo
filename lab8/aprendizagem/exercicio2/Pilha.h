
// definicao do tipo Item
using Item = char;

// ----------------------------------
// Declaracao da Classe Pilha
// ----------------------------------

class Pilha
{
private:
	int max;                      			// limite de itens
	Item *itens;							// armazenamento de itens
	int topo;                               // Indice do item no topo
	void Redimencionar();					// Redimenciona a pilha

public:
	Pilha();                                // construtor
	Pilha(int size);						// construtor
	~Pilha();								// destrutor

	bool Vazia() const;                     // verifica se a pilha esta vazia	
	void Empilhar(const Item& item);		// adiciona item na pilha									
	bool Desempilhar(Item & item);			// remove item da pilha
};

// ----------------------------------