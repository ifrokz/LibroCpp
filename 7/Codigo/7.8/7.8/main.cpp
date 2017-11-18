#include <iostream>
#include <array>
using namespace std;

const size_t columnas = 3, filas = 2;
void imprimirArreglo(const array<array<int, columnas >, filas> &);

int main() {
	array<array < int, columnas>, filas> arr1 = { 1, 2, 3, 4, 5, 6 };
	array < array < int, columnas >, filas> arr2 = { 1,2,3,4,5 };

	cout << "Los valores en el arr1 por fila son: " << endl;
	imprimirArreglo(arr1);
	cout << "\nLos valores en el arr2 por fila son: " << endl;
	imprimirArreglo(arr2);

	system("pause");
}

void imprimirArreglo(const array < array<int, columnas > , filas > & arr  ) {
	for (auto const &fila : arr) {
		for (auto const &columna : fila)
			cout << columna << ' ';
		cout << endl;
	}
}