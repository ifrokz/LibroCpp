#include < iostream>
#include <array> 
#include <iomanip>
using namespace std;

int main() {
	const size_t tamanioResepuesta = 20	; 
	const size_t tamanioFrecuencia = 6; 

	const array <unsigned short, tamanioResepuesta	 > respuestas =
	{ 1,2,5,4,3,5,2,1,3,1,4,3,3,3,2,3,3,2,2,5 };

	array < unsigned short, tamanioFrecuencia > frecuencia = {};

	for (size_t respuesta = 0; respuesta < respuestas.size(); respuesta++)
		++frecuencia[respuestas[respuesta]];

	cout << "Calificacion" << setw(17) << "Frecuencia" << endl;

	for (size_t calificacion = 1; calificacion < frecuencia.size(); calificacion++)
		cout << setw(6) << calificacion << setw(17) << frecuencia[calificacion] << endl;

	system("pause");
}