#include <random>
#include <iomanip>
#include <iostream>
using namespace std;

inline void evaluar( void );
int main() {

	evaluar();

	system("pause");
}

inline void evaluar( void ) {
	default_random_engine motor(static_cast<unsigned short int>(time(0))); // motor de creacion de numeros aleatorios.
	uniform_int_distribution <unsigned short int > intAleatorio(1, 3); // funcion a llamar con parametro 'motor', rango creacion motor aleatorio

	srand(intAleatorio(motor)); // semilla para rand()
	
	{ // Nuevo alcance de variables.
		enum struct Estado : unsigned short int { EMPEZAR = 1, ACABAR, CONTINUAR };

		register Estado estado;

		switch (1 + rand() % 3) // numero aleatorio a partir de la semilla de srand.
		{ 
		case 1:
			estado = Estado::EMPEZAR;
			break;
		case 2:
			estado = Estado::ACABAR;
			break;
		case 3:
			estado = Estado::CONTINUAR;
		default:
			break;
		}

		cout << "El estado es: ";
		if (estado == Estado::EMPEZAR)
			cout << "'Empezar'";
		else if (estado == Estado::ACABAR)
			cout << "'ACABAR'";
		else if (estado == Estado::CONTINUAR)
			cout << "'CONTINUAR'";

		cout << endl;
	}
}