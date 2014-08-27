#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#define RAND_MAX 1

using namespace std;

int LanzarMoneda(int m){
    int m;
    m=rand();
    return m;
}

void ProbI(){
    int g=0,p=0,m,aux;
    cout<<"BIENVENIDO AL JUEGO!"<<endl<<"Ganas cuando sale alternadamente la cara y el sello."<<endl<<"Pierdes cuando un mismo lado de la moneda sale 4 veces."<<endl<<endl<<"Con esto sabido, COMENCEMOS!"<<endl;
    LanzarMoneda(aux)
    do{
        LanzarMoneda(m);
        if(m==0)
            cout<<"Moneda: Cara"<<endl;
        else
            cout<<"Moneda: Sello"<<endl;
        if(m!=aux){
            g=g++;
            p=0;
        }
        else{
            g=0;
            p=p++;
        }
        aux=m;
        system("pause");
    }while(g<=4 or p<=4);
    if(g==4)
        cout<<"Usted gana el juego";
    if(p==4)
        cout<<"Usted pierde el juego";
}
