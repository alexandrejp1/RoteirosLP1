#include "ginecologista.h"
#include <iostream>
#include <string>

using namespace std;

ginecologista::ginecologista(string n, float a, float p)
{
    nome = n;
    altura = a;
    peso = p;
}
string ginecologista::colposcopia()
{
    return "Realizando Colposcopia...";
}
