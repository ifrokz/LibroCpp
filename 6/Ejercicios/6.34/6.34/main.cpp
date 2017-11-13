#include <iostream>
#include <random>
#include <time.h>
using namespace std;

void jugar(void) {
	default_random_engine motor(static_cast <unsigned short> (time(0)));
	uniform_int_distribution < unsigned short > numAleatorio(1, 1000);

	unsigned short adivinar = numAleatorio(motor), numero;

	cout << "Tengo un numero entre 1 y 1000.\nPuedes adivinar mi numero?\nPor favor escribe tu primera respuesta." << adivinar << endl;
	enum struct Estado {CONTINUAR, FIN};
	Estado estado = Estado::CONTINUAR;

	char intentos = 0;
	while (estado == Estado::CONTINUAR){
		cin >> numero;
		intentos++;
		if (adivinar == numero) {
			estado = Estado::FIN;
			cout << "Excelente! Adivinaste el numero!" << endl;
			cout << "Has hecho un total de " << (int)intentos << " intentos." << endl;
			Estado continuar = Estado::CONTINUAR;
			while (continuar == Estado::CONTINUAR) {
				cout << "Te gustaria jugar de nuevo? (s/n)" << endl;
				char respuesta;
				cin >> respuesta;
				switch (respuesta)
				{
				case 's':
					continuar = Estado::FIN;
					jugar();
				case 'n':
					continuar = Estado::FIN;
					break;
				default:
					break;
				}
			}
		}
		else if (adivinar < numero)
			cout << "Demasiado alto. Intenta de nuevo." << endl;
		else
			cout << "Demasiado bajo. Intenta de nuevo." << endl;
	}
}

int main() {
	jugar();

	system("pause");
}