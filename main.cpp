#include <iostream>
#include "kabo.h"

using namespace std;

int main()
{
    char o;
    cout<<"     MENU DE JUEGOS"<<endl;
    cout<<"1. Lanzar Moneda"<<endl;
    cout<<"2. Cachipun!"<<endl;
    cout<<"3. Un truco..."<<endl;
    cout<<"0. Salir."<<endl;
    switch(o){
    case '1':
        ProbI();
        break;
    case '2':
        ProbII();
        break;
    case '3':
        ProbIII();
        break;
    case '0':
        return 0;
        break;
    case default:
            cout<<"Opción ingresada no válida";
            }
}
