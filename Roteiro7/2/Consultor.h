#ifndef CONSULTOR_H
#define CONSULTOR_H
#include "Funcionario.h"

class Consultor: public Funcionario{
public:
	Consultor(std::string, int, float);
	virtual float getSal(void){return 1.1*Funcionario::getSal();}
	virtual float getSal(float p){return ((p/100)+1)*Funcionario::getSal();}

};

#endif
