#ifndef OFTAMOLOGISTA_H_
#define OFTAMOLOGISTA_H_
#include "medico.h"
#include <string>

using namespace std;


class oftamologista : public medico
{

    private:
        string espec = "Oftamologia";
    public:
        oftamologista(string, float, float);
        string getEspec(){return espec;}
        string exameDeVista();

};

#endif // OFTAMOLOGISTA_H
