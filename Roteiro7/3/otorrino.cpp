#include "otorrino.h"
#include <iostream>
#include <string>

using namespace std;

otorrino::otorrino(string n, float a, float p)
{
    nome = n;
    altura = a;
    peso = p;
}
string otorrino::endoscopia()
{
    return "Realizando Endoscopia...";
}
