#include <iostream>
#include <windows.h>

using namespace std;
int opci = 0;

void introduc (string nomb_usu){
    system("cls");//borrar consola
    cout<<"\tTe damos la bienvenida "<<nomb_usu<<"\nEres un vajero espacial asignado a una mision de exploracion en el planeta X910,"
    <<"al volver a la tierra despues de la larga mision, te das cuenta de que ha sido atacada por una raza de alienigenas "
    <<"lengendarios y ancestrales. Al ir a buscar a tu familia te enteras de que han sido raptados y no hay ningun rastro de ellos. "
    <<"La decision es tuya, puedes formar tu destino para lograr rescatar a tu esposa e hija. Que decides hacer?"
    <<"\n1. Ir al cuartel militar."
    <<"\n2. Llorar y no hacer nada";
    cin>>opci;
}


void nombre(){
    string nombre;
    cout<<"Escribe tu nombre por favor: ";
    cin>>nombre;
    introduc(nombre);
}

int main()
{
    cout<<"----------------Odyssey Space---------------"<<endl;
    cout<<"\tMenu"<<endl;
    cout<<"\n\t1. Iniciar juego"<<endl;
    cout<<"\t2. Salir"<<endl;
    cout<<"Tu respuesta es: ";
    cin>>opci;
    switch(opci){
    case 1:
        nombre();
    }

    return 0;
}
