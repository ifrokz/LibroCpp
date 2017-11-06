#include <iostream>
#include <cstdlib> // Contiene srand y rand.
#include <ctime> 
using namespace std;

unsigned int rollDice();

int main() {
	// enumeracion con constantes que representa el estado del juego.
	enum struct Estado : unsigned int { CONTINUAR, GANO, PERDIO };

	srand( static_cast<unsigned>( time(0) ) );

	unsigned miPunto = 0;
	Estado estadoJuego = Estado::CONTINUAR;
	unsigned sumaDeDados = rollDice();

	switch (sumaDeDados)
	{
	case 7:
	case 11:
		estadoJuego = Estado::GANO;
		break;
	case 2:
	case 3:
	case 12:
		estadoJuego = Estado::PERDIO;
		break;
	default:
		estadoJuego = Estado::CONTINUAR;
		miPunto = sumaDeDados;
		cout << "El punto es " << miPunto << endl;
		break;
	}

	while (Estado::CONTINUAR == estadoJuego) {
		sumaDeDados = rollDice();

		if (sumaDeDados == miPunto)
			estadoJuego = Estado::GANO;
		else
			if (sumaDeDados == 7)
				estadoJuego = Estado::PERDIO;
	}

	if (Estado::GANO == estadoJuego)
		cout << "El jugador gana " << endl;
	else
		cout << "El jugador pierde" << endl;

	system("pause");
}

unsigned rollDice() {
	unsigned dado1 = 1 + rand() % 6;
	unsigned dado2 = 1 + rand() % 6;

	unsigned suma = dado1 + dado2;

	cout << "El jugador ha tirado " << dado1 << " + " << dado2 << " = " << suma << endl;
	return suma;
}
