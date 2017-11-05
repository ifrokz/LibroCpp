#include <iostream>
#include <iomanip>
#include <cstdlib> // Contiene rand y sdrand.
#include <ctime> // Para obtener el tiempo de mejora6_10.

using namespace std;

void fig6_8() {
	for (unsigned int contador = 1; contador <= 20; contador++) {
		cout << setw(10) << (1 + rand() % 6);

		if (contador % 5 == 0)
			cout << endl;
	}
}
void fig6_9() {
	unsigned int fre1 = 0, fre2 = 0, fre3 = 0, fre4 = 0, fre5 = 0, fre6 = 0;

	for (unsigned int tiro = 0; tiro < 6000000; tiro++) {
		unsigned int cara = 1 + rand() % 6;

		switch (cara) {
		case 1:
			fre1++;
			break;
		case 2:
			fre2++;
			break;
		case 3:
			fre3++;
			break;
		case 4:
			fre4++;
			break;
		case 5:
			fre5++;
			break;
		case 6:
			fre6++;
			break;
		default:
			cout << "El programa nunca debio llegar aqui!" << endl;
		}
	}

	cout << "Cara" << setw(13) << "Frecuencia" << endl;
	cout << "   1" << setw(13) << fre1
		<< "\n   2" << setw(13) << fre2
		<< "\n   3" << setw(13) << fre3
		<< "\n   4" << setw(13) << fre4
		<< "\n   5" << setw(13) << fre5
		<< "\n   6" << setw(13) << fre6 << endl;

}
void fig6_10() {
	unsigned int semilla = 0;

	cout << "Introduzca la semilla: "; cin >> semilla;
	srand(semilla); // siembra el generador de numeros aleatorios.

	for (unsigned contador = 1; contador <= 10; contador++) {
		cout << setw(10) << (1 + rand() % 6);
		if (contador % 5 == 0) {
			cout << endl;
		}
	}
}
void mejora6_10() {
	// conseguimos un int de los segundos transcurridos desde 1970 en funcion al reloj de nuestro ordenador.
	unsigned int semilla = static_cast<unsigned>(time(0)); 

	srand(semilla); // siembra el generador de numeros aleatorios.

	for (unsigned contador = 1; contador <= 10; contador++) {
		cout << setw(10) << (1 + rand() % 6);
		if (contador % 5 == 0) {
			cout << endl;
		}
	}
}
int main() {
	//fig6_8();
	//fig6_9();
	//fig6_10();
	mejora6_10();
	system("pause");
}