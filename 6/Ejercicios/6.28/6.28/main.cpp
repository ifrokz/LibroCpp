#include <iostream>
using namespace std;

bool esPerfecto(int numero) {
	int suma = 0;
	for(unsigned int contador = 1; contador <= numero/2; contador++)
		if (numero % contador == 0)
		{
			suma += contador;
		}
	return (numero == suma) ? true : false;
}

int main() {
	unsigned int iteraciones = 100000;
	cout << boolalpha;
	for (unsigned int contador = 0; contador <= iteraciones; contador++) {
		cout << "El numero " << contador << " ";
		esPerfecto(contador) ? cout << " es perfecto." << endl : cout << " no es perfecto " << endl;
	}

	system("pause");
}