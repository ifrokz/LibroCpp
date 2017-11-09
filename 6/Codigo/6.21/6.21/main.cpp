#include <iostream>
using namespace std;

unsigned long fibonacci_recursivo(unsigned long);
unsigned long fibonacci_bucle(unsigned long);
int main() {
	for (unsigned short contador = 0; contador <= 10; contador++) {
		cout << "fibonacci_recursivo (" << contador << ") = " << fibonacci_recursivo(contador) << endl;
	}

	cout << "fibonacci_bucle (35) = " << fibonacci_bucle(35) << endl;
	cout << "fibonacci_recursivo (35) = " << fibonacci_recursivo(35) << endl;

	cout << "fibonacci_bucle (100) = " << fibonacci_bucle(100) << endl;
	cout << "fibonacci_recursivo (100) = " << fibonacci_recursivo(100) << endl;

	system("pause");
}

unsigned long fibonacci_recursivo(unsigned long numero) { // devuelve el valor correspondiente a numero en la sucesion.
	if ((0 == numero) || (1 == numero)) // casos base
		return numero;
	else
		return fibonacci_recursivo(numero - 1) + fibonacci_recursivo(numero - 2);
}

unsigned long fibonacci_bucle(unsigned long numero) {
	
	unsigned long penultimo = 0, ultimo = 1, aux , resultado;

	if (numero > 1) {
		for (unsigned short int i = 1; i <= numero; i++)
		{
			aux = ultimo;
			ultimo = penultimo + ultimo;
			penultimo = aux;
		}

		return penultimo;
	}
	else {
		return numero;
	}
}

