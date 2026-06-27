#include <iostream>
#include "Rect.h"
using namespace std;

int main(int argc, char const *argv[])
{
    
    Rect j {100, 200, 100, 200};
    j.Translate(100, 200);
    j.exibe();
    return 0;
}
