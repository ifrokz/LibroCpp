#include <string>
#include <iostream>
using namespace std;

void cadenaInversa(size_t begin, string cadena) {
	if (begin < cadena.size()) {
		cadenaInversa(begin + 1, cadena);
		cout << cadena[begin];
	}
}

int main() {
	string cadena = "aaff";
	cout << "La cadena \"" << cadena << "\" invertida es: ";
	cadenaInversa(0, cadena); cout << endl;
	system("pause");
}