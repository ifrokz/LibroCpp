#pragma once
#include <string>

class LibroCalificacioines {
public:
	explicit LibroCalificacioines(std::string _nombre);

	void establecerNombreCurso(std::string _nombre);
	std::string obtenerNombreCurso() const;
	void mostrarMensaje() const;
	void determinarPromedioClase() const;
private:
	std::string nombreCurso;
};