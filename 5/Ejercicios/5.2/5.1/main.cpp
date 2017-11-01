#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

void a() {
	int unsigned suma = 0;
	for (int unsigned cuenta = 0; cuenta <= 100; cuenta++) {
		if (!(cuenta % 2 == 0))
			suma += cuenta;
	}

	cout << "La suma es: " << suma << endl;
}
void b() {
	double  numero = 333.546372;

	cout << setw(15) << left << setprecision(1) << fixed;
	cout << numero << setprecision(2) << setw(15) << numero << setprecision(3) << setw(15) << numero << endl;
}
void c() {
	cout << setw(10) << setprecision(2) << fixed << pow(2.5, 3) << endl;
}
void d() {
	unsigned int numero = 1;
	while (numero <= 20) {
		cout << numero;
		if (numero % 5 == 0)
			cout << endl;
		else
			cout << " ";

		numero++;
	}
}
void e() {
	for (unsigned int i = 1; i <= 20; i++)
	{
		cout << i;
		if (i % 5 == 0)
			cout << endl;
		else
			cout << " ";
	}
}
int main() {
	//a();
	//b();
	//c();
	//d();
	e();
	system("pause");
}

