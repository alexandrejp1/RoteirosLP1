#include <iostream>
#include <string>
#include "figurageometrica.h"
#include "quadrado.h"
#include "triangulo.h"
#include "circulo.h"

int main(){

	quadrado a("Quadrado", 5.0);
	triangulo b("Triangulo", 10.0, 2.0);
	circulo c("circulo", 5.0);

	a.calcularArea();
	b.calcularArea();
	c.calcularArea();

	return 0;

}
