#include "Restaurantecaseiro.h"
#include "Pedido.h"
#include "Mesaderestaurante.h"
#include <string>
#include <iostream>
#include <stdlib.h>

using namespace std;

void RestauranteCaseiro::adicionaPedido(){
    int n;
    cout << "Digite a mesa do restaurante: " << endl;
    cin >> n;
    mesarestaurante[n].adicionaAoPedido();

}
float RestauranteCaseiro::calculaTotalRestaurante(){
    int i;
    float total = 0;
    for(i=0;i < MESA;i++){
        total += mesarestaurante[i].calculaTotal();
    }
    return total;

}

