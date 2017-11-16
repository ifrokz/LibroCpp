#pragma once

#include <string>
#include <array>

class LibroCalificaciones {
public:
	static const size_t estudiantes = 10;

	LibroCalificaciones(const std::string &, const std::array < int, estudiantes > &);

	void establecerNombreCurso( const std::string &);
	std::string obtenerNombreCurso() const;
	void mostrarMensaje() const;
	void procesarCalificaciones() const;
	int obtenerMaximo() const;
	int obtenerMinimo() const;
	double obtenerPromedio() const;
	void imprimirGraficoBarras() const;
	void imprimirCalificaciones() const;
private:
	std::string nombreCurso;
	std::array<int, estudiantes> calificaciones;
};