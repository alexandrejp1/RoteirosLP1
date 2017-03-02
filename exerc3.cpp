#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int n,ran,i,y;
    float x=0,ar[7]={0,0,0,0,0,0,0};
    srand(time(NULL));
    cout << "Digite um numero de vezes que o dado sera lançado" << endl;
    cin >> n;

    for(i=1;i<=n;i++){
        ran = rand()%6 + 1;
        ar[ran]++;
    }
    for (i=1;i<7;i++){
        x = ar[i]/n;
        cout << "Para a face " << i << " tem um percentual de " << x << endl;
    }
}
