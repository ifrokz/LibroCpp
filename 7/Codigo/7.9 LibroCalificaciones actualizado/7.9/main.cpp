#include <array>
using namespace std;

#include "libroCalificaciones.h"

int main() {
	array < array < int, LibroCalificaciones::pruebas >, LibroCalificaciones::estudiantes> calificaciones =
	{ 87, 96, 70,
	68, 87, 90,
	94, 100, 90,
	100, 81, 82,
	83, 65, 85,
	78, 87, 65,
	85, 75, 83,
	91, 94, 100,
	76, 72, 84,
	87, 93, 73 };
	
	LibroCalificaciones miLibro((string)"CS101 Introduccion a la programacion en C++", calificaciones);
	miLibro.mostrarMensaje();
	miLibro.procesarCalificaciones();
	system("pause");
}