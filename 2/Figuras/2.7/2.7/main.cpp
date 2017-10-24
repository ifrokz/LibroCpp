#include <iostream>

using std::cin;
using std::cout;
using std::endl;


int main() {
	int numero1 = 0, numero2 = 0;

	cout << "Escriba dos enteros a comparar";
	cin >> numero1 >> numero2;

	if (numero1 == numero2)
		cout << numero1 << " == " << numero2 << endl;
	if (numero1 != numero2)
		cout << numero1 << " != " << numero2 << endl;
	if (numero1 < numero2)
		cout << numero1 << " < " << numero2 << endl;
	if (numero1 > numero2)
		cout << numero1 << " > " << numero2 << endl;
	if (numero1 <= numero2)
		cout << numero1 << " <= " << numero2 << endl;
	if (numero1 >= numero2)
		cout << numero1 << " >= " << numero2 << endl;

	system("pause");
	return 0;
}