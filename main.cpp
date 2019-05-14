#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

int ValidarEntrada();
bool isValidInt(string numeroEnCadena);
void cuartelMilitar ();
int opci = 0;

struct Personaje{

    string nombre;
    int vida = 100;
    int arma = 25;
    
}Character1;

void introduc(string nomb_usu) {
	system("cls");//borrar consola
	cout << "\tTe damos la bienvenida " << nomb_usu << "\nEres un vajero espacial asignado a una mision de exploracion en el planeta X910,"
		<< "al volver a la tierra despues de la larga mision, te das cuenta de que ha sido atacada por una raza de alienigenas "
		<< "lengendarios y ancestrales. Al ir a buscar a tu familia te enteras de que han sido raptados y no hay ningun rastro de ellos. "
		<< "La decision es tuya, puedes formar tu destino para lograr rescatar a tu esposa e hija. Que decides hacer?"
		<< "\n1. Ir al cuartel militar."
		<< "\n2. Llorar y no hacer nada";
	//cin >> opci;
	int Acceso = ValidarEntrada();
	if (Acceso == 1) {
		cout << "(ejemplo)opcion 1 escogida" << endl;
	}
	else {
		cout << "(ejemplo)opcion 2 escogida" << endl;
	}
	switch (opci){
   	case 1:
		cuartelMilitar();
        /* code */
        break;
    	case 2: 
        	cout<<"\nLa verdad ya que se le puede hacer, mejor vive tu vida en otro planeta.\n";
        break;

    }

}

void nombre() {
	string nombre;
	cout << "Escribe tu nombre por favor: ";
	cin >> nombre;
	introduc(nombre);
}
void cuartelMilitar (){
    int choice;
    cout<<"En el cuartel militar hay un sujeto moribundo, puedes pedirle ayuda, pero su condición podria causarte nada mas que problemas"<<endl;
    cout<<"Que decides hacer"<<endl;
    cout<<"Ayudar al moribundo (presiona 1)"<<   "Seguir por tu cuenta(presiona 2)"<<endl;
    cin>> choice;
    if (choice == 1){
        cout <<"Wow, el moribundo ha probado ser realmente util, parece ser un militar retirado o algo asi"<<endl;
        cout<<"Me ha dado informacion valiosa, me ha dicho donde esconde su arsenal lo que queda de la humanidad"<<endl;
        cout<<"Pero mas importante me ha dado la localización de los rehenes, el apenas escapo de ahí no esta lejos puedo recuperar a mi familia pronto!"<<endl;
        cout<<"Si pierdo tiempo en ir a buscar las armas podrian re localizar el campo de concentracion y de nuevo no sabria donde buscar, de poco me servirian"<<endl;
        cout<<"¿Que decides hacer?"<<endl;
        cout<<"Ir por armas (presiona 1)" <<  "Ir por los rehenes (presiona 2)"
        if (choice==2){
            cout<<"Has ido a rescatar rehenes, te acercas a tu meta pero tu falta de euipamiento te hace morir en la tarea"<<endl;
            
        }
    }
int main()
{
	cout << "----------------Odyssey Space---------------" << endl;
	cout << "\tMenu" << endl;
	cout << "\n\t1. Iniciar juego" << endl;
	cout << "\t2. Salir" << endl;
	cout << "Tu respuesta es: ";
	//cin >> opci;
	int Acceso = ValidarEntrada();
	if (Acceso == 1 || Acceso == 2) {
		nombre();
	}

	//switch (opci) {
	//case 1:
		//nombre();
	//}

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
					if (eleccionEntero == 1) {
						return 1;
					}
					else {
						return 2;
					}
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

