#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void fig5_5A();
void fig5_5B();
void fig5_6();

int main() {
	//fig5_5A();
	//fig5_5B();
	fig5_6();

	system("pause");
}

void fig5_5A() {
	unsigned int total = 0;

	for (unsigned int numero = 2; numero <= 20; numero += 2)
		total += numero;

	cout << "La suma es: " << total << endl;
}

void fig5_5B() {
	unsigned int total = 0;
	for (unsigned int numero = 2; numero <= 20; total += numero, numero += 2)
		;
	cout << "La suma es: " << total << endl;
}

void fig5_6() {
	double monto, principal = 1000.0, tasa = 0.05;

	cout << "Anio " << setw(21) << "Monto del deposito " << endl;
	cout << fixed << setprecision(2);

	for (unsigned int anio = 1; anio <= 10; anio ++) {
		monto = principal * pow(1.0 + tasa, anio);

		cout << setw(4) << anio << setw(21) << monto << endl;
	}
}