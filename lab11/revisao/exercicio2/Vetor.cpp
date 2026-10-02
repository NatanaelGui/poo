#include "Vetor.h"

const double GrausPorRad = 45.0 / atan(1.0);
Vetor::Vetor() {
    x = 0;
    y = 0;    
}

Vetor::Vetor(double n1, double n2) {
    
    x = n1;
    y = n2;
}

double Vetor::Magnitude() {
    return sqrt(pow(x, 2) + pow(y, 2));    
}

double Vetor::Angulo() {
    return atan2(y, x) * GrausPorRad;
    
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
    return os << "(" << v.x  << ", " << v.y << ')';
}
