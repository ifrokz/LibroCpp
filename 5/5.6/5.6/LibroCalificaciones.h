#include <string>

class LibroCalificaciones {
public:
	explicit LibroCalificaciones(std::string);

	void establecerNombreCurso(std::string);
	std::string obtenerNombreCurso() const;
	void mostrarMensaje() const;
	void recibirCalificaciones();
	void mostrarReporteCalificaciones() const;
private:
	std::string nombreCurso;
	unsigned int aCuenta;
	unsigned int bCuenta;
	unsigned int cCuenta;
	unsigned int dCuenta;
	unsigned int fCuenta;
};