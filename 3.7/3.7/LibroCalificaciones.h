#pragma once

#include <string>

class LibroCalificaciones {
public:
	explicit LibroCalificaciones(std::string nombre);
	void establecerNombreCurso(std::string nombre);
	std::string obtenerNombreCusro() const;
	void mostrarMensaje() const;
private:
	std::string nombreCurso;
};