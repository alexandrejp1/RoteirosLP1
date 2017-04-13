#ifndef FIGURAGEOMETRICA_H_
#define FIGURAGEOMETRICA_H_
#include <string>

class figurageometrica{
private:
	std::string nome;
public:
	std::string getNome(){return nome;}
	void setNome(std::string n);
	virtual void calcularArea() = 0;
};

#endif
