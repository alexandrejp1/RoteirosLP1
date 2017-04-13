#ifndef CIRURGIAO_H
#define CIRURGIAO_H
#include "medico.h"
#include <string>

using namespace std;



class cirurgiao : public medico
{
    private:
        string espec = "Cirurgia";

    public:
        cirurgiao(string, float, float);
        string getEspec(){return espec;}
        string cirurgiaCardiaca();


};
