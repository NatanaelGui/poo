#include <iostream>
#include "Packet.h"
using namespace std;

Packet::Packet() {
    packet = {0};
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

void Packet::operator<<(const short data) {
    
    switch(cont++){
        case 0:
            packet.part.w = data;
            break;
        case 1:
            packet.part.x = data;
            break;
        case 2:
            packet.part.y = data;
            break;
        case 3:
            packet.part.z = data;            
            break;
    }
}

void Packet::operator>>(short &data) {
    
    switch(cont++){
        case 0:
            data = packet.part.w;
            break;
        case 1:
            data = packet.part.x;            
            break;
        case 2:
            data = packet.part.y;
            break;
        case 3:
            data = packet.part.z;            
            break;
    }
}