#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

int main() {
	const size_t tamanioArreglo = 20;
	array < short, tamanioArreglo > numeros{};
	for (size_t contador{}; contador < numeros.size(); contador++) {
		short temp;
		cin >> temp;
		if (temp >= 10 && temp <= 100 && !binary_search(numeros.begin(), numeros.end(), temp))
			numeros[contador] = temp;
	}

	for (const int &num : numeros)
		if (num != 0)
			cout << num << " ";
	cout << endl;


	system("pause");
}