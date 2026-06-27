class Point
{
private:
    int x;
    int y;

public:
    Point();
    Point(int px, int py);
    void MoveTo(int px, int py);
    void Translate(int dx, int dy);
    void Print();
};