#include <iostream>
#include "Packet.h"
using namespace std;

Packet::Packet() {
    packet = {0, 0, 0, 0};
    cont = 0;
}

void Packet::send() {
    cout << packet.all << endl;
}

void Packet::begin() {
    cont = 0;        
}

void Packet::end() {
    cont = 0;
}

short& Packet::operator[](int index) {

    switch(index){
        case 0:
            return packet.part.w;
            break;
        case 1:
            return packet.part.x;            
            break;
        case 2:
            return packet.part.y;
            break;
        case 3:
            return packet.part.z;            
            break;
        default:
            cout << "Erro: Pacote maior que quatro shorts" << endl;            
            return packet.part.w = 0;

    }        
}

ostream& operator<<(ostream& os, Packet& p) {
    os  << p.packet.part.w << ' ' 
        << p.packet.part.x << ' '
        << p.packet.part.y << ' '
        << p.packet.part.z;
    
    return os;
}

istream& operator>>(istream& is, Packet& p) {
    is  >> p.packet.part.w 
        >> p.packet.part.x 
        >> p.packet.part.y
        >> p.packet.part.z;
    
    return is;
}