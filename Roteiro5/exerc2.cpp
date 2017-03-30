#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int n1,sorteado;
    srand(time(NULL));
    sorteado = rand()%100 +1;
    while(1){
        cout << "Digite um numero ou 0 para parar"<< endl;
        cin >> n1;
        if(n1 == 0){
            break;
        }
        if(n1 == sorteado){
            cout << "Voce Acertou"<< endl;
            break;
        }
        if(n1 < sorteado){
            cout << "Muito baixo. Tente novamente" << endl;
        }
        if(n1 > sorteado){
            cout << "Muito Alto. Tente novamente" << endl;
        }
    }
}
