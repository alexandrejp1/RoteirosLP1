#include <iostream>
#include <string>
#include "figurageometrica.h"
#include "triangulo.h"

using namespace std;

triangulo::triangulo(std::string n,float b,  float a){
	setNome(n);
	setBase(b);
	setAltura(a);
}

void triangulo::calcularArea(){

	float area;

	area = (getBase()*getAltura())/2;

	cout <<"A area do "<<getNome()<< " de altura "<< getAltura() <<" e base "<< getBase()<< " eh "<< area<< endl;

}
