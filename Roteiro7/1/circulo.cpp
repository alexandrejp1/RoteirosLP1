#include <iostream>
#include <string>
#include "FiguraGeometrica.h"
#include "Circulo.h"
using namespace std;

circulo::circulo(std::string n,float b){
	setNome(n);
	setRaio(b);
}

void circulo::calcularArea(){

	float area;

	area = 3.1415*getRaio()*getRaio();

	cout <<"A area do "<<getNome()<< " de Raio "<< getRaio()<< " eh "<< area<< endl;

}
