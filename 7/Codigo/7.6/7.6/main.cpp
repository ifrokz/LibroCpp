#include "LibroCalificaciones.h"
#include <array>
using namespace std;

int main() {
	const array <int, LibroCalificaciones::estudiantes> calificaciones = { 87, 68, 94, 100, 83, 78, 85, 91, 76, 87 };
	string nombrecurso = "CS101 Introduccion a la programacion en C++";

	LibroCalificaciones miLibroCalificaciones(nombrecurso, calificaciones);
	miLibroCalificaciones.mostrarMensaje();
	miLibroCalificaciones.procesarCalificaciones();
	system("pause");
}