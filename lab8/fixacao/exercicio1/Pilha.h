using Item = char;

class Pilha
{
private:
        
    int max;
    Item *itens;
    int topo;

public:
    Pilha();
    ~Pilha();
    bool Vazia() const;
    // bool Cheia() const;
    void Empilhar(const Item &item);
    bool Desempilhar(Item& item);
    void Exibir();
};