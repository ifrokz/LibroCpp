#include <iostream>
using namespace std;

unsigned int volumenCaja(unsigned int longitud = 1, unsigned int anchura = 1 , unsigned int altura = 1 );

int main() {

	cout << "El volumen predeterminado de la caja es: " << volumenCaja() << endl;

	cout << "\nEl volumen de una caja con longitud 10 es: " << volumenCaja(10) << endl;

	cout << "\nEl volumen de una caja con longitud 10, anchura 5 y altura 1 es: " << volumenCaja(10, 5) << endl;

	cout << "\nEl volumen de una caja con longitud 10, anchura 5 y altura 2 es: " << volumenCaja(10, 5, 2) << endl;

	system("pause");
}

unsigned int volumenCaja(unsigned int longitud, unsigned int anchura , unsigned int altura ) {
	return longitud * anchura * altura;
}