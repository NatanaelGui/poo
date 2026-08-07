
// definicao do tipo Item
using Item = char;

// ----------------------------------
// Declaracao da Classe Lista
// ----------------------------------

class Lista
{
private:
	int max;                      			// limite de itens
	Item *itens;							// armazenamento de itens
	int topo;                               // Indice do item no topo
	void Redimencionar();					// Redimenciona a lista

public:
	Lista();                                // construtor
	Lista(int size);						// construtor
	~Lista();								// destrutor

	bool Vazia() const;                     // verifica se a lista esta vazia	
	bool Cheia() const;						// verifica se a lista esta cheia	
	void Adiciona(const Item& item);		// adiciona item na lista
	void Visitar(void (*ptf)(Item &));
};

// ----------------------------------