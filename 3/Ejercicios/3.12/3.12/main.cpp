#include <iostream>
#include "Cuenta.h"

using namespace std;

int main() {
	Cuenta miCuenta(10);

	cout << "El sado es de: " << miCuenta.obtenerSaldo() << endl;
	miCuenta.abonar(19);
	cout << "El sado es de: " << miCuenta.obtenerSaldo() << endl;
	miCuenta.cargar(8);
	cout << "El sado es de: " << miCuenta.obtenerSaldo() << endl;

	system("pause");
	return 0;
}