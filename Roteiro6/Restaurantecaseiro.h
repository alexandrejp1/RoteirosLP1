#ifndef RESTAURANTECASEIRO_H_INCLUDED
#define RESTAURANTECASEIRO_H_INCLUDED
#include "Mesaderestaurante.h"
#define MESA 50


class RestauranteCaseiro{
    MesaDeRestaurante mesarestaurante[MESA];
public:
    void adicionaAoPedido();
    float calculaTotalRestaurante();

};



#endif // RESTAURANTECASEIRO_H_INCLUDED
