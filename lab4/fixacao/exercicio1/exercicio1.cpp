#include <iostream>
#include "Point.hpp"
using namespace std;

int main()
{
    
    Point p;
    cout << "Tamando: " << sizeof(p) << endl; // O tamanho de um objeto na memoria eh igual o tamanho de seus atributos
    return 0;
}
