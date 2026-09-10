#include <iostream>
#include "Tempo.h"
using std::cout;
using std::endl;

Tempo::Tempo(){
    
    horas   = 0;
    minutos = 0;
}

Tempo::Tempo(int h, int m){
    
    horas   = h;
    minutos = m;
}

Tempo Tempo::operator*(const int inteiro) const {

    Tempo temp {horas, minutos};
    
    if(temp.horas <= 0 || inteiro <= 0)
        return 0;
            
    if(temp.minutos == 0){
        temp.horas *= inteiro; 
        return temp;
    }

    int minutosTotal = temp.minutos * inteiro;

    temp.horas    =  temp.horas * inteiro;
    temp.horas   += minutosTotal / 60;
    temp.minutos  = minutosTotal % 60;    
                               
    return temp;
}

Tempo Tempo::operator-(Tempo t) const {
    
    Tempo temp;
    int totalM1, totalM2;
    
    totalM1 = horas * 60 + minutos;
    totalM2 = t.horas * 60 + t.minutos;

    const int resultado = totalM1 - totalM2;

    if(resultado != 0){
        temp.horas   = resultado / 60;
        temp.minutos = resultado % 60;
        return temp;
    }

    temp.horas   = 0;
    temp.minutos = 0;
    return temp;
}

void Tempo::Adicionar(int h, int m){
    
    horas   += h;
    minutos += m;

    horas   = minutos / 60;
    minutos = minutos % 60;
}

void Tempo::Resetar(int h, int m){

    horas   = h;
    minutos = m;
}

Tempo Tempo::operator+(const Tempo & t) const{
    
    Tempo soma;
    soma.horas   = horas   + t.horas;
    soma.minutos = minutos + t.minutos;

    soma.horas   += soma.minutos / 60;
    soma.minutos %= 60;

    return soma;
}

void Tempo::Exibir() const{
    
    cout << "Horas: "   << horas << endl;
    cout << "Minutos: " << minutos << endl;
}

const Tempo& Tempo::operator-= (Tempo & t) {

    if(horas == 0 && minutos == 0){
        horas   = 0;
        minutos = 0;
        return *this;
    }
    
    const int resultado = (horas * 60 + minutos) - (t.horas * 60 + t.minutos);
    if(resultado > 0) {
        horas   = resultado / 60;
        minutos = resultado % 60;
        return *this;
    }

    horas   = 0;
    minutos = 0;
    return *this;
}

const Tempo& Tempo::operator+= (Tempo & t) {
    
    horas += t.horas;
    
    horas   += (minutos + t.minutos) / 60;
    minutos = (minutos + t.minutos) % 60;

    return *this;
}

bool Tempo::operator== (const Tempo & t) const {
    return (horas + minutos) == (t.horas + t.minutos);
}

ostream& Tempo::operator>>(ostream& os) const {
    os << horas << ':' << minutos;
    return os;
}

ostream& operator>>(Tempo& tempo, ostream& os) {
    
    os << tempo.horas << ':' << tempo.minutos;
    return os;
}