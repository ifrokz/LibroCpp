#include <iostream>
using namespace std;

int cuboPorValor(int);
void cuboPorReferencia(int *);

int main() {
	int numero = 5 , *numeroPtr = &numero;

	cout << "cuboPorValor(numero) es " << cuboPorValor(numero) << endl;
	cout << "El valor de numero despues de esta operacion es de : " << numero << endl;
	cuboPorReferencia(numeroPtr);
	cout << "El valor de numero despues de cuboPorReferencia(numeroPtr) es de: " << numero << endl ;
	cuboPorReferencia(&numero);
	cout << "El valor de numero despues de cuboPorReferencia(&numero) es de: " << numero << endl;
	system("pause");
}


int cuboPorValor(int n) {
	return n * n * n;
}

void cuboPorReferencia(int * nPtr) {
	*nPtr = *nPtr * *nPtr * *nPtr;
}