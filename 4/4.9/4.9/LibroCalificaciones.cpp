#include <iostream>
#include <iomanip>
#include "LiboCalificaciones.h"
using namespace std;


LibroCalificacioines::LibroCalificacioines(string _nombre) {
	establecerNombreCurso(_nombre);
}

void LibroCalificacioines::establecerNombreCurso(string _nombre) {
	if (_nombre.size() <= 25)
		nombreCurso = _nombre;
	else {
		nombreCurso = _nombre.substr(0, 25);

		cerr << "El nombre \"" << nombreCurso << "\" excede la longitud amxima (25).\nSe limito noimbreCurso a los primeros 25 caracteres." << endl;
	}
}

string LibroCalificacioines::obtenerNombreCurso() const {
	return nombreCurso;
}

void LibroCalificacioines::mostrarMensaje() const {
	cout << "Bienvenido al libro de calificaciones para " << obtenerNombreCurso() << "!\n" << endl;
}

void LibroCalificacioines::determinarPromedioClase() const {
	int total = 0;
	unsigned int contadorCalif;

	cout << "Escriba la calificacion o -1 para salir: "; 
	int calificacion;
	cin >> calificacion;

	while (calificacion != -1) {
		total = total + calificacion;
		contadorCalif = contadorCalif + 1;

		cout << "Escriba la calificacion o -1 para salir: ";
		cin >> calificacion;
	}

	if (contadorCalif != 0) {
		double promedio = static_cast<double>(total) / contadorCalif;

		cout << "\nEl total de las " << contadorCalif << " calificaciones introducidas es de: " << total << endl;
		cout << setprecision(2) << fixed;
		cout << "El promedio de la clase es: " << promedio << endl;
	}
	else {
		cout << "No se introdujeron calificaciones " << endl;
	}
}



