#include <string>
using std::string;

// -----------------------------------------------
// Declaracao da Classe Jogo
// -----------------------------------------------

class Jogo
{
private:
	string nome;									      // nome do jogo
	float preco;									      // preco do jogo
	int horas;										      // quantidade de horas jogadas
	float custo;									      // valor por hora jogada
	
	void calcular();								      // calcular custo da hora jogada
	
public:
	Jogo();											      // construtor padrao
	Jogo(const string& titulo,						      // construtor da classe
		 float valor = 0, 
		 int tempo = 0);	
	~Jogo();										      // destrutor

	const Jogo& comparar(const Jogo& jogo) const;	      // compara dois jogos
    const Jogo& maisJogado(const Jogo &a, const Jogo &b) const; // retorna o jogo mais jogado
    const Jogo& menorCusto(const Jogo &a, const Jogo &b) const; // retorna o jogo mais barato
	void atualizar(float valor);					      // atualizar preço do jogo
	void jogar(int tempo);							      // registrar horas jogadas
	void exibir() const;							      // mostrar informacoes
};

// -----------------------------------------------
// Metodos Inline
// -----------------------------------------------

inline void Jogo::calcular()
{
	if (horas > 0)
		custo = preco / horas;
}

// -----------------------------------------------