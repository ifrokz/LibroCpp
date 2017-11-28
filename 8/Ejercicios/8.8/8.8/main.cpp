#include <iostream>
using namespace std;

int main() {
	// A
	const size_t TAMANIO = 5;
	unsigned int valores[TAMANIO] = { 2, 4, 6, 8, 10 };
	// B
	unsigned int v, *vPtr = &v;
	// C
	cout << "Imprimo el arreglo mediante la notacion de subindices: " << endl;
	for (size_t i = 0; i < sizeof valores / sizeof valores[0]; i++)
		cout << "valores[" << i << "] = " << valores[i] << '\n';
	cout << endl;
	// D
	vPtr = &valores[0];
	*vPtr = *valores;
	// E
	cout << "Imprimo el arreglo mediante la notacion apuntador/desplazamiento:" << endl;
	for (size_t desplazamiento = 0; desplazamiento < TAMANIO; desplazamiento++)
		cout << "*(vPtr + desplazamiento) = " << *(vPtr + desplazamiento) << '\n';
	// F
	cout << "Imprimo el arreglo mediante la notacion apuntador/desplazamiento con el nombre del arreglo integrado como apuntador:" << endl;
	for (size_t desplazamiento = 0; desplazamiento < TAMANIO; desplazamiento++)
		cout << "*(valores + desplazamiento) = " << *(valores + desplazamiento) << '\n';
	// G
	cout << "Imprimo el arreglo mediante el uso de subindices con el apuntador al arreglo: " << endl;
	for (size_t i = 0; i < TAMANIO; i++)
		cout << "vPtr[" << i << "] = " << vPtr[i] << '\n';

	// H
	cout << "H, imprimir el quinto elemento (indice 4) de las 4 maneras anteriores.\n";
	cout << "valores[5] = " << valores[ 4 ] << '\n';
	cout << "vPtr[5] = " << vPtr[4] << '\n';
	cout << "*(valores + 5) = " << *(valores + 4) << '\n';
	cout << "*(vPtr + 5) = " << *(vPtr + 4) << '\n';

	system("pause");
}
