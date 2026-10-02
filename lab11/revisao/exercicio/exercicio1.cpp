#include <iostream>
#include "Vetor.h"
using namespace std;

int main()
{           
    Vetor v = Vetor{10, 10, Vetor::RET};
    v.SetCoord(Vetor::POL);
    cout << v << endl;    
}