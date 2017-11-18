#include <iomanip>
#include <iostream>
using namespace std;

#include "libroCalificaciones.h"

LibroCalificaciones::LibroCalificaciones(string &_nombre, std::array<std::array<int, pruebas>, estudiantes> &_arr)
	: nombreCurso(_nombre), calificaciones(_arr)
{
}

void LibroCalificaciones::establecerNombreCurso(const string & _nombre) {
	nombreCurso = _nombre;
}

string LibroCalificaciones::obtenerNombreCurso() const {
	return nombreCurso;
}

void LibroCalificaciones::mostrarMensaje() const {
	cout << "Bienvenido al libro de calificaciones para \n" << obtenerNombreCurso() << "!" << endl;
}

void LibroCalificaciones::procesarCalificaciones() const {
	imprimirCalificaciones();
	cout << "\nLa calificacion mas baja en el libro de calificaciones es de: " << obtenerMinimo()
		<< "\nLa calificacion mas alta en el libro de calificaciones es de: " << obtenerMaximo() <<endl;
	imprimirGraficoBarras();
}

int LibroCalificaciones::obtenerMinimo() const {
	int calificacionInf{ 100 };
	for (auto const &estudiante : calificaciones)
		for (auto const &calificacion : estudiante)
			if (calificacion < calificacionInf)
				calificacionInf = calificacion;
	return calificacionInf;
}

int LibroCalificaciones::obtenerMaximo() const {
	int calificacionesSup = 0;
	for (auto const &estudiantes : calificaciones)
		for (auto const &calif : estudiantes)
			if (calif > calificacionesSup)
				calificacionesSup = calif;
	return calificacionesSup;
}

double LibroCalificaciones::obtenerPromedio(const array <int , pruebas> &CalifPruebas) const{
	int total = 0;
	for (int calif : CalifPruebas)
		total += calif;
	return static_cast<double>(total) / CalifPruebas.size();
}

void LibroCalificaciones::imprimirGraficoBarras() const {
	cout << "\nLa distribucion dneral de calificaciones: " << endl;
	const size_t tamanioFrecuencia = 11;
	array < unsigned int, tamanioFrecuencia > frecuencia = {};

	for (const auto &estudiante : calificaciones)
		for (auto const &calif : estudiante)
			frecuencia[calif / 10] ++;

	for (size_t cuenta = 0; cuenta < tamanioFrecuencia; cuenta++)
	{
		if (0 == cuenta)
			cout << "0 - 9:";
		else if (10 == cuenta)
			cout << "  100:";
		else
			cout << cuenta * 10 << "-" << cuenta * 10 + 9 << ":";
		for (unsigned int estrellas = 0; estrellas < frecuencia [ cuenta ] ; estrellas++) 
			cout << "*";
		
		cout << endl;
	}
}

void LibroCalificaciones::imprimirCalificaciones() const {
	cout << "\nLas calificaciones son:\n\n";
	cout << "          ";
	for (size_t prueba = 0; prueba < pruebas; ++prueba)
		cout << "Prueba " << prueba + 1 << " ";

	cout << "Promedio" << endl;
	for (size_t estudiante = 0; estudiante < calificaciones.size(); ++estudiante)
	{
		cout << "Estudiante " << setw(2) << estudiante + 1;
		for (size_t prueba = 0; prueba < calificaciones[estudiante].size(); ++prueba)
			cout << setw(8) << calificaciones[estudiante][prueba];

		double promedio = obtenerPromedio(calificaciones[estudiante]);
		cout << setw(9) << setprecision(2) << fixed << promedio << endl;
	}
}

