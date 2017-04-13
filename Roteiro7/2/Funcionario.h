#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

class Funcionario{
private:
	int mat;
	float sal;
	std::string nome;
public:
	void setNome(std::string n){nome = n;}
	void setMat(int m){mat = m;}
	void setSal(float s){sal = s;}

	std::string getNome(){return nome;}
	int getMat(){return mat;}
	virtual float getSal(){return sal;}

};

#endif
