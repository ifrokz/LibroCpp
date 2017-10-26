#pragma once

#include <string>

class LibroCalificaciones {
public:
	explicit LibroCalificaciones(std::string _nombre );

	void estabecerNombre(std::string _nombre);
	std::string obtenerNombreCurso() const;
	void mostrarMensaje() const;
	void determinarPromedioClase() const;
private:
	std::string nombreCurso;
};