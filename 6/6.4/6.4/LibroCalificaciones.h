#pragma once

#include <string>

class LibroCalificaciones {
public:
	explicit LibroCalificaciones(std::string);

	void establecerNombreCurso(std::string);
	std::string obtenerNombreCurso() const;
	void mostrarMensaje() const;
	void recibirCalificaciones();
	void mostrarReporteCalificaciones() const;

	int maximo(int, int, int) const;
private:
	std::string nombreCurso;
	int calificacioneMaxima;
};