#ifndef TRIANGULO_H
#define TRIANGULO_H
#include "figurageometrica.h"
#include <string>

class triangulo: public figurageometrica{
private:
	float base, altura;
public:
	triangulo(std::string, float, float);
	void setBase(float b){base = b;}
	float getBase(){return base;}
	void setAltura(float a){altura = a;}
	float getAltura(){return altura;}
	virtual void calcularArea();


};

#endif
