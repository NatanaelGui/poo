#include <iostream>
#include "Packet.h"
using namespace std;

int main()
{
    cout << "Entre com os dados do pacote:\n";
    Packet packet;
    cin >> packet;

    cout << "Enviando pacote...\n";
    packet.send();
    cout << "Conteudo do pacote:\n";
    cout << packet << endl;
}
