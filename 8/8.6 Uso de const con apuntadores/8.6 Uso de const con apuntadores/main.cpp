#include <iostream>
using namespace std;

void apunadorNoConstanteAVariableConstante() {
	int y = 0;
	//a(&y);
}
//void a(const int * xPtr) {
//	*xPtr = 100;
//} //Da error, porque es una refernecia a un int constante.

void apuntadorConstanteAVariableNoConstante() {
	int y, x;

	int * const ptr = &x;
	*ptr = 100;
	//ptr = &y; // Da error porque es una referencia constante a un int no constante.
}

void apuntadorConstanteAVariableConstante() {
	int x = 5, y;

	const int * const ptr = &x;
	cout << *ptr << endl;

	//*ptr = 7; // Error, la variable *ptr es constante.
	//ptr = &y; // Error, el puntero ptr es constante.
}

int main() {
	//apunadorNoConstanteAVariableConstante();
	//apuntadorConstanteAVariableNoConstante();
	apuntadorConstanteAVariableConstante();
}

