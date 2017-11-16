#include <iostream>
#include <random>
#include <ctime>
#include <array>
#include <iomanip>
using namespace std;

int main() {
	default_random_engine motor(static_cast < unsigned short > ( time(0)));
	uniform_int_distribution <unsigned short > numAleatorio(1, 6);

	const size_t tamanioArray = 7;
	array < unsigned int, tamanioArray > frecuencia = {}; // se inicializa con 0 para poder incrementarlos.

	for (unsigned short tiro = 1; tiro <= 60000; ++tiro)
		++frecuencia[numAleatorio(motor)];

	cout << "Cara" << setw(13) << "Frecuencia" << endl;

	for (size_t cara = 1; cara < frecuencia.size(); cara++)
		cout << cara << setw(13) << frecuencia[cara] << endl;

	system("pause");
}