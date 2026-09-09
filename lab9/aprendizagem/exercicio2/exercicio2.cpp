#include <iostream>
#include "Packet.h"
using namespace std;

int main()
{
    Packet packet;
    cout << "Empacotando..." << endl;
    packet[0] = 1;
    packet[1] = 2;
    packet[2] = 3;
    packet[3] = 4;
    packet[4] = 5;
    cout << "Enviando pacote..." << endl;
    cout << "Recebendo pacote..." << endl;
    cout << "Desempacotando..." << endl;
    short a = 0, b = 0, c = 0, d = 0, e = 0;
    a = packet[0];
    b = packet[1];
    c = packet[2];
    d = packet[3];
    e = packet[4];
    cout << a << b << c << d << e << endl;
}
