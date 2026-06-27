#include <iostream>
#include "Rect.h"
Rect::Rect(){}

Rect::Rect(int a_, int b_){
    a.MoveTo(a_, b_);
    b.MoveTo(a_, b_);
}

Rect::Rect(int ax, int ay, int bx, int by){
    
    a.MoveTo(ax, ay);
    b.MoveTo(bx, by);
}

void Rect::Translate(int dx, int dy) {
    a.Translate(dx, dy);
    b.Translate(dx, dy);
}

void Rect::exibe() {
    std::cout << "Cordenada A: ";
    a.Print();
    
    std::cout << "Cordenada B: ";
    b.Print();    
}