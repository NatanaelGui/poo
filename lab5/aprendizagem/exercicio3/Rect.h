#include "Point.h"
class Rect
{
private:
    Point a;
    Point b;

public:
    
    Rect();
    Rect(int a_, int b_);
    Rect(int ax, int ay, int bx, int by);
    void Translate(int dx, int dy);
    void exibe();
};