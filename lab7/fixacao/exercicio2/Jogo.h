#include <string>
using std::string;

struct Jogo
{
    string nome;
    float preco;
    int horas;
    float custo;            
};

void calcular(Jogo *esse);
void Exibir(const Jogo *esse);
void Atualizar(Jogo *esse, float valor);
void Jogar(Jogo *esse, int tempo);