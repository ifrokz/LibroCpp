#include <iostream>
using namespace std;

int cuadradoPorValor(int);
int cuadradoPorReferencia(int &);
// pasamos el valor por referencia evitando el tiempo de copia de datos pero nos aseguramos de que no se modifica.
int cuadradoPorReferenciaConstante(const int &); 
int main() {
	int x = 2;
	int z = 4;
	int y = 3;
	cout << "x = " << x << " antes de ser cuadradorPorValor" << endl;
	cout << "valor devuelto por cuadradorPorValor:	" << cuadradoPorValor(x) << endl;
	cout << "x = " << x << " despues de cuadrado por valor\n" << endl;

	cout << "z = " << z << " antes de cuadrado por referencia " << endl;
	cout << "valor devuelto por cuadradorPorReferencia:	" << cuadradoPorReferencia(z) << endl;
	cout << "z = " << z << " despues de cuadrado por referencia \n" << endl;

	cout << "valor devuelto por cuadradorPorReferenciaConstante:	" << cuadradoPorReferencia(y) << endl;
	system("pause");
	return 0;
}

int cuadradoPorValor(int numero) {
	return numero *= numero;
}

int cuadradoPorReferencia(int &refNumero) {
	return refNumero *= refNumero;
}

int cuadradoPorReferenciaConstante( const int &refNumero) { 
	return refNumero * refNumero;
}