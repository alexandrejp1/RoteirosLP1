#include "Restaurantecaseiro.h"
#include "Pedido.h"
#include "Mesaderestaurante.h"
#include <string>
#include <stdlib.h>
#include <iostream>

using namespace std;

void MesaDeRestaurante::adicionaAoPedido(){
    cout << "Digite o numero do pedido:" << endl;
    cin >> pedido[cont].numero;
    cout << "Digite a descricao do pedido:" << endl;
    cin >> pedido[cont].descricao;
    cout << "Digite a quantidade:" << endl;
    cin >> pedido[cont].quantidade;
    cout << "Digite o preco:" << endl;
    cin >> pedido[cont].preco;
    cont++;

}
void MesaDeRestaurante::zeraPedido(){
    int i;
    for(i=0;i<cont;i++){
        pedido[i].numero = 0;
        pedido[i].descricao = "";
        pedido[i].quantidade = 0;
        pedido[i].preco = 0.0;
    }
}
float MesaDeRestaurante::calculaTotal(){
    float total = 0;
    int i;
    for(i=0;i<cont;i++){
        total += pedido[i].preco * pedido[i].quantidade;
    }
    return total;
}
void RestauranteCaseiro::adicionaAoPedido(){
    int n;
    cout << "Digite o numero da mesa: " << endl;
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

