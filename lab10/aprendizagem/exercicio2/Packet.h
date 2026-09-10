#include <iostream>
using namespace std;

union Data
{
    struct
    {
        short x;
        short y;
        short z;
        short w;
    } part;

    long long all;
};

class Packet
{

private :
    int cont;    
    Data packet;
    
public:
    Packet();
    void send();
    void begin();
    void end();
    void operator<<(short data);
    void operator>>(short &data);
    short& operator[](int index);
    friend ostream& operator<<(ostream&, Packet&);
    friend istream& operator>>(istream&, Packet&);
};