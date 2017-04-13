#ifndef GINECOLOGISTA_H_
#define GINECOLOGISTA_H_
#include "medico.h"
#include <string>

using namespace std;



class ginecologista : public medico
{
    private:
        string espec = "Ginecologia";

    public:
        ginecologista(string, float, float);
        string getEspec(){return espec;}
        string colposcopia();


};

#endif
