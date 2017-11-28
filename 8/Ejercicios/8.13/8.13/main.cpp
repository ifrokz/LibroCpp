#include <iostream>
using namespace std;

void misterio1(char *, const char *);

int main() {
	char cadena1[80];
	char cadena2[80];

	cout << "Escriba dos cadenas: " << endl; 
	cin >> cadena1 >> cadena2;
	misterio1(cadena1, cadena2);
	cout << cadena1 << endl;
	system("pause");
}

// Lleva el apuntador *s1 hasta el ultimo caracter, y entoces le encadena los caracteres de *s2 hasta llegar a '\0', donde se finalizan
// las cadenas de C automaticamente, por lo tanto le asigna un nuevo final a la cadena.
void misterio1(char *s1, const char * s2) {
	while (*s1 != '\0')
		++s1;

	for (; (*s1 = *s2); ++s1, ++s2);
}