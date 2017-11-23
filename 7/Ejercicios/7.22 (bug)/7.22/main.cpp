#include <iostream>
#include <array>
#include <vector>
using namespace std;

const size_t columnasTablero = 8, filasTablero = columnasTablero;
array<array <unsigned short, filasTablero>, columnasTablero> tablero{};

const size_t cantidadMovimientos = 8;
array<int, cantidadMovimientos > horizontal{ 2,1,-1,-2,-2,-1,1,2 };
array <int, cantidadMovimientos > vertical{ -1,-2,-2,-1,1,2,2,1 };

unsigned short columnaActual = 4, filaActual = 3;


void mover(size_t ); // Realiza el movimiento y la llamada a las funciones necesarias.

// Comprueba si el movimiento propuesto se sale de los limites del tablero.
bool comprobarLimites(const unsigned short  &movimiento); 

// Calcula la cantidad de veces que se ha visitado la casilla destino de un movimiento concreto.
unsigned short obtenerPuntuacionCasilla(const unsigned short  &movimiento); 

// Devuelve el indice del mejor movimiento a realizar en funcion a la puntuacion.
unsigned short indiceMejorMovimiento(const array < unsigned short, cantidadMovimientos> &,const vector <unsigned short int > &);


int main() {
	for (size_t contador = 0; contador < 64; contador++) {
		cout << "Contador: " << contador;
		mover(contador);
	}

	system("pause");
}

void mover(size_t contador) {
	cout << "-" << contador << endl;
	array < unsigned short, cantidadMovimientos > puntuacionCasillas;
	vector < short unsigned int > indicesValidos;
	for (unsigned short movimiento = 0; movimiento < cantidadMovimientos; movimiento++)
		if (comprobarLimites(movimiento)) {
			puntuacionCasillas[movimiento] = obtenerPuntuacionCasilla(movimiento);
			indicesValidos.push_back(movimiento);
		}
		else
		{
			//cout << "Se ha superado los limites en el movimiento " << movimiento << endl;
		}
	
	
	cout << "Posicion actual: tablero["<< columnaActual <<"]["<< filaActual <<"]" << endl;
	for (const unsigned short &puntuacion : puntuacionCasillas)
		cout << puntuacion << " ";
	size_t movimiento = indiceMejorMovimiento(puntuacionCasillas, indicesValidos);
	cout << "La mejor puntuacion de casilla es para el movimiento:	" << movimiento << endl;
	
	/* BUG RELACIONADO CON LAS SIGUIENTES 3 LINEAS. (Si un movimiento tiene como destino una casilla de fuera del tablero ya no funciona)  */
	tablero.at(columnaActual + horizontal.at(movimiento)).at(filaActual + vertical.at(movimiento)) = contador;
	//columnaActual += horizontal.at(movimiento);
	//filaActual += vertical.at(movimiento);
	/* FIN DEL BUG  */
	cout << "Posicion actual: tablero[" << columnaActual << "][" << filaActual << "]" << endl;

	cout << endl;
}

bool comprobarLimites(const unsigned short &movimiento) {
	if (columnaActual + horizontal[movimiento] < 0)
		return false;
	else if (columnaActual + horizontal[movimiento] >= cantidadMovimientos)
		return false;
	else if (filaActual + vertical[movimiento] < 0)
		return false;
	else if (filaActual + vertical[movimiento] >= cantidadMovimientos)
		return false;
	else
		return true;
}

unsigned short obtenerPuntuacionCasilla(const unsigned short &movimiento) {
	return tablero[columnaActual + horizontal[movimiento]][filaActual + vertical[movimiento]];
}

unsigned short indiceMejorMovimiento(const array < unsigned short, cantidadMovimientos> &arr, const vector < unsigned short int > &indicesValidos) {
	unsigned short mejorIndice = indicesValidos[0], mejorPuntuacion = arr[indicesValidos[0]];

	for (const unsigned short &i : indicesValidos){
		if (arr[i] < mejorPuntuacion)
		{
			mejorPuntuacion = arr[i];
			mejorIndice = i;
		}
	}
	return mejorIndice;
}