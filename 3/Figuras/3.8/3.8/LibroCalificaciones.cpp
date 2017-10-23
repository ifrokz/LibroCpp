#include <iostream>

#include "LibroCalificaciones.h"

using namespace std;

LibroCalificaciones::LibroCalificaciones(string nombre) {
	establecerNombreCusro(nombre);
}

void LibroCalificaciones::establecerNombreCusro(string nombre) {
	if (nombre.size() <= 25)
		nombreCusrso = nombre;
	else if(nombre.size() > 25)
	{
		nombreCusrso = nombre.substr(0, 25);

		cerr << "El nombre '" << nombre << "' excede la longitud maxima (25).\n"
			"Se limito nombreCurso a los primeros 25 caracteres.\n" << endl;
	}
}

string LibroCalificaciones::obtenerNombrecusro() const {
	return nombreCusrso;
}

void LibroCalificaciones::mostrarMensaje() const {
	cout << "Bienvenido al libro de calificaciones para \n" << obtenerNombrecusro() << "!" << endl;
}