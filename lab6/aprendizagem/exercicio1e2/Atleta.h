class Atleta {

private:
    int acertos;
    int tentativas;
    float percentual;

public:
    Atleta();
    Atleta(int acertos_, int tentativas_);
    void inline calcular(Atleta& atl);
    void exibir(Atleta& atl) const;
    Atleta& acumular(Atleta& soma, const Atleta& atl);
};

void inline Atleta::calcular(Atleta& atl){
    
    if(atl.tentativas != 0)
        atl.percentual = 100.0f * atl.acertos / atl.tentativas;
    else
        atl.percentual = 0;
}