#pragma once

#include <string>

class Cuenta {
public:
	explicit Cuenta(int _saldo);

	void abonar(int _cantidad);
	void cargar(int _cantidad);
	int obtenerSaldo() const;
private:
	int saldo;
};