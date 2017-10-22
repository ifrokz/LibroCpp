#pragma once

#include <string>

class LibroCalificaciones {
public:
	explicit LibroCalificaciones(std::string nombre);

	void establecerNombreCusro(std::string nombre);
	std::string obtenerNombrecusro() const;
	void mostrarMensaje() const;

private:
	std::string nombreCusrso;
};