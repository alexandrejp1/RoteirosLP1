#ifndef QUADRADO_H_
#define QUADRADO_H_
#include <string>
#include "figurageometrica.h"

class quadrado: public figurageometrica{
private:
	float lado;
public:
	quadrado(std::string, float);
	void setLado(float l){lado = l;}
	float getLado(){return lado;}
	virtual void calcularArea();
};

#endif
