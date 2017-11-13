#include <iostream>
#include <math.h>
using namespace std;

int segundos_transcurridos(unsigned short horas, unsigned short int minutos, unsigned short int segundos) {
	horas %= 12;
	return (horas * 60 * 60) + (minutos * 60) + segundos;
}

int main() {
	cout << fabsl( segundos_transcurridos ( 12, 1, 0) - segundos_transcurridos ( 13, 1, 0) ) << endl;
	system("pause");
}