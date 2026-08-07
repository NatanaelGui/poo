#include <iostream>
#include "Pilha.h"
using namespace std;

int main()
{
    
    cout << "Digite uma palavra: ";

    Item ch;
    Pilha string_ch;
    string compara;
    while (cin.get(ch) && ch != '\n'){

        string_ch.Empilhar(ch);
        compara += ch;
    }
    
    cout << "Empilhando e desempilhando fica: ";    
    int i = 0;
    bool isPalindromo = true; 
    while (!string_ch.Vazia()){
        
        string_ch.Desempilhar(ch);
        
        if(isPalindromo && tolower(compara[i]) != tolower(ch))
            isPalindromo = false;

        cout << ch;
        ++i;
    }
    cout << '\n';

    if(isPalindromo)
        cout << "A palavra eh um palindromo." << endl;
    else 
        cout << "A palavra nao eh um palindromo." << endl;    

    return 0;
}
