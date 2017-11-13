#include <iostream>
#include <iomanip>
using namespace std;

float centigrados(float farenheit) {
	return (farenheit - 32) / 1.8f;
}


float farenheit(float grados) {
	return grados * 1.8f + 32;
}

void escribir_tabla() {
	cout << right << setprecision (2) << fixed;
	cout << setw(75) << "Celsius a Farengheit" << endl;
	for (register unsigned short int contador = 0; contador < 10; contador++) {
		for(register unsigned short int i = 1; i <= 10 ; i ++)
			cout << left << setw (3) << contador*10+i << "= " << setw(6) << farenheit(contador * 10 + i) << ", ";
		cout << endl;
	}
	cout << right << setw(75) << "Farengheit a Celsius" << endl;
	const short int partida = 32;
	for (register unsigned short int contador = partida; contador <= 212; contador++) {
		cout << left << setw(3) << contador << " =" << setw(6) << centigrados(contador) << ", ";
		if ((contador - partida) % 10 == 9)
			cout << endl;
	}
}
int main() {
	escribir_tabla();
	system("pause");
}