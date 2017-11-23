// La criba de Eratostenes. (numeros primos)
#include <iostream>
#include <array>
using namespace std;

int main() {
	size_t const tamanioArreglo = 1000;
	array < short unsigned, tamanioArreglo > primos = {1};
	for (unsigned short &arr : primos)
		arr = 1;
	
	for (size_t contador = 2; contador < primos.size(); contador++) {
		for (size_t i = contador + 1; i < primos.size(); i++)
			if (i % contador == 0)
				primos[i] = 0;
	}

	for (size_t contador = 2; contador < primos.size(); contador++) {
		if (primos.at(contador) == 1) {
			cout << (contador) << " ";
		}
	}

	system("pause");
}