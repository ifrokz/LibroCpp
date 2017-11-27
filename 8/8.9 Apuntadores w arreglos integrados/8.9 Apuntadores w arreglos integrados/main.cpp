#include <iostream>
using namespace std;

int main() {

	int b[] = { 10, 20, 30, 40 };
	int *bPtr = b;

	cout << "Se imprime el arreglo b con: \n\nNotacion de subindie de arreglo\n";

	for (size_t i = 0; i < 4; ++i)
		cout << "b[" << i << "] = " << b[i] << '\n';

	cout << "\nNotacion apuntador/desplazamiento en donde el apuntador es el nombre de arreglo \n";

	for (size_t desplazamiento1 = 0; desplazamiento1 < 4; desplazamiento1++)
		cout << "*(b + " << desplazamiento1 << ") = " << *(b + desplazamiento1) << '\n';

	cout << "Notacion subindice de apuntador \n";
	for (size_t j = 0; j < 4; j++)
		cout << "bPtr[" << j << "] = " << bPtr[j] << '\n';

	cout << "Notacion apuntador/deplazamiento\n";
	for (size_t desplazamiento2 = 0; desplazamiento2 < 4; desplazamiento2++)
		cout << "*(bPtr + " << desplazamiento2 << ") = " << *(bPtr + desplazamiento2) << '\n';
	system("pause");
}