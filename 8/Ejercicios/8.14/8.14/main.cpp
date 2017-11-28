#include <iostream>
using namespace std;

int misterio2(const char *);

int main() {
	char cadena[80];
	cout << "Escriba una cadena: ";
	cin >> cadena;
	cout << misterio2(cadena) << endl;

	system("pause");
}

// Cuenta la cantidad de caracteres que almacena el array de caracteres.
int misterio2(const char *s) {
	unsigned int x;

	for (x = 0; *s != '\0'; s++, x++);

	return x;
}