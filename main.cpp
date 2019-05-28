#include <iostream>
#include <windows.h>
#include <string>
#include <assert.h>
#include <conio.h>

using namespace std;

int ValidarEntrada();
bool isValidInt(string);
void cuartelMilitar ();
void armeria();
int buscarTuMismo();
void nave_alienigena();
void sala_de_prisioneros();
int *vida_extra = NULL;
int opci = 0;
int acceso;

struct Personaje{
    int vida = 100;
    void quitar_vid(int cant) { vida -= cant;}
    void aum_vid(int cant) { vida += cant;}
}carac;

int time (){
    
}
void g_over(){
    system("cls");
    system("color 0C");
    cout<<"                          GAME OVER";
}

void armeria(){
    system("cls");
    cout<<"Sales del cuartel armado hasta las chanclas"
        <<"\nQue decides?"
        <<"\n1.Subes a tu nave" << "\n2.Subes a la nave alinigena"
        << "\n\nTu desicion: ";
    acceso = ValidarEntrada();
    if (acceso == 1) {
        system("cls");
        cout<<"Te diriges a la base, descubren tu nave, abren fuego y mueres"
            <<"\n\n-Presiona cualquier tecla para seguir-"<<endl;
        if(getch())
            g_over();
    }
    else {
        nave_alienigena();
    }
}
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
            << "\nal volver a la tierra despues de la larga mision, te das cuenta de que ha sido atacada por una raza de alienigenas "
            << "\nlengendarios y ancestrales. Al ir a buscar a tu familia te enteras de que han sido raptados"
            << "\ny no hay ningun rastro de ellos. La decision es tuya, puedes formar tu destino para lograr rescatar a tu esposa e hija."
            << "\nQue decides hacer?"
            << "\n1. Ir al cuartel militar."
            << "\n2. Llorar y no hacer nada."
            << "\n\nTu desicion: ";
        acceso = ValidarEntrada();
        if (acceso == 1) {
            cuartelMilitar();;
        }
        else {
            system("cls");
            cout<<"La verdad ya que se le puede hacer, mejor vive tu vida en otro planeta."
                <<"\n\n-Presiona cualquier tecla para seguir-"<<endl;
            if(getch())
                g_over();
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
    system("cls");
    int choice;
    cout<<"En el cuartel militar hay un sujeto moribundo, puedes pedirle ayuda, pero su condicion podria causarte"
        <<"\nnada mas que problemas"
        <<"\nQue decides hacer?"
        <<"\n1.Ayudar al moribundo"<<   "\n2.Seguir por tu cuenta"
        <<"\n\nTu desicion: ";
    //cin>> choice;
    acceso = ValidarEntrada();
	if (acceso == 1) {
        system("cls");
		cout <<"Wow, el moribundo ha probado ser realmente util, parece ser un militar retirado o algo asi"
            <<"\nMe ha dado informacion valiosa, me ha dicho donde esconde su arsenal lo que queda de la humanidad"
            <<"\nPero mas importante me ha dado la localización de los rehenes, el apenas escapo de ahí no esta lejos"
            <<"\npuedo recuperar a mi familia pronto! Si pierdo tiempo en ir a buscar las armas podrian"
            <<"\nre localizar el campo de concentracion y de nuevo no sabria donde buscar, de poco me servirian"
            <<"\nQue decides hacer?"
            <<"\n1.Ir por armas" <<  "\n2.Ir por los rehenes"
            <<"\n\nTu desicion: ";
        acceso = ValidarEntrada();
        if (acceso == 1) {
            system("cls");
            armeria();
        } else {
            system("cls");
            cout<<"Mueres por la falta de armas para defenderte"
                <<"\n\n-Presiona cualquier tecla para seguir-"<<endl;
            if(getch())
                g_over();
        }
	}else{
        buscarTuMismo();
	}

}

int buscarTuMismo()
{
    system("cls");
    cout<<"Buscando por el cuartel encuentras la sala de registros con videos de lo sucedido, luego de verlos te has"
        <<"\nenterado de la cruda verdad. Una extrana raza de extraterrestres ha invadido el planeta mientras"
        <<"\nestas ausente y ha exlavizado a la mayoria de los humanos en la tierra"
        <<"\nincluyendo a tu familia..."
        <<"\nSales desconcertado de la sala y justo afuera te encuentras con un alien enemigo que esta distraido"
        <<"\nQue decides hacer?"
        <<"\n1.Te escabulles lentamente sin que te vea hacia la armeria"<<"\n2.Te dejas llevar por tu enojo y lo atacas"
        <<"\n\nTu desicion: ";
    acceso = ValidarEntrada();
    if (acceso == 1){
        armeria();
    }else {
        system("cls");
        carac.quitar_vid(20);
        cout<<"Te acercas lentamente a tu enemigo por detras, pero por accidente tiras un par de cajas causando lago de ruido"
            <<"\nesto hace que se de cuenta de tu presencia y te ataca tambien. Te golpea fuertemente empujandote hacia"
            <<"\nuna esquina en donde encuentras un viejo tubo oxidado, el cual tomas para defenderte. Tu enemigo se abalanza"
            <<"\nhacia ti para acabar contigo, pero logras esquivarlo y le clavas el tubo por la espalda eliminandolo"
            <<"\n\n------------Perdiste 15 puntos de vida-------------"
            <<"\n\nAhora te diriges hacia la armeria en busca de algun arma para poder defenderte"
            <<"\nAntes te percatas que hay un objeto decides \n1.Recogerlo \n2.Dejarlo"
            <<"\n\nTu desicion: ";
        acceso = ValidarEntrada();
        if (acceso == 1){
            vida_extra = new int(35);
            assert(vida_extra != NULL);
        }
        armeria();
    }
	return 0;
}

int familia(){
    system("cls");
    cout<<"Los has liberado, ahora tienes que salir de ahi, pero te encuentras con un"
        <<"\nelite, luchas contra el y...";
    if(vida_extra != NULL)
        carac.aum_vid(*vida_extra);
    cout<<carac.vida;
    if(carac.vida>=70){
        cout<<"\nlo has podido matar, escapas de la tierra en una nave con tu familia, para no volver.\n"
            <<"\n**************************FIN********************************\n\n";
    }else{
        cout<<"\nCon las heridas que tienes no logras vencerlo, pero tu familia ha escapado de la tierra\n"
            <<"\n\n-Presiona cualquier tecla para seguir-"<<endl;
            if(getch())
                g_over();
    }


    return 0;
}

int prisioneros(){
    system("cls");
    cout<<"\nDecides liberar a todos los prisioneros, alertando a los alienigenas, entre las personas liberaste hay soldados"
        <<"\nentrenados que ayudaran a enfrentarte a los alienigenas, consiguiendo armas de aliens derrotados,"
        <<"\npara escapar del lugar, se inicia un enfrentamiento y se encuentran con el lider alien y entre todos tratan de matarlo, "
        <<"\nal enfrentarlo muchos mueren, tu por la espalda mientras otros lo estan distrayendo, con una espada de energia lo apuñalas"
        <<"\nen el corazon, lo has derrotado, pero se levanta y dice \"debiste apuntar a la cabeza\"."
        <<"\n\n1.Con tu entrenamiento en la milicia eres capaz de enfrentarte 1 a 1 con usando la espada de energia."
        <<"\n2.Ves en el suelo varias granadas de plasma con las cuales podrias vencerlo."
        <<"\n\nLa decision es tuya: ";
        acceso=ValidarEntrada();

        switch (acceso){
        case 1:
                cout<<"\n\n\nHacer tu mejor intento pero no puedes contra el y mueres. La raza humana ha perdido.\n\n\n";
                g_over();
            break;
        case 2:
            cout<<"Sabes lo que tienes que hacer. Corres hacia el interceptando todos sus ataques y te aferrar a su espalda y activas"
            "\nlas granadas, acabando con el jefe y con todos los aliens, como un efecto colmena, sacrificandote asi por la humanidad, "
            "\nseras recordado como un heroe.\n\n";
            cout<<"\n***************************************************FIN*********************************************************\n\n";
            break;

        }


    return 0;

}

int main()
{
	system("color 8B");
	cout << "----------------SPACE ODYSSEY---------------" << endl;
	cout << "\tMenu" << endl;
	cout << "\n\t1. Iniciar juego" << endl;
	cout << "\t2. Salir" << endl;
	cout << "Tu respuesta es: ";
	acceso = ValidarEntrada();
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
		catch(std::out_of_range){
            		cout<<"Seleccione la opcion 1 o 2" << endl;
        	}
	} while (key != true);
	return 0;
}
/**Esta función contiene el escenario y lo que sucede en la nave alien
*@param no recibe parámetros
*@return void
*/
void nave_alienigena(){
    system("cls");
	cout<<"Te diriges a la base alien y pasas desapercibido por la nave alienigena."
        <<"\nHas logrado entrar a la base y debes actuar rapido"
        <<"\nQue decides hacer?"
        <<"\n1.Escabullirse en la sala de mando y enfrentar a los alien"
        <<"\n2.Abrir fuego a discrecion"
        <<"\n\nTu desicion: ";
	acceso = ValidarEntrada();
	if (acceso == 1) {
        system("cls");
        carac.quitar_vid(30);
		cout<<"------------Perdiste 15 puntos de vida-------------"
            <<"\nHas encontrado el lugar donde estan los prisioneros"
            <<"\n\n-Presiona cualquier tecla para seguir-";
        if(getch())
            sala_de_prisioneros();
	}
	else {
		system("cls");
		cout << "Te han descubierto y no logras salir con vida"
			 <<"\n\n-Presiona cualquier tecla para seguir-"<<endl;
		if (getch())
			g_over();
	}
}
void sala_de_prisioneros(){
	system("cls");
	cout<<"Te encuentras con las celdas de los prisioneros y has identificado la celda"
		<<"\ndonde esta tu familia, pero escuchas que se aproximan los alien puedes"
		<<"\nescapar con cautela unicamente con tu familia o liberar a todos los "
		<<"\nprisioneros y llamar la atencion de todas las unidades alien"
        <<"\nLa decision es tuya: "
        <<"\n1.Liberar unicamente a tu familia"
        <<"\n2.Liberar a todos"
        <<"\n\nTu desicion: ";
	acceso = ValidarEntrada();
	if (acceso == 1) {
		familia();
	}
	else if(acceso==2) {
        prisioneros();
	}
}
/**Esta función determina si los valores ingresados son enteros o cadenas de texto, resive un string y devuelve un valor booleano
*@param numeroEnCadena, recibe una cadena de texto
*@return regresa un dato booleano, retorna 1 si los datos ingresados son enteros y 0 si son caracteres
*/
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
