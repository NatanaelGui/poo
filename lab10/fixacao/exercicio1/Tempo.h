#include <iostream>
using namespace std;

class Tempo
{
private:
    int horas;
    int minutos;

public:
    Tempo(int h = 0, int m = 0);
    Tempo operator+(const Tempo &) const;
    Tempo operator+(int) const;
    friend Tempo operator+(int, Tempo&);
    friend ostream& operator<<(ostream&, string&);
    friend ostream& operator<<(ostream&, Tempo&);    
    friend istream& operator>>(istream&, Tempo&);
};