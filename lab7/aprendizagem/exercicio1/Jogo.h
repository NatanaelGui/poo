#include <string>
using std::string;

class Jogo
{
private:
    string nome; // nome do jogo
    float preco; // preco do jogo
    int horas;   // quantidade de horas jogadas
    float custo; // valor por hora jogada
    void Calcular();

public:
    Jogo();
    Jogo(const string &titulo, float valor = 0, int tempo = 0);
    ~Jogo();
    const Jogo &Comparar(const Jogo &jogo, const Jogo& (ptrf)(const Jogo&, const Jogo&)) const;
    void Atualizar(float valor);
    void Jogar(int tempo);
    void Exibir() const;
    
    //Metodos Gets
    float getHoras() const;
    float getCusto() const;
    int   getPreco() const; 
};

inline void Jogo::Calcular() {
    
    if(preco > 0 && horas > 0)
        custo = preco / horas;
    else
        custo = 0;

}

inline const Jogo& Jogo::Comparar(const Jogo &jogo, const Jogo& (ptrf)(const Jogo&, const Jogo&)) const{
    return ptrf(*this, jogo);
}

inline float Jogo::getHoras() const{
    return horas;
}

inline float Jogo::getCusto() const {
    return custo;
}

inline int Jogo::getPreco() const {
    return preco;
}


const Jogo& maisJogado(const Jogo&, const Jogo&);
const Jogo& menorCusto(const Jogo&, const Jogo&);
const Jogo& menorPreco(const Jogo&, const Jogo&);