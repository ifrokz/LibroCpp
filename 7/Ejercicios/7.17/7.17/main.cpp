#include <iostream>
#include <array>
using namespace std;

const size_t tamanioArreglo = 10;

int queEsEsto(array <int , tamanioArreglo> & , size_t);// recorre un arrelo y devuelve la suma de todos sus indices.

int main() {
	array<int, tamanioArreglo > arr{ 10,14 };

	int resultado = queEsEsto(arr, arr.size());
	cout << resultado << endl;
	system("pause");
}

int queEsEsto(array<int, tamanioArreglo> &arr, size_t tamanio) {
	if (1 == tamanio)
		return arr[tamanio - 1];
	else
		return arr[tamanio - 1] + queEsEsto(arr, tamanio - 1);
}