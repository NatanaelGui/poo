class Tela
{
private:
    int posicaoX = 0;
    int posicaoY = 0;

public:
    void translate(int dx, int dy);
    void moveTo(int px, int py);
    void exibir();
};