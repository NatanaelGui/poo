using Item = int;

class Lista
{

private:
    Item *itens;
    int size;                           //Tamanho Atual
    int max;                            //Tamanho Maximo

public:
    Lista(int tam);
    ~Lista();
    bool Vazia() const;
    bool Cheia() const;
    bool Adicionar(const Item &item);
    Item operator[](int i);
    void erroForaLimite();    
};