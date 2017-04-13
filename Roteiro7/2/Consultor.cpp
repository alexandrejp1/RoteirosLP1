#include <iostream>
#include <string>
#include "Funcionario.h"
#include "Consultor.h"

Consultor::Consultor(std::string n, int m, float s){
	setNome(n);
	setSal(s);
	setMat(m);
}
