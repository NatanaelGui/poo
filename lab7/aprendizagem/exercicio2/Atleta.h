#include <string>
using std::string;
class Atleta {

private:
    string nome;  
    int acertos;
    int tentativas;
    float percentual;

public:
    Atleta();
    Atleta(string nome, int acertos_, int tentativas_);
    void inline calcular();
    Atleta& acumular(const Atleta& atl);
    const bool comparar(Atleta&) const;
    void exibir() const;
};

void inline Atleta::calcular(){
    
    if(tentativas != 0)
        percentual = 100.0f * acertos / tentativas;
    else
        percentual = 0;
}