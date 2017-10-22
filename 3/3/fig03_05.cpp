#include<iostream>
#include <string>
using namespace std;

class LibroCalificaciones {
public: 
	void establecerNombreCurso(string nombre) 
	{
		nombreCusro = nombre;
	}
	string obtenerNombreCusro() const 
	{
			return nombreCusro;
	}
	void mostrarMensaje() const {
		cout << "Bienvenido al libro de calificaciones para '" << obtenerNombreCusro() << "'!" << endl;
	}
private:
	string nombreCusro;
};

int main05() {

	string nombreDelCurso;
	LibroCalificaciones miLibroDeCalificaiones;

	cout << "El nombre inicial del curso es:" << miLibroDeCalificaiones.obtenerNombreCusro() << endl;

	cout << "Escriba el nombre del curso:"; getline(cin, nombreDelCurso); cout << endl;
	miLibroDeCalificaiones.establecerNombreCurso(nombreDelCurso);

	miLibroDeCalificaiones.mostrarMensaje();

	system("PAUSE");
	return 0;
}