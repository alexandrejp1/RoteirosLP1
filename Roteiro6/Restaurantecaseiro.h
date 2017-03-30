#ifndef RESTAURANTECASEIRO_H_INCLUDED
#define RESTAURANTECASEIRO_H_INCLUDED
#include "Mesaderestaurante.h"
#define MESA 50
#include <iostream>

class RestauranteCaseiro{
public:
    MesaDeRestaurante mesarestaurante[MESA];
    void adicionaPedido();
    float calculaTotalRestaurante();

};



#endif // RESTAURANTECASEIRO_H_INCLUDED
