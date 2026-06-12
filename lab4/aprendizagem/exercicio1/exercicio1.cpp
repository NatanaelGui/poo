#include <iostream>
#include "Rect.h"
using namespace std;

int main()
{
    
    Rect retangulo;
    retangulo.Create(1, 2, 5, 6);
    retangulo.exibe();
    
    retangulo.Translate(7, 8);
    
    cout << "Movendo..." << endl;
    retangulo.exibe();
    return 0;
}
