#include "medico.h"
#include <string>

using namespace std;

medico::medico(){

}

medico::medico(string n, float a, float p)
{
	nome = n;
    altura = a;
    peso = p;
}
