#include <iostream>
#include <iomanip>
using namespace std;

class ContaBancaria{

	public:
		string nomeCliente;
		int numeroConta;
		float saldo;		

		void exibeDados() {
			cout << "\n========= Banco =========\n";
			cout << "Nome: " << nomeCliente << endl;
			cout << "Numero da conta: " << numeroConta << endl;
			cout << fixed << setprecision(2) << "Saldo: " << saldo << endl;
		}

		float depositaDinhero(const float deposito) {
			cout << endl << "\nDeposito concluido com sucesso!" << endl;
			return saldo += deposito;
		}

		float sacaDinhero(const float saque) {
			saldo -= saque;
			cout << endl << "\nSaque concluido com sucesso!" << endl;
			return saldo;
		}
};

int main() 
{
	ContaBancaria conta;
	conta.nomeCliente = "Alberto Santos";
	conta.numeroConta = 23061932;
	conta.saldo = 14.000f;
	
	char ch;
	float dinheiro;
	do 
	{
		conta.exibeDados();
		cout << "\n ==================\n";
		cout << "(0) Para sair" << endl;
		cout << "(1) Para depositar" << endl;
		cout << "(2) Para sacar" << endl;
		cout << "Opcao: ";
		cin >> ch;
		
		switch (ch) 
		{
			case '0':
				cout << "Bye bye!!" << endl;
				break;

			case '1':
				cout << "Digite o valor de deposito: ";			
				cin >> dinheiro;
				conta.depositaDinhero(dinheiro);				
				break;

			case '2':
				cout << "Digite o valor de saque: ";				
				cin >> dinheiro;
				conta.sacaDinhero(dinheiro);				
				break;

			default :
				cout << endl << "Erro: Opcao invalida" << endl;
		}

	} while (ch != '0');	
}