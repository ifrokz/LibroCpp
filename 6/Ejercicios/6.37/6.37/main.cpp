#include <iostream>

using namespace std;

unsigned int fibonacci(unsigned numero) {

	unsigned long penultimo = 0, ultimo = 1, aux, resultado;

	if (numero > 1) {
		for (unsigned short int i = 1; i < numero; i++)
		{
			aux = ultimo;
			ultimo = penultimo + ultimo;
			penultimo = aux;
		}

		return ultimo;
	}
	else {
		return numero;
	}
	
}
int main() {

	for (int i = 0; i < 100; i++) {
		cout << fibonacci(i) << endl;
	}

	system("pause");
}