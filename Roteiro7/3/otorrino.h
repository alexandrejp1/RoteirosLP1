#ifndef OTORRINO_H_
#define OTORRINO_H_
#include "medico.h"
#include <string>

using namespace std;



class otorrino : public medico
{
    private:
        string espec = "Otorrinolaringologia";

    public:
        otorrino(string, float, float);
        string getEspec(){return espec;}
        string endoscopia();


};

#endif
