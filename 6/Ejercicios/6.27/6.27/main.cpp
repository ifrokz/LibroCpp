#include <iostream>
using namespace std;

double menor(double a, double b, double c) {
	double menor = a;
	b < menor ? menor = b : menor;
	c < menor ? menor = c : menor;

	return menor;
}

int main() {
	double a, b, c;
	cout << "Digita 3 numeros decimales: "; cin >> a >> b >> c;

	cout << "\nEl menor es: " << menor(a, b, c) << endl;

	system("pause");
}