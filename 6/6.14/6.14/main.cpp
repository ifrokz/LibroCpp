#include <iostream> 
using namespace std;

int inline cubo(const double lado) {
	return lado * lado * lado;
}

int main() {
	double valorLado;
	cout << "Escriba la longitud del lado de su cubo: "; cin >> valorLado;

	cout << "El volumen del cubo con un lado de " << valorLado << " es " << cubo(valorLado) << endl;

	system("pause");
}

