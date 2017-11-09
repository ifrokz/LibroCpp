#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

double hipotenusa_recto(unsigned short int & contador, double lado1, double lado2);
int main() {
	unsigned short int contador = 0;
	cout << setw(10) << left << "Triangulo" << right << setw(10) << " Lado 1" << setw(10) << "Lado 2" << setw(10) << "Hipotenusa" << endl;
	
	cout << hipotenusa_recto(contador, 3., 4.) << endl;
	cout << hipotenusa_recto(contador, 5., 12.) << endl;
	cout << hipotenusa_recto(contador, 8., 15.) << endl;
	system("pause");
}

double hipotenusa_recto(unsigned short int & contador, double lado1, double lado2) {
	cout << setw(10) << left << ++contador << right << setw(10) << lado1 << setw(10) << lado2 << setw(10);

	return sqrt( ( pow( lado1, 2 ) + pow( lado2, 2 ) ) );
}
