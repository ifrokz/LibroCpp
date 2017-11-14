#include <iostream>
#include <math.h>
using namespace std;

int misterio(int , int);

int main() {
	int x = 0, y = 0;

	cout << "Escriba dos enteros: "; cin >> x >> y;
	cout << "El resultado es: " << misterio(x, y) << endl;

	system("pause");
}

int misterio(int a, int b) {
	if (1 == b || -1 == b)
		return b < 0 ? -a : a;
	else
		return ((b < 0 ? -a : a) + misterio(a, b > 1 ? b - 1 : b + 1));
}