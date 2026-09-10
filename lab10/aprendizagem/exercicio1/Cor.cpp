#include "Cor.h"

Cor::Cor() {
    r = 0;
    g = 0;
    b = 0;
}

Cor::Cor(unsigned r, unsigned g, unsigned b) {
    this->r = r;
    this->g = g;
    this->b = b;
}

Cor::~Cor(){}

istream& operator>>(istream& is, Cor& cor) {
    is >> cor.r >> cor.g >> cor.b;
    return is;
}

ostream& operator<<(ostream& os, const Cor& cor) {    
    os << "\x1b[38;2;" << 
    cor.r << ';' << cor.g << ';' << cor.b << 'm';
    
    return os;
}

Cor operator*(const Cor& corX, const Cor& corY) {
    Cor result;
    result.r = corX.r * corY.r / 255;
    result.g = corX.g * corY.g / 255;
    result.b = corX.b * corY.b / 255;
    
    return result;
}