#include <iostream>

using namespace std;

#include "LibroCalificaciones.h"	

LibroCalificaciones::LibroCalificaciones(string nombre) 
	: calificacioneMaxima(0)
{
	establecerNombreCurso(nombre);
}

void LibroCalificaciones::establecerNombreCurso(string nombre) {
	if (nombre.size() <= 25) {
		nombreCurso = nombre;
	}
	else
	{
		nombreCurso = nombre.substr(0, 25);
		cerr << "El nombre \"" << nombre << "\" excede la longitud maxima (25).\nSe limito nombreCurso a los primeros 25 caracteres.\n" << endl;
	}
}

string LibroCalificaciones::obtenerNombreCurso() const {
	return nombreCurso;
}

void LibroCalificaciones::mostrarMensaje() const {
	cout << "Bienvenido al libroCalificaciones para:\n" << obtenerNombreCurso() << "!" << endl;
}

void LibroCalificaciones::recibirCalificaciones() {
	int calif1, calif2, calif3;

	cout << "Introduzca tres calificaciones enteras: "; cin >> calif1 >> calif2 >> calif3;

	calificacioneMaxima = maximo(calif1, calif2, calif3);
}

int LibroCalificaciones::maximo(int x, int y, int z) const{
	int valorMaximo = x;

	if (y > valorMaximo) {
		valorMaximo = y;
	}
	if (z > valorMaximo) {
		valorMaximo = z;
	}

	return valorMaximo;
}

void LibroCalificaciones::mostrarReporteCalificaciones() const{
	cout << "Calificacion maxima introducida: " << calificacioneMaxima << endl;
}