#ifndef MESADERESTAURANTE_H_INCLUDED
#define MESADERESTAURANTE_H_INCLUDED

#include "Pedido.h"
#define TAM 300
#include <iostream>

class MesaDeRestaurante{
    static int cont;
    Pedido pedido[TAM];
public:
    void adicionaAoPedido();
    void zeraPedido();
    float calculaTotal();

};



#endif // MESADERESTAURANTE_H_INCLUDED
