#include <string>
#include <iostream>
#include "ContaBancaria.h"

void ContaBancaria::criarConta(std::string nome, int numero, double valor) {

	nomeCliente = nome;
	numeroConta = numero;
	saldo = valor;
}
void ContaBancaria::exibir(){
	std::cout << "Nome: " << nomeCliente << std::endl;
	std::cout << "Numero da conta: " << numeroConta << std::endl;
	std::cout << "Salto: " << saldo << std::endl;
	std::cout << "----------------" << std::endl;

}
void ContaBancaria::depositar(double valor) {
	saldo += valor;
}
void ContaBancaria::sacar(double valor) {
	saldo -= valor;
}