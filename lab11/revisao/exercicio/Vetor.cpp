#include "Vetor.h"

const double GrausPorRad = 45.0 / atan(1.0);
Vetor::Vetor() {
    x = 0;
    y = 0;
    ang = 0;
    mag = 0;
    rep = RET;
}

Vetor::Vetor(double n1, double n2, Coord tipo) {
    rep = tipo;

    if(rep == RET) {
        x = n1;
        y = n2;
        SetMag();
        SetAng();
    } else {
        mag = n1;
        ang = n2 / GrausPorRad;
        SetX();
        SetY();
    }
}

void Vetor::SetMag() {
    mag = sqrt(pow(x, 2) + pow(y, 2));
}

void Vetor::SetAng() {
    ang = atan2(y, x);
}

void Vetor::SetX() {
    x = mag * cos(ang);
}

void Vetor::SetY() {
    y = mag * sin(ang);
}

Vetor Vetor::operator+(const Vetor &v) const {    
    return Vetor(x + v.x, y + v.y);
}

Vetor Vetor::operator-(const Vetor &v) const {
    return Vetor(x - v.x, y - v.y);
}

Vetor Vetor::operator-() const {
    return Vetor(-x, -y);
}

Vetor Vetor::operator*(double n) const {
    return Vetor(n * x, n * y);
}

//Metodos Friends
Vetor operator*(double n, const Vetor &v) {
    return Vetor(n * v.x, n * v.y);
}

ostream &operator<<(ostream &os, const Vetor &v) {
    
    if(v.rep == Vetor::RET){
        return os << "(x,y) = (" << v.x  << ", " << v.y << ')';
    }

    return os << "(m,a) = (" << v.mag  << ", " << v.ang * GrausPorRad << ')';
}