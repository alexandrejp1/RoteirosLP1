//#include "Restaurantecaseiro.h"
#include "Pedido.h"
#include "Mesaderestaurante.h"
#include <string>
#include <iostream>
#include <stdlib.h>

using namespace std;

int MesaDeRestaurante::cont = 0;

void MesaDeRestaurante::adicionaAoPedido(){
    cout << "Digite o numero do pedido: " << endl;
    cin >> pedido[cont].numero;
    cout << "Digite a descricao do pedido: " << endl;
    cin >> pedido[cont].descricao;
    cout << "Digite a quantidade do pedido: " << endl;
    cin >> pedido[cont].quantidade;
    cout << "Digite o preco do pedido: " << endl;
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
