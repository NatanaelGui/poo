#include <iostream>
#include "Cor.h"
using namespace std;

const char normal[] {"\x1b[0m"};
int main()
{

    Cor azul{0, 163, 215};
    Cor laranja{255, 170, 0};
    cout << "Entre com o codigo de uma cor:\n";
    Cor cor;
    cin >> cor;
    Cor verde = azul * laranja;
    cout << verde << "VERDE" << endl;
    cout << cor << "SUA COR" << endl;
    
    // volta para a cor padrão
    cout << normal;
}