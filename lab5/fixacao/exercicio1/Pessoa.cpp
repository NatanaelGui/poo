#include <string>
#include <iostream>
using namespace std;
#include "Pessoa.h"

Pessoa::Pessoa(){}

Pessoa::Pessoa(const string &nome, const string &sobrenome) {
    nome_ = nome;
    sobrenome_ = sobrenome;
}

// exibe apenas nome
void Pessoa::Exibir() {
    cout << nome_ << endl;
} 

// exibe nome e sobrenome
void Pessoa::Formal() {
    cout << nome_  << " " << sobrenome_ << endl;
}