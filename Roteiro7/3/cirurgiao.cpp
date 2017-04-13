#include "cirurgiao.h"
#include <iostream>
#include <string>

using namespace std;


cirurgiao::cirurgiao(string n, float a, float p)
{
    nome = n;
    altura = a;
    peso = p;
}

string cirurgiao::cirurgiaCardiaca(){
    return "Realizando Cirurgia Cardiaca...";
}
