#include <iostream>
#include "Cuenta.h"

using namespace std;

Cuenta::Cuenta(int _saldo) {
	if (_saldo < 0) {
		_saldo = 0;

		cerr << "El saldo introducido era invalido, ahora el saldo es de 0\n" << endl;
	}

	saldo = _saldo;
}

void Cuenta::abonar(int _cantidad) {
	saldo = +_cantidad;
}

void Cuenta::cargar(int _cantidad) {
	if (_cantidad <= saldo)
		saldo -= _cantidad;
	if (_cantidad > saldo)
		cerr << "El monto a saldar excede el saldo de la cuenta" << endl;
}

int Cuenta::obtenerSaldo() const {
	return saldo;
}