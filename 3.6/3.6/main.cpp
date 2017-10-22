// Inclusion de la clase LibroCalificaciones del archivo LibroCalificaciones.h para usarla en al main.
#include <iostream>
#include "LibroCalificaciones.h"

using namespace std;

int main() {
	LibroCalificaciones libroCalificaciones1("Mi libro de programacion 1");
	LibroCalificaciones libroCalificaciones2("Mi libro de programacion 2");

	cout << "libroCalificaciones1 creado para el libro:" << libroCalificaciones1.obtenerNombreCurso() << endl;
	cout << "libroCalificaciones2 creado para el libro:" << libroCalificaciones2.obtenerNombreCurso() << endl;

	system("pause");
}