#include <iostream>
#include "Pessoa.h"
using namespace std;

int main()
{    
    
    Pessoa p = Pessoa("Alberto", "Santos");
    p.Exibir();
    cout << endl;
    p.Formal();
    return 0;
}
