#pragma once

#include <string>

class LibroCalificaciones {
public:
	explicit LibroCalificaciones(std::string nombre, std::string _instructor);

	void establecerNombreCusro(std::string _nombre);
	void establecerInstructor(std::string _instructor);
	std::string obtenerNombrecusro() const;
	std::string obtenerInstructor() const;
	void mostrarMensaje() const;

private:
	std::string nombreCusrso;
	std::string instructor;
};