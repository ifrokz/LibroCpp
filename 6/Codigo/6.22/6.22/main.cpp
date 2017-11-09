#include <iostream>
#include <iomanip>

using namespace std;

unsigned int factorial(unsigned int);

int main() {

	for (unsigned int contador = 1; contador <= 10; contador++)
		cout << setw(2) << contador << "! = " << factorial(contador) << endl;

	system("pause");
}

unsigned int factorial(unsigned int numero) {
	unsigned int resultado = 1;

	for (unsigned int i = numero; i >= 1; i--)
		resultado *= i;

	return resultado;
}