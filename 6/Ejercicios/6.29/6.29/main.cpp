#include <iostream>
#include <math.h>
using namespace std;

bool esPrimo(unsigned int numero ) {
	for (unsigned int contador = 2; contador <= sqrt ( numero ); contador++) {
		if (numero % contador == 0) {
			return false;
		}
	}

	return true;
}

int main() {
	cout << boolalpha;
	for (unsigned short contador = 2; contador <= 100; contador++) {
		cout << "El numero " << contador;
		esPrimo(contador) ? cout << " es primo." : cout << " no es primo.";
		cout << endl;
	}
	system("pause");
}