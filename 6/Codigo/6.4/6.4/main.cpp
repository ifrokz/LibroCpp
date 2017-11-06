#include  "LibroCalificaciones.h"

int main() {
	LibroCalificaciones milibro("CS101 Programacion en C++");

	milibro.mostrarMensaje();
	milibro.recibirCalificaciones();
	milibro.mostrarReporteCalificaciones();


	system("pause");
	return 0;
}