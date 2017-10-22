// Fig. 03_01					 
// Define la clase LibroCalificaciones con una funcion miembro llamada mostrarMensaje.
// crea un objeto LibroCalificaciones y llama a su funcion mostrarMensaje.
#include <iostream>
using namespace std;

// Definicion de la clase LibroCalificaciones
class LibroCalificaciones 
{
	public:
		// Funcion que muestra un mensaje de bienvenida para el usuario.
		void mostrarMensaje() const
		{
			cout << "Bienvenido al libro de calificaciones!" << endl;
		}
};

// la funcion main empeiza la ejecucion del programa.
int main01() 
{
	LibroCalificaciones miLibroCalificaiones; // crea un obejto
	miLibroCalificaiones.mostrarMensaje(); // llama a la funcion del objeto.
	system("pause");

	return 0;
}