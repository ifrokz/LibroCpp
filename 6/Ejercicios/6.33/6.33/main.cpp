#include <random>
#include <iostream>
#include <time.h>
using namespace std;

default_random_engine motor(static_cast <unsigned short> (time(0)));
uniform_int_distribution<unsigned short> numAleatorio(0, 1);

unsigned short int tirar() {
	unsigned short numero = numAleatorio(motor);
	numero == 0 ? cout << "cruz," : cout << "cara,";
	return numero;
}

int main() {
	unsigned short cara = 0, cruz = 0;
	for (unsigned int i = 1; i <= 100; i ++) {

		switch (tirar())
		{
		case 1:
			cara++;
			break;
		case 0:
			cruz++;
			break;
		default:
			break;
		}
	}

	cout << "\nCara: " << cara << "\nCara: " << cruz << endl;
	system("pause");
}