#include "Packager.h"
#include <iostream>
using namespace std;

Packager::Packager(int max)
{    
    this->max = max;    
    packager = new Data[max]();
}

Packager::~Packager()
{
    delete[] packager;
}

Data& Packager::operator[](const unsigned index) {
        
    if( index < max )
        return packager[index];

    cout << "Erro: Index fora do limite do array" << endl;        
    static Data lixo = 0; // Recebe o valores que foi passado pro array, fora do limite dele
    return lixo;
}

Pack Packager::send() {    

    Pack newPack = {0};
    Data *newPackager;
    
    if(max <= 4){
        // Os Parenteses sao para inicializar todos os elementos com zero
        newPackager = new Data[4]();
        for(int i = 0; i < max; ++i)
            newPack.part.data[i] = packager[i];
        
        max = 0;
        
    } else {

        for(int i = 0; i < 4; ++i)
            newPack.part.data[i] = packager[i];
        
        max -= 4;

        newPackager = new Data[max]();
        for(int i = 0; i < max; ++i)
            newPackager[i] = packager[i + 4];
    }
        
    for(int i = 0; i < 4; ++i)
        cout << newPack.part.data[i];
    cout << endl;    
        
    delete[] packager;
    packager = newPackager;
    return newPack;
}