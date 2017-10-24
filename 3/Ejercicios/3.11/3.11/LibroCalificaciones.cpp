#include <iostream>

#include "LibroCalificaciones.h"

using namespace std;

LibroCalificaciones::LibroCalificaciones(string nombre, string _instructor) : instructor (_instructor){
	establecerNombreCusro(nombre);
}

void LibroCalificaciones::establecerNombreCusro(string _nombre) {
	if (_nombre.size() <= 25)
		nombreCusrso = _nombre;
	else if (_nombre.size() > 25)
	{
		nombreCusrso = _nombre.substr(0, 25);

		cerr << "El nombre '" << _nombre << "' excede la longitud maxima (25).\n"
			"Se limito nombreCurso a los primeros 25 caracteres.\n" << endl;
	}
}

string LibroCalificaciones::obtenerNombrecusro() const {
	return nombreCusrso;
}

string LibroCalificaciones::obtenerInstructor() const {
	return instructor;
}
void LibroCalificaciones::establecerInstructor(string _instructor) {
	instructor = _instructor;
}

void LibroCalificaciones::mostrarMensaje() const {
	cout << "Bienvenido al libro de calificaciones para \n" << obtenerNombrecusro() << "!" << endl;
	cout << "Este curso es presentado por: " << obtenerInstructor() << endl;
}