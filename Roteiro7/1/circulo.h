#include <string>
#include "figurageometrica.h"
#ifndef CIRCULO_H_
#define CIRCULO_H_


class circulo: public figurageometrica{
private:
	float raio;
public:
	circulo(std::string, float);
	void setRaio(float r){raio = r;}
	float getRaio(){return raio;}
	virtual void calcularArea();
};

#endif
