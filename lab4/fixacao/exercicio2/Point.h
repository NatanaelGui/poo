class Point
{
private:
    int x;
    int y;

public:
    void MoveTo(int px, int py);
    void Translate(int dx, int dy);
    
    void exibir(){
        std::cout << "Valor de X: " << x << std::endl;
        std::cout << "Valor de Y: " << y << std::endl;
    }
};
