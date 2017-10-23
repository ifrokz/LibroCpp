// Fig 3.7
#include <iostream>
#include <string>

using namespace std;

class LibroCalificaciones {
public:
	explicit LibroCalificaciones(string nombre) : nombreCurso(nombre) // Inicializador de miembro par inicializar nombreCurso.
	{

	}
	void establecerNombreCurso(string nombre) {
		nombreCurso = nombre;
	}
	string obtenerNombreCusro() const
	{
		return nombreCurso;
	}
	void mostrarMensaje() const {
		cout << "Bienvenido al libro de calificaciones para '" << obtenerNombreCusro() << "'!" << endl;
	}
private:
	string nombreCurso;
};

int main() {

	LibroCalificaciones miLibroCalificaciones1("CS101 Introduccion a la programacion en C++");
	LibroCalificaciones miLibroCalificaciones2("CS102 Introduccion a la programacion en C++");

	cout << "miLibroCalificaiones1 se creo para el curso: " << miLibroCalificaciones1.obtenerNombreCusro() << endl;
	cout << "miLibroCalificaiones2 se creo para el curso: " << miLibroCalificaciones2.obtenerNombreCusro() << endl;

	system("pause");
	return 0;
}