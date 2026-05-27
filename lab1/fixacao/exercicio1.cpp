#include <iostream>
#include <string>
using namespace std;
struct Jogo
{
	string nome; // nome do jogo
	float preco; // preco do jogo
	int horas; // quantidade de horas jogadas
	float custo; // valor por hora jogada
};

Jogo adquirir(const string& titulo, float valor);
void atualizar(Jogo& jogo, float valor);
void jogar(Jogo& jogo, int tempo);
void exibir(const Jogo& jogo);

Jogo adquirir(const string& titulo, float valor) {
	
	Jogo jogo = { " ", 0, 0, 0 };
	jogo.nome = titulo;
	jogo.preco = valor;	
	jogo.custo = valor;
	return jogo;
}

void atualizar(Jogo& jogo, float valor) {

	jogo.preco = valor;	
	if (jogo.preco != 0 && jogo.horas != 0)
		jogo.custo = jogo.preco / jogo.horas;
	else
		jogo.custo = jogo.preco;
}

void jogar(Jogo& jogo, int tempo) {

	jogo.horas += tempo;
	
	if (jogo.preco != 0 && jogo.horas != 0)
		jogo.custo = jogo.preco / jogo.horas;
	else
		cout << "Erro: Nenhum jogo encontrado" << endl;
}

void exibir(const Jogo& jogo) {
	cout << "\n====== " << jogo.nome << " ======\n";		
	cout << "Preco: " << "R$" << jogo.preco << endl;
	cout << "Horas Totais: " << jogo.horas << 'h' << endl;
	cout << "Custo: " << "R$" << jogo.custo << "/h" << endl;
}

int main()
{
	
	char ch;
	float preco;
	int tempo;
	string nome;
	static Jogo jogo = {" ", 0, 0, 0};

	do {
		cout << "\n+-----------------------------+\n";
		cout << "(0) Para sair" << endl;
		cout << "(1) Para adquirir um novo jogo" << endl;
		cout << "(2) Para atualizar o valor do jogo atual" << endl;
		cout << "(3) Para atualizar o tempo jogado" << endl;
		cout << "(4) Para exibir os dados do jogo atual" << endl;
		cout << "Opção: ";
		cin >> ch;

		switch (ch) {
			case '0':
				cout << "Bye bye!!" << endl;
				break;
		
			case '1':
				cout << "Digite o nome do jogo: ";			
				cin.ignore(100, '\n');
				getline(cin, nome);
				cout << "Digite o preco do jogo: ";
				cin >> preco;

				jogo = adquirir(nome, preco);
				break;

			case '2':
				if(jogo.nome != " "){
					cout << "Digite o novo preco do jogo: ";
					cin >> preco;
					atualizar(jogo, preco);
				}
				else{
					cout << "Erro: Nenhum jogo encontrado" << endl;
				}
				break;

			case '3':
				cout << "Tempo jogado da ultima sessao(horas): ";
				cin >> tempo;
				if (jogo.nome != " ")
					jogar(jogo, tempo);
				else
					cout << "Erro: Nenhum jogo encontrado" << endl;
				break;

			case '4':			
				if (jogo.nome != " ")
					exibir(jogo);
				else
					cout << "Erro: Nenhum jogo encontrado" << endl;
				break;
			default:
				cout << "Opcao invalida" << endl;
				break;
		}
		
	} while (ch != '0');

}
