#include <string>
class ContaBancaria {

private:
    std::string nomeCliente;
    int numeroConta;
    double saldo;

public:
    void criarConta(std::string nome, int numero, double saldo);
    void exibir ();
    void depositar(double valor);
    void sacar(double valor);    
};