#include <iostream>
#include <array>
#include <time.h>
#include <random>
#include <iomanip>
using namespace std;

int main() {
	default_random_engine motor(static_cast<unsigned short>(time(0)));
	uniform_int_distribution <unsigned short> numAleatorio(1, 6);
	const size_t tamanioArreglo = 13;
	array < unsigned short , tamanioArreglo> resultado{};
	for (size_t tirada{}; tirada < 36000; tirada++)
		++resultado[numAleatorio(motor) + numAleatorio(motor)];
	for (size_t it = 1; it < resultado.size(); it ++)
		cout << setw(5) << it;
	cout << endl;
	for (size_t it = 1; it < resultado.size(); it++)
		cout << setw(5) << resultado[it];
	cout << endl;
	system("pause");
}