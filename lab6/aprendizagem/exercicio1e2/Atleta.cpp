#include <iostream>
#include "Atleta.h"

Atleta::Atleta(){
    
    acertos = 0;
    tentativas = 0;
    percentual = 0.0f;
}

Atleta::Atleta(int acertos_, int tentativas_){
    
    acertos = acertos_;
    tentativas = tentativas_;
    percentual = 0;
}

void Atleta::exibir(Atleta& atl) const{
    
    std::cout << "Acertos: " << atl.acertos << " ";
    std::cout << "Tentativas: " << atl.tentativas << " ";
    std::cout << "Percentual: " << atl.percentual << "\n";
}

Atleta& Atleta::acumular(Atleta& soma, const Atleta& atl){
    
    soma.tentativas += atl.tentativas;
    soma.acertos += atl.acertos;
    calcular(soma);
    return soma;
}