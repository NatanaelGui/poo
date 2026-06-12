#include <iostream>
#include "Point.h"
using namespace std;

int main()
{
    
    Point p;
    cout << "Tamando: " << sizeof(p) << endl; // O tamanho de um objeto na memoria eh igual o tamanho de seus atributos
    p.MoveTo(1080, 720);
    
    p.exibir();
    return 0;
}
