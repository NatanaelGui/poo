#include <iostream>
using namespace std;

class Cor {

private:
    unsigned r;
    unsigned g;
    unsigned b;

public:
    Cor();
    Cor(unsigned r, unsigned g, unsigned b);
    ~Cor();
    
    friend ostream& operator<<(ostream&, const Cor&);
    friend istream& operator>>(istream&, Cor&);
    friend Cor operator*(const Cor&, const Cor&);
};