#include <iostream>
#include "LibroCalificaciones.h"

using namespace std;

LibroCalificaciones::LibroCalificaciones(string _nombre) :
	aCuenta(0), bCuenta(0), cCuenta(0), dCuenta(0), fCuenta(0)
{
	establecerNombreCurso(_nombre);
}

void LibroCalificaciones::establecerNombreCurso(string _nombre) {
	if (_nombre.size() <= 25)
		nombreCurso = _nombre;
	else {
		nombreCurso = _nombre.substr(0, 25);

		cerr << "El nombre excede la longitud maxima de 25 caracteres. Se ha limitado a los 25 primeros" << endl;
	}
}

string LibroCalificaciones::obtenerNombreCurso() const {
	return nombreCurso;
}

void LibroCalificaciones::mostrarMensaje() const {
	cout << "Bienvenido al libroCalificaciones para " << obtenerNombreCurso() << "!\n" << endl;
}

void LibroCalificaciones::recibirCalificaciones() {
	int calificacion;

	cout << "Escriba las calificaciones de letra." << endl
		<< "Escriba el caracter EOF para terminar la entrada." << endl;

	while ((calificacion = cin.get()) != EOF) {
		
		switch (calificacion) {
			case 'A':
			case 'a':
				++aCuenta;
				break;
			case 'B':
			case 'b':
				++bCuenta;
				break;
			case 'C':
			case 'c':
				++cCuenta;
				break; 
			case 'D':
			case 'd':
					dCuenta++;
					break;
			case 'f':
			case 'F':
				fCuenta++;
				break;
			case '\n':
			case '\t':
			case ' ':
				break;
			default:
				cout << "Se introdujo una letra de calificacion incorrcta. Escriba una nueva calificacion. " << endl;
				break;
		}
	}
}

void LibroCalificaciones::mostrarReporteCalificaciones() const {
	cout << "\nA: " << aCuenta << "\nB: " << bCuenta << "\nC: " << cCuenta << "\nD: " << dCuenta << "\nF: " << fCuenta << endl;
}