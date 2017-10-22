#include <iostream>

#include "LibroCalificaciones.h"

using namespace std;

int main() {
	LibroCalificaciones libroCalificaciones1("CS101 Introduccion a la programacion en C++");
	LibroCalificaciones libroCalificaciones2("CS102 C++ Estruc de datos");

	cout << 
		"\nEl nombre del curso de libroCalificaciones1 es:" << libroCalificaciones1.obtenerNombrecusro() <<
		"\nEl nombre del curso de libroCalificaciones2 es:" << libroCalificaciones2.obtenerNombrecusro() << endl;

	libroCalificaciones1.establecerNombreCusro("CS101 Programacion en C++");

	cout <<
		"\nEl nombre del curso de libroCalificaciones1 es:" << libroCalificaciones1.obtenerNombrecusro() <<
		"\nEl nombre del curso de libroCalificaciones2 es:" << libroCalificaciones2.obtenerNombrecusro() << endl;

	system("pause");
}