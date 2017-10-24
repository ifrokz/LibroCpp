#include <iostream>

#include "LibroCalificaciones.h"

using namespace std;

int main() {
	LibroCalificaciones libroCalificaciones("CS102 C++ Estruc de datos", "Ivan");
	
	libroCalificaciones.mostrarMensaje();

	libroCalificaciones.establecerInstructor("Manolo");

	libroCalificaciones.mostrarMensaje();

	
	system("pause");
}