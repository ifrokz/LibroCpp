#include "LibroCalificaciones.h"

int main() {
	LibroCalificaciones miLibroCalificaciones("CS101 Programacin C++");

	miLibroCalificaciones.mostrarMensaje();
	miLibroCalificaciones.recibirCalificaciones();

	miLibroCalificaciones.mostrarReporteCalificaciones();

	system("pause");
}