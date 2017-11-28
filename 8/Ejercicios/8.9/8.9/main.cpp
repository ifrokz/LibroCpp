#include <iostream>
using namespace std;

int main() {
	long valor1 = 20000, valor2;
	// A
	long *longPtr;
	// B
	longPtr = &valor1;
	// C
	cout << "*longPtr = " << *longPtr << '\n';
	// D
	valor2 = *longPtr;
	// E
	cout << "valor2 = " << valor2 << '\n';
	// F
	cout << "La direccion de valor1 es " << &valor1 << '\n';
	// G
	cout << "La direccion almacenada en longPtr es " << longPtr << '\n';
	system("pause");
}