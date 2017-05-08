#include <iostream>
#include <exception>
#include <string>
#include "Conta.h"
#include "IConta.h"
#include "ContaEspecial.h"
#include "SaldoNaoDisponivelException.h"
using namespace std;

int main(){
    double e;


ContaEspecial b("Joao", 1000, 1021, 2000);
Conta a("Oswaldo", 1000, 1020, 2000);


    cout << "Saque desejado na Conta A: " << endl;
    cin >> e;

    try{

       a.sacar(e);

    }
        catch(SaldoNaoDisponivelException &x){
        cout << x.what() << endl;
        cout << "\n" << endl;
        }

    a.DefinirLimite();

    b.sacar(200);
	b.depositar(100);
	b.DefinirLimite();

	cout << "Saldo A: " << a.getSaldo() << endl;
    cout << "Limite A: " << a.getLimite() << endl;
    cout << "\n" << endl;
    cout << "Saldo B: " << b.getSaldo() << endl;
    cout << "Limite B: " << b.getLimite() << endl;


}
