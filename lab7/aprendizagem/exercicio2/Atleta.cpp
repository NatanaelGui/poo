#include <iostream>
#include <iomanip>
#include "Atleta.h"

Atleta::Atleta(){
    
    this->nome = "";
    acertos = 0;
    tentativas = 0;
    percentual = 0.0f;
}

Atleta::Atleta(string nome, int acertos_, int tentativas_){
    
    this->nome = nome;
    acertos = acertos_;
    tentativas = tentativas_;
    calcular();
}

Atleta& Atleta::acumular(const Atleta& atl){
    
    this->tentativas += atl.tentativas;
    this->acertos += atl.acertos;
    calcular();
    return *this;
}

const bool Atleta::comparar(Atleta& atleta) const {
    
    return (this->percentual >= atleta.percentual);
}

void Atleta::exibir() const{
    
    std::cout << std::fixed;
    std::cout.precision(2);
    std::cout << "\n ========== " << nome << " ==========\n ";
    std::cout << "Acertos: "      << acertos << " ";
    std::cout << "Tentativas: "   << tentativas << " ";    
    std::cout << "Percentual: " << percentual << "\n";
}