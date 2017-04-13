#include <iostream>
#include "Trabalhador.h"
#include "TrabalhadorAssalariado.h"
#include "TrabalhadorPorHora.h"

using namespace std;

int main()
{
	TrabalhadorAssalariado a;
	TrabalhadorPorHora h;



	a.calcularPagamento(60);
	h.calcularPagamento(60);

	cout << a.getSalarioM() << endl;
	cout << h.getSalarioM() << endl;

	return 0;
}
