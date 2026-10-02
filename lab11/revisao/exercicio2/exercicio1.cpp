#include <iostream>
#include "Vetor.h"
using namespace std;

int main()
{           
    
    Vetor v {10, 10};
    double raio, angulo;
    raio = v.Magnitude();
    angulo = v.Angulo();

    Vetor resultado {raio, angulo};
    cout << resultado << endl;
}