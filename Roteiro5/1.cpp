#include <iostream>

using namespace std;

int main(){

int x, y;

    while(1){

cout << "Digite um numero: " << endl;
cin >> x;

        if (x==0){
        break;
        }
        if (x>=y){
        y=x;
        }
    }
cout << "O maior numero digitado: " << y << endl;
}
