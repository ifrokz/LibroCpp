#include <iostream>
using namespace std;

void tripleRef( int &num) {
	num *= 3;
}
int tripleValor(int num) {
	return num * 3;
}

int main() {
	int numero = 10;
	cout << "El triple por referencia de " << numero << " es " << tripleValor(numero);
	tripleRef(numero);
	cout << ", despues es de " << numero << "." << endl;


	cout << "El triple por valor de " << numero << " es " << tripleValor(numero) << ", despues es de " << numero << "." << endl;

	system("pause");
}