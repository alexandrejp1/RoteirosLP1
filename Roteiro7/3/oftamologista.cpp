#include "oftamologista.h"
#include <iostream>
#include <string>

using namespace std;

oftamologista::oftamologista(string n, float a, float p)
{
    nome = n;
    altura = a;
    peso = p;
}
string oftamologista::exameDeVista()
{
    return "Realizando Exame de Vista...";
}
