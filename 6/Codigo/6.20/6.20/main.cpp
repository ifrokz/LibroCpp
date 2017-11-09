#include <iostream>
#include <iomanip>
using namespace std;

unsigned long long int factorial_recursivo( unsigned long long int numero);

int main() {
	for (unsigned short i = 0; i <= 10; i++) {
		cout << setw(2) << i << "! = " << factorial_recursivo(i) << endl;
	}
	system("pause");
}

unsigned long long int factorial_recursivo(unsigned long long int numero) {
	if (numero <= 1)
		return 1;
	else
		return numero * factorial_recursivo(numero - 1);
}