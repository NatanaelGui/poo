#include <iostream>
#include "Tempo.h"
using namespace std;

Tempo::Tempo(int h, int m) {
    horas = h;
    minutos = m;
}

Tempo Tempo::operator+(const Tempo &t) const {
    Tempo tempo = *this;
    
    tempo.horas  += t.horas;
    tempo.horas  += (tempo.minutos + t.minutos) / 60;
    tempo.minutos = (tempo.minutos + t.minutos) % 60;
    
    return tempo;
}

Tempo Tempo::operator+(int num) const {
    Tempo t = *this;
    t.horas += num;
    
    return t;
}

Tempo operator+(int num, Tempo& tempo){    
    tempo.horas += num;
    return tempo;
}

ostream& operator<<(ostream& os, string& s) {
    return os << s;
}

ostream& operator<<(ostream& os, Tempo& t) {
    return os << t.horas << "h:" << t.minutos << "m";
}

istream& operator>>(istream& is, Tempo& t) {
    char ch;
    is >> t.horas >> ch >> t.minutos;
    
    return is; 
}