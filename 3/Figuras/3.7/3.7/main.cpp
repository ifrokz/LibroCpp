#include <iostream>
#include "LibroCalificaciones.h"

using namespace std;

int main() {

	LibroCalificaciones libroCalificaciones1("Libro1");
	LibroCalificaciones libroCalificaciones2("Libro2");

	cout << "libroCalificaciones1 ha sido creado para el curso: " << libroCalificaciones1.obtenerNombreCusro() << "!" << endl;
	cout << "libroCalificaciones2 ha sido creado para el curso: " << libroCalificaciones2.obtenerNombreCusro() << "!" << endl;
	system("pause");
}