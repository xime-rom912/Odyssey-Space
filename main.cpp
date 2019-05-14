#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

int ValidarEntrada();
bool isValidInt(string numeroEnCadena);
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


int ValidarEntrada() {

	string eleccionCadena;
	bool key = false;
	int eleccionEntero = 0;
	
	do {
		cin >> eleccionCadena;
		int validacion = isValidInt(eleccionCadena);
		try {
			if (validacion != 0) {
				string::size_type sz;
				eleccionEntero = stoi(eleccionCadena, &sz);
				if (eleccionEntero >= 1 && eleccionEntero <= 2) {
					return 1;
				} 
				else {
					throw 1;
				}
			}
			else {
				throw "Ingrese un entero";
			}
		}
		catch (const char* ErrorUno) {
			cout << ErrorUno << endl;
		}
		catch (int ErrorDos) {
			cout << "Seleccione la opcion 1 o 2" << endl;
		}
	} while (key != true);
}

bool isValidInt(string numeroEnCadena) {
	int inicio = 0;
	int i = 0;
	bool valido = true;
	bool signo = false;

	int tamanioDeCadena = numeroEnCadena.size();

	if (tamanioDeCadena == 0)
		valido = 0;
	if (numeroEnCadena.at(0) == '-' || numeroEnCadena.at(0) == '+') {
		inicio = 1;
		signo = true;
	}
	if (signo && tamanioDeCadena == 1)
		valido = false;

	for (i = inicio; valido && i < tamanioDeCadena; i++) {
		if (!isdigit(numeroEnCadena.at(i)))
			valido = false;
	}
	return valido;
}

