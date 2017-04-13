#ifndef MEDICO_H_
#define MEDICO_H_
#include <string>

using namespace std;


class medico
{

    protected:
        string nome;
        float altura;
        float peso;

	public:
		medico();
        medico(string, float, float);
        string getNome(){return nome;}
        float getAltura(){return altura;}
        float getPeso(){return peso;}




 };

#endif // MEDICO_H
