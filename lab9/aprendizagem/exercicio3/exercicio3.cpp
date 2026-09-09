#include <iostream>
#include "Packager.h"
using namespace std;

int main()
{
    Packager packager{10};
    cout << "Adicionando numeros..." << endl;    
    packager[0] = 9;
    packager[1] = 2;
    packager[2] = 8;
    packager[3] = 7;
    packager[4] = 1;
    packager[5] = 3;
    packager[6] = 5;
    packager[7] = 8;
    packager[8] = 1;
    packager[9] = 6;
    packager[10] = 4; // deve exibir mensagem de erro e

    // // nenhum valor deve ser armazenado
    cout << "Conteudo da Empacotadora:" << endl;
    for (int i = 0; i < 10; ++i)
        cout << packager[i] << " ";
    cout << "Criando e enviando pacotes..." << endl;
    packager.send(); // deve exibir 9287
    packager.send(); // deve exibir 1358
    Pack p = packager.send(); // deve exibir 1600
    cout << "Todos os bits em decimal do ultimo pacote: " << p.all;
}
