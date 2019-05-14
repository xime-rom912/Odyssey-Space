#include <iostream>
#include <windows.h>
#include<stdlib.h>
#include<string>

using namespace std;
int opci = 0;

struct Personaje{

    string nombre;
    int vida = 100;
    int arma = 25;
    
}Character1;


void introduc (string nomb_usu){
    system("cls");//borrar consola
    cout<<"Te damos la bienvenida "<<nomb_usu<<"\n\nEres un viajero espacial asignado a una mision de exploracion en el planeta X910,"
    <<"al volver a la tierra despues de la larga mision, te das cuenta de que ha sido atacada por una raza de alienigenas "
    <<"lengendarios y ancestrales. Al ir a buscar a tu familia te enteras de que han sido raptados y no hay ningun rastro de ellos. "
    <<"La decision es tuya, puedes formar tu destino para lograr rescatar a tu esposa e hija. Que decides hacer?"
    <<"\n\n1. Ir al cuartel militar."
    <<"\n2. Llorar y no hacer nada."
    <<"\n\nQue decides? ";
    cin>>opci;

    switch (opci){
    case 1:

        /* code */
        break;
    case 2: 
        cout<<"\nLa verdad ya que se le puede hacer, mejor vive tu vida en otro planeta.\n";
        break;

    }
    

}


void nombre(){
    
    cout<<"Escribe tu nombre por favor: ";
    cin>>Character1.nombre;
    introduc(Character1.nombre);
}

void primeraParte(){

 cout<<"Te encuetras a gente escondida y preuntas que paso.";
 

}



int main(){

    cout<<"----------------Space Odissey---------------"<<endl;
    cout<<"\n\t\tMenu"<<endl;
    cout<<"\n\t\t1. Iniciar juego"<<endl;
    cout<<"\t\t2. Salir"<<endl;
    cout<<"\nTu respuesta es: ";
    cin>>opci;
    if(opci==1) nombre();


return 0;
}