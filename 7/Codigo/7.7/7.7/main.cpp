#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <array>
using namespace std;

int main() {
	const size_t tamanioArreglo = 7;
	array < string, tamanioArreglo> colores = { "rojo", "naranja", "amarillo" , "verde" , "azul", "indigo" , "violeta" };

	cout << "Arreglo desordenado: \n";
	for (string color : colores)
		cout << color << " ";

	sort(colores.begin(), colores.end());

	cout << "\nArreglo ordenado:\n";
	for (string color : colores)
		cout << color << " ";

	bool encuentro = binary_search(colores.begin(), colores.end(), "indigo");
	cout << "\n\n\"Indigo\" " << (encuentro ? "se " : "no se ") << "encuentra en colores." << endl;

	encuentro = binary_search(colores.begin(), colores.end(), "JAJA");
	cout << "\"JAJA\" " << (encuentro ? "se " : "no se ") << "encuentra en colores." << endl;

	system("pause");
}