#include<iostream>

using namespace std;

int main0229() {

	int entero, cuadrado, cubo;

	cout << "entero\t\tcuadrado\tcubo" << endl;

	for (int i = 1; i <= 10; i++ ) { // crea una tabla con las tabulaciones.
		entero = i;
		cuadrado = i*i;
		cubo = cuadrado * i;

		cout << entero << "\t\t" << cuadrado << "\t\t" << cubo << endl;
	}
	system("pause");

	return 0; 
}