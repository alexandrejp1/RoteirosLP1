#include "figurageometrica.h"
#include "quadrado.h"
#include <iostream>
#include <string>

using namespace std;

quadrado::quadrado(std::string n, float l){
	setNome(n);
	setLado(l);
}

void quadrado::calcularArea(){

	float area;

	area = getLado()*getLado();

	cout <<"A area do "<<getNome()<< " de lado "<< getLado() << " eh "<< area<< endl;

}
