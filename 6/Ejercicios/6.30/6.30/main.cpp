#include <iostream>
using namespace std;

int invertido(int numero) {
	int total = 0;

	while (numero > 0){
		total *= 10;
		total += numero % 10;
		numero /= 10;
	}

	return total;
}

int main() {
	int numero;
	cout << "Digita un numero entero: " << endl;
	cin >> numero;
	cout << invertido(numero) << endl;
	system("pause");
}