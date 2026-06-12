#include <string>
using std::string;
class Jogo
{
private:
    string nome; // nome do jogo
    float preco; // preço do jogo
    int horas;   // quantidade de horas jogadas
    float custo; // valor por hora jogada

    void calcular()
    {
        if (horas > 0)
            custo = preco / horas;
    }

public:
    void adquirir(const string &titulo, float valor);
    void atualizar(float valor);
    void jogar(int tempo);
    void exibir();
};