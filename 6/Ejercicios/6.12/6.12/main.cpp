#include <iostream>
#include <iomanip>
using namespace std;

inline float calcularCargos(float horas, float &horastotales, float &cargo);

int main() {
	float horas = 0, cargo = 0;

	unsigned short int contador = 0;
	cout << setw(10) << left << "Automovil" << right << setw(10) << "Horas" << setw(10) << "Cargo" << endl;
	cout << setw(10) << left << ++contador << setw(10) << right << "1.5" << setw(10) << calcularCargos(1.5f, horas, cargo) << endl;
	cout << setw(10) << left << ++contador << setw(10) << right << "4.0" << setw(10) << calcularCargos(4.0f, horas, cargo) << endl;
	cout << setw(10) << left << ++contador << setw(10) << right << "24.0" << setw(10) << calcularCargos(24.f, horas, cargo) << endl;

	cout << setw(10) << left << "TOTAL" << setw(10) << right << horas << setw(10) << cargo << endl;
	system("pause");
}

inline float calcularCargos(float horas, float &horastotales, float &cargo) {
	horastotales += horas; // actualiza las horas totales.
	float cuota = 2.f;

	if (horas >= 24.f)
		cuota = 10.f;
	else
		if (horas > 3.f && horas < 24.f)
			while (horas > 3.f) {
				horas -= 1;
				cuota += .5f;
			}

	cargo += cuota;
	return cuota;
}