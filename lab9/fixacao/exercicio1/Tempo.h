class Tempo {

private:
    int horas;
    int minutos;

public:
    Tempo();
    Tempo(int h, int m = 0);

    void Adicionar(int h, int m = 0);
    void Resetar(int h = 0, int m = 0);
    void Exibir() const;    
    
    Tempo operator-(Tempo) const;
    Tempo operator*(const int inteiro) const;
 
    Tempo operator+(const Tempo & t) const;
    const Tempo& operator-= (Tempo & t);
    const Tempo& operator+= (Tempo & t);
};
