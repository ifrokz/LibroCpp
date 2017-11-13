#include <iostream>
using namespace std;

int division(int a, int b) {
	return a / b;
}

int residuo(int a, int b) {
	return a % b;
}

short separar(short numero) {
	if (numero > 10) {
		separar(numero / 10);
	}
	cout << numero % 10 << " ";

	return numero;
}

int main() {
	
	short numero = SHRT_MAX;

	separar(numero);


	system("pause");
}