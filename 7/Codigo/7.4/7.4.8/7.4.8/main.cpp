#include <iostream>
#include <array>
using namespace std;

void inicArregloStatic();
void inicArregloAutomatico();
const size_t tamanioArreglo = 3;

int main() {
	cout << "Primera llamada a cada funcion: " << endl;
	inicArregloStatic();
	inicArregloAutomatico();

	cout << "Segunda llamada a cada funcion: " << endl;
	inicArregloStatic();
	inicArregloAutomatico();
	cout << endl;

	system("pause");
}

void inicArregloStatic(void) {
	static array < int, tamanioArreglo > arreglo = { 1,2,3 };
	cout << "\n\nValores al entrar a inicArregloStatic:\n";

	for (size_t i = 0; i < arreglo.size(); i++)
		cout << "arreglo[" << i << "] =	" << arreglo[i] << ",";

	cout << "\nValores al salir de inicArregloStatic:\n";
	for (size_t i = 0; i < arreglo.size(); i++)
		cout << "arreglo[" << i << "] = " << (arreglo[i] += 5) << ",";
}

void inicArregloAutomatico( void ) {
	array < int, tamanioArreglo > arreglo = { 1,2,3 };
	cout << "\n\nValores al entrar a inicArregloAutomatico:\n";

	for (size_t i = 0; i < arreglo.size(); i++)
		cout << "arreglo[" << i << "] =	" << arreglo[i] << ",";

	cout << "\nValores al salir de inicArregloAutomatico:\n";
	for (size_t i = 0; i < arreglo.size(); i++)
		cout << "arreglo[" << i << "] = " << (arreglo[i] += 5) << ",";
}