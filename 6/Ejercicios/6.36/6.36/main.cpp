#include <iostream>
using namespace std;

unsigned long long int potencia(unsigned int base, unsigned exponente) {
	return exponente > 1 ? base * potencia(base, exponente - 1) : base;
}

int main() {
	cout << potencia(2, 4) << endl;
	system("pause");
}