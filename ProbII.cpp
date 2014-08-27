#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#define RAND_MAX 2

int Cachipun(p1,p2,cachipun1,cachipun2){
    if(p1!=p2){
        if(p1-p2==2 or p2-p1==2){
            if(p1>p2)
                cachipun2=cahipun2++;
                cout<<"Gana el Jugador 2";
            else
                cachipun1=cachipun1++;
                cout<<"Gana el Jugador 1";
        }
        else{
            if(p1>p2)
                cachipun1=cachipun1++;
                cout<<"Gana el Jugador 1";
            else
                cachipun2=cachipun2++;
                cout<<"Gana el Jugador 2";
        }
    }
    else
        cout<<"Empate."<<endl;
    return ;
}

void VsComp(&cachipun1,&cachipun2){
    int p1,p2;
    do{
        cout<<"     Jugador 1: Elija su arma: "<<"      0. Piedra"<<"        1. Papel"<<"       2. Tijera"
        cin>>p1;
        p2=rand();



    }

}

void Vs1R(int &cachipun1, int &cachipun2,int c){
    do{
        p1=random();
        p2=random();
        if(p1!=p2){
            if(p1-p2==2 or p2-p1==2){
                if(p1>p2)
                    cachipun2=cahipun2++;
                    cout<<"Gana el Jugador 2";
                else
                    cachipun1=cachipun1++;
                    cout<<"Gana el Jugador 1";
            }
            else{
                if(p1>p2)
                    cachipun1=cachipun1++;
                    cout<<"Gana el Jugador 1";
                else
                    cachipun2=cachipun2++;
                    cout<<"Gana el Jugador 2";
            }
        }
        else
            cout<<"Empate."<<endl;
        c=c++;
    }while()
}

void ProbII(){
    int cachipun1,cachipun2,c;
    char m;
    cout<<"BIENVENIDO AL JUEGO!"<<endl<<"Los jugadores cuentan juntos "1... 2... 3... Ca chi pun!" y justo al acabar muestran todos al mismo tiempo una de sus manos, de modo que puede verse el arma que cada uno ha elegido."<<endl<<"El vencedor será quién gane dos veces de tres o tres de cinco."<<endl<<endl<<"Con esto sabido, COMENCEMOS!"<<endl;
    do{
            cout<<endl<<"       MODO DE JUEGO"<<endl<<"    A. 1 vs Comp"<<endl<<"  B. 1 vs 1"<<endl<<"  C. 1 vs 1 (Random)"<<endl<<"    S.Salir"<<endl;
            cin>>m;
            c=0;
            switch(m){
                case 'A':
                    VsComp(cachipun1,cachipun2,c);
                    break;
                case 'B':
                    Vs1(cachipun1,cachipun2,c);
                    break;
                case 'C':
                    Vs1R(cachipun1,cachipun2,c);
                case 'S':
                    m='S';
                    break;
                case default:
                    cout<<"Opción ingresada no válida";
            }while(m!='S')
}
