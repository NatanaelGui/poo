#include <iostream>
#include "Vetor.h"
using namespace std;

int main()
{           
    Vetor v = Vetor{20, 20, Vetor::RET};
    Vetor v1 = Vetor{10, 10, Vetor::RET};
        
    v = v.adicao(v1);
    v.print();

    v = v.subtracao(v1);
    v.print();

    v = v.multiplicacao(2);
    v.print();

    v = v.multiplicacaoV(2, v);
    v.print();

    v = v.subtracaoUnaria();
    v.print();
    
}