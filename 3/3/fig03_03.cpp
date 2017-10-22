#include <iostream>
#include <string>
using namespace std;

class LibroCalificaciones 
{
public:
	void mostrarMensaje(string nombreCurso) const
	{
		cout << "Bienvenido al libro de calificaciones para \n" << nombreCurso << "!" << endl;
	}
};

int main03() {
	string nombreCurso;
	LibroCalificaciones miLibroCalificaiones;

	cout << "Escribe el nombre del curso:" << endl;
	getline(cin, nombreCurso);
	cout << endl;

	miLibroCalificaiones.mostrarMensaje(nombreCurso);
	system("pause");

	return 0;
}