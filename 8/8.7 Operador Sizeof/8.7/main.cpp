#include <iostream>
using namespace std;

size_t getSize(const double * const);
void imprimirSizeof();
int main() {
	double numeros[20];

	cout << "El numero de bytes en el arreglo es " << sizeof numeros;

	cout << "\nEl numeros de bytes devueltos por getSize es " << getSize(numeros) << endl;
	cout << "El numero de elementos en el arreglo es de: " << sizeof numeros / sizeof numeros[0] << endl;
	
	system("pause");

	imprimirSizeof();
	system("pause");
}

size_t getSize(const double * const ptr) {
	return sizeof(ptr); // <- Devuelve el valor en bytes del apuntador (4), sizeof(*ptr) devolveria 8 al referenciar a un double.
}

void imprimirSizeof() {

	char c; cout << sizeof(c) << endl;
	short s; cout << sizeof(s) << endl;
	int i; cout << sizeof(i) << endl;
	long l; cout << sizeof(long) << endl;
	long long ll; cout << sizeof(long long) << endl;
	float f; cout << sizeof(float) << endl;
	double d; cout << sizeof(double) << endl;
	long double ld; cout << sizeof(long double) << endl;
	int arreglo[20]; cout << sizeof(arreglo) << endl;
	int *ptr = arreglo; cout << sizeof(ptr) << endl;

	
}