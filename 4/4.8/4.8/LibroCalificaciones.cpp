#include <iostream>
#include "LibroCalificaciones.h"

using namespace std;

LibroCalificaciones::LibroCalificaciones(string _nombre) {
	estabecerNombre(_nombre);
}

void LibroCalificaciones::estabecerNombre(string _nombre) {
	if (_nombre.size() <= 25)
		nombreCurso + _nombre;
	else {
		nombreCurso = _nombre.substr(0, 25);

		cerr << "El nombre \"" << nombreCurso << "\" excede la longitud maxima (25).\nSe limito nombreCurso a los primeros 25 caracteres.\n" << endl;
	}
}


string LibroCalificaciones::obtenerNombreCurso() const {
	return nombreCurso;
}

void LibroCalificaciones::mostrarMensaje() const {
	cout << "Bienvenido al libroCalificaciones para " << obtenerNombreCurso() << "!" << endl;
}

void LibroCalificaciones::determinarPromedioClase() const {
	int total = 0;
	unsigned int contadorCalif = 1;

	while (contadorCalif <= 10) {
		cout << "Escriba una calificacion: ";
		int calificacion = 0;
		cin >> calificacion;
		total = total + calificacion;
		contadorCalif = contadorCalif + 1;
	}

	int promedio = total / 10;

	cout << "El total de las 10 califacaciones es de " << total << endl;
	cout << "El promedio de la clase es " << promedio << endl;
}
