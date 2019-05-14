#include <iostream>
#include <windows.h>
#include <string>
#include <assert.h>
#include <conio.h>

using namespace std;

int ValidarEntrada();
bool isValidInt(string numeroEnCadena);
void cuartelMilitar ();
int buscarTuMismo();
int opci = 0;

struct Personaje{

    string nombre;
    int vida = 100;
    int arma = 25;

}Character1;

void introduc(string nomb_usu) { //	Esta es la funcion del inicio del juego, resive como parametro el nombre del usuario
    system("cls");
    cout<<"\t\t\tInstrucciones: "
        <<"\nLee atentamente la historia que aparece y toma tu desicion sabiamente."
        <<"\nDigita el numero correspondiente a cada mision"
        <<"\nEso es todo, esperamos que disfrutes el juego."
        <<"\n-Presiona cualquier tecla para seguir-"<<endl;
    if(getch()){
        system("cls");//borra lo escrito en la consola
        cout << "\tTe damos la bienvenida " << nomb_usu << "\nEres un vajero espacial asignado a una mision de exploracion en el planeta X910,"
            << "al volver a la tierra despues de la larga mision, te das cuenta de que ha sido atacada por una raza de alienigenas "
            << "lengendarios y ancestrales. Al ir a buscar a tu familia te enteras de que han sido raptados y no hay ningun rastro de ellos. "
            << "La decision es tuya, puedes formar tu destino para lograr rescatar a tu esposa e hija. Que decides hacer?"
            << "\n1. Ir al cuartel militar."
            << "\n2. Llorar y no hacer nada."
            << "\n\nTu desicion: ";
        int acceso = ValidarEntrada();
        if (acceso == 1) {
            cuartelMilitar();;
        }
        else {
            cout<<"\nLa verdad ya que se le puede hacer, mejor vive tu vida en otro planeta.\n";
        }

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
    //cin>> choice;
    int acceso = ValidarEntrada();
	if (acceso == 1) {

		cout <<"Wow, el moribundo ha probado ser realmente util, parece ser un militar retirado o algo asi"<<endl;
        cout<<"Me ha dado informacion valiosa, me ha dicho donde esconde su arsenal lo que queda de la humanidad"<<endl;
        cout<<"Pero mas importante me ha dado la localización de los rehenes, el apenas escapo de ahí no esta lejos puedo recuperar a mi familia pronto!"<<endl;
        cout<<"Si pierdo tiempo en ir a buscar las armas podrian re localizar el campo de concentracion y de nuevo no sabria donde buscar, de poco me servirian"<<endl;
        cout<<"¿Que decides hacer?"<<endl;
        cout<<"\n1.Ir por armas" <<  "\n2.Ir por los rehenes";

	}
	else{
         //cout<<"Has ido a rescatar rehenes, te acercas a tu meta pero tu falta de euipamiento te hace morir en la tarea"<<endl;
	 buscarTuMismo();
	}

}

int buscarTuMismo()
{

    cout<<"Buscando por el cuartel encuentras la sala de registros con videos de lo sucedido, luego de verlos te has enterado de la cruda verdad"<<endl;
    cout<<"Una extrana raza de extraterrestres ha invadido el planeta mientras estas ausente y ha exlavizado a la mayoria de los humanos en la tierra"<<endl;
    cout<<"incluyendo a tu familia..."<<endl;
    cout<<"\nSales desconcertado de la sala y justo afuera te encuentras con un alien enemigo que esta distraido"<<endl;
    cout<<"\n¿Que decides hacer?"<<endl;
    cout<<"Te escabulles lentamente sin que te vea hacia la armeria (presiona 1)    "<<"Te dejas llevar por tu enojo y lo atacas (presiona 2)"<<endl;
    int acceso = ValidarEntrada();
    if (acceso == 1){
        //Llamar a funcion de armeria  (borrar cout de abajo...)
        cout <<"te diriges a la armeria..."<<endl;
    }

    if (acceso == 2){
            cout<<"Te acercas lentamente a tu enemigo por detras, pero por accidente tiras un par de cajas causando lago de ruido"<<endl;
            cout<<"esto hace que se de cuenta de tu presencia y te ataca tambien"<<endl;
            cout<<"Te golpea fuertemente empujandote hacia una esquina en donde encuentras un viejo tubo oxidado, el cual tomas para defenderte"<<endl;
            cout<<"Tu enemigo se abalanza hacia ti para acabar contigo, pero logras esquivarlo y le clavas el tubo por la espalda eliminandolo"<<endl;
            cout<<"\nHas vencido, pero has treminado herido..."<<endl;
            cout<<"Perdiste      puntos de vida"<<endl;
                          // x
            cout<<"\nAhora te diriges hacia la armeria en busca de algun arma para poder defenderte"<<endl;
            //Llamar funcion de armeria

    }
}

int main()
{
	cout << "----------------Odyssey Space---------------" << endl;
	cout << "\tMenu" << endl;
	cout << "\n\t1. Iniciar juego" << endl;
	cout << "\t2. Salir" << endl;
	cout << "Tu respuesta es: ";
	int acceso = ValidarEntrada();
	if (acceso == 1) {
		nombre();
	}else{
	    cout<<"Gracias por jugar Odyssey Space";
	}

	return 0;
}

//Esta función recibe un entero que le permite identificar la
//opción seleccionada una vez de haber pasado por la validacion de cadena o entero
int ValidarEntrada() {

	string eleccionCadena;
	bool key = false;
	int eleccionEntero = 0;

	do {
		cin >> eleccionCadena;
		int validacion = isValidInt(eleccionCadena);
		try {
			if (validacion != 0) {
				//string::size_type sz;
				eleccionEntero = stoi(eleccionCadena); //&sz
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
//Esta función determina si los valores ingresados son enteros o cadenas de texto
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
