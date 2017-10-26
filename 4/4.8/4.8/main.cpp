#include "LibroCalificaciones.h"

int main() {
	LibroCalificaciones libroCalificaciones ("milibro");

	libroCalificaciones.mostrarMensaje();

	libroCalificaciones.determinarPromedioClase();

	system("pause");
	return 0; 
}