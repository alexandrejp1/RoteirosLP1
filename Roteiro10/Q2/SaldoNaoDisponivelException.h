#ifndef SALDONAODISPONIVELEXCEPTION_
#define SALDONAODISPONIVELEXCEPTION_

#include <iostream>
#include <exception>
#include <string>

class SaldoNaoDisponivelException: public std::exception{
public:
    SaldoNaoDisponivelException(void){}

    virtual const char* what(){
        return "Saque nao disponivel.";
    }

};
#endif // SALDONAODISPONIVELEXCEPTION_
