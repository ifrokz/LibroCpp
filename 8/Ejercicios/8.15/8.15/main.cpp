#include <iostream>
using namespace std;

void recogerInstrucciones(int *arr, size_t end) {
	cout << end << endl;
	for (size_t id = 0; id < end; id++) {
		cin >> arr[id];

		if (arr[id] == -99999) { break; }
	}

	for (size_t id = 0; id < end; id++) {
		cout << id << " ? ";
		if (arr[id] == -99999) { 
			cout << arr[id] << endl;
			break; 
		}
		else {
			cout << "+" << arr[id] << endl;;
		}
	}
}
void imprimirYVaciarMemoria(int *arr, size_t end) {
	cout << "\n\nRegistros:" << endl;
}
int main() {
	cout <<
		"*** Bienvenido a Simpletron ***\n"
		"\n"
		"*** Por favor, introduzca en su programa una instruccion    ***\n"
		"*** (o palabra de datos) a la vez. Yo le mostrare el        ***\n"
		"*** numero de ubicacion y un signo de interrogacion (?).    ***\n"
		"*** Entonces usted escribira la palabra para esa ubicacion. ***\n"
		"*** Escriba un valor centinela -99999 para dejar de         ***\n"
		"*** introducir su programa.                                 ***\n";

	int memoria[100] = {};
	int acumulador = 0; // Representa el registro del acumulador.
	int contadorInstrucciones = 0; // Lleva el registro de la ubicacion en memoria que contiene la instruccion que se esta ejecutando.
	int codigoDeOperacion = 0; //la operacion que se esat ejecutando ahora mismo (2 digitos de la izq)
	int operando = 0; // Ubicacion de memoria en la que va a operar la instruccion actual (dos ultimos digitos).
	int registroDeInstruccion = 0; // Siguiente instruccion a ejecutar desde la memoria.

	recogerInstrucciones(memoria, sizeof memoria / sizeof memoria[0]);




	while (memoria[contadorInstrucciones] != -99999) {
		registroDeInstruccion = memoria[contadorInstrucciones];
		codigoDeOperacion = registroDeInstruccion / 100;
		operando = registroDeInstruccion % 100;

		switch (codigoDeOperacion)
		{
		case 1: // lee
			cin >> memoria[operando];
			break;
		case 11: // escribe
			break;
		case 20: // carga
			acumulador = memoria[operando];
			break;
		case 21: // almacena
			break;
		case 30: // suma
			acumulador += memoria[operando];
			break;
		case 31: // resta
			break;
		case 32: // divide
			break;
		case 33: // multiplica
			break;
		case 40: // bifurca
			break; 
		case 41: // bifurcanegativo 
			break;
		case 42: // bifircacero
			break;
		case 43: // alto
			cout << "*** Termino la ejecucuin de Simpleton. ***" << endl;
			break;
		default:
			break;
		}
	}

	system("pause");
}