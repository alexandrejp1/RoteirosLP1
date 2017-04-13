#include <iostream>
#include <string>
#include "medico.h"
#include "oftamologista.h"
#include "cirurgiao.h"
#include "otorrino.h"
#include "ginecologista.h"

using namespace std;


int main(){

    cirurgiao Joao ("Joao", 1.80, 85);
    oftamologista Alice("Alice", 1.65, 57);
    otorrino Aercio("Aercio", 1.78, 85.5);
    ginecologista Claudia("Claudia", 1.70, 60);

    cout << "Dr(a). " << Pedro.getNome() << ", especializado(a) em " << Pedro.getEspec() << " está: "
    << Pedro.cirurgiaCardiaca() << endl;

    cout << "Dr." << Pedro.getNome() << " tem " << Pedro.getAltura() << "m e pesa " << Pedro.getPeso() << " kg" << endl;

    cout << "Dr(a). " << Maria.getNome() << ", especializado(a) em " << Maria.getEspec() << " está: "
    << Maria.exameDeVista() << endl;

    cout << "Dr(a). " << Vitor.getNome() << ", especializado(a) em " << Vitor.getEspec() << " está: "
    << Vitor.endoscopia() << endl;

    cout << "Dr(a). " << Claudia.getNome() << ", especializado(a) em " << Claudia.getEspec() << " está: "
    << Claudia.colposcopia() << endl;


	return 0;
}
