#include <iostream>
#include <random>
#include <string>
#include <time.h>
#include <Windows.h>
using namespace std;

uniform_int_distribution<short> numAleatorio(1, 10);
default_random_engine motor(static_cast <short> (time(0)));

void moverLiebre(short & , const short &);
void moverTortuga(short &, const short &);
void imprimirPosiciones(const short &liebre, const short& tortuga);

int main() {
	short posicionTortuga = 1, posicionLiebre = 1;

	while (true)
	{

		moverLiebre(posicionLiebre, numAleatorio(motor));
		moverTortuga(posicionTortuga, numAleatorio(motor));
		imprimirPosiciones(posicionLiebre, posicionTortuga);
		if (posicionTortuga >= 70 || posicionLiebre >= 70) {
			if (posicionLiebre >= 70 && posicionTortuga >= 70) 
			{
				cout << "Ha habido un empate. " << endl;
			}
			else if (posicionLiebre >= 70)
			{
				cout << "La liebre gana. Que mal." << endl;
			}
			else
			{
				cout << "LA TORTUGA GANA!!! YAY!!!" << endl;
			}
			break;
		}
		Sleep(1000);
	}

	system("pause");
}

void imprimirPosiciones(const short &liebre, const short &tortuga) {
	for (unsigned short posicion = 1; posicion <= 70; posicion++)
		if (tortuga == posicion && tortuga == liebre)
			cout << "OUCH!!";
		else if (tortuga == posicion)
			cout << "T";
		else if (liebre == posicion)
			cout << "L";
		else
			cout << " ";
	cout << endl;
}

void moverLiebre(short &posicion, const short &movimiento) {
	switch (numAleatorio(motor))
	{
	case 1:
	case 2:
		break;
	case 3:
	case 4:
		posicion += 9;
		break;
	case 5:
		posicion -= 12;
		break;
	case 6:
	case 7:
	case 8:
		posicion++;
		break;
	case 9:
	case 10:
		posicion -= 2;
		break;
	default:
		cerr << "Esto nunca deberia ocurrir." << endl;
		break;
	}

	if (posicion < 1)
		posicion = 1;
}
void moverTortuga(short &posicion, const short & movimiento) {
	short cant = numAleatorio(motor);
	if (cant <= 5)
		posicion += 3;
	else if (cant <= 7)
		posicion -= 6;
	else {
		posicion++;
	}

	if (posicion < 1)
		posicion = 1;
}