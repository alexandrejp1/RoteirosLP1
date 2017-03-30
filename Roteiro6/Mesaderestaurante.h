#ifndef MESADERESTAURANTE_H_
#define MESADERESTAURANTE_H_
#include "Pedido.h"
#define TAM 300

class MesaDeRestaurante{
    static int cont;
    Pedido pedido[TAM];
public:
    void adicionaAoPedido();
    void zeraPedido();
    float calculaTotal();

};
int MesaDeRestaurante::cont = 0;


#endif // MESADERESTAURANTE_H_INCLUDED
