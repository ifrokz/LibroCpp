#include <iostream>
using namespace std;

int cuadrado( int );

int main() {
	int a = 10;

	cout << a << " al cuadrado:	" << cuadrado(a) << endl;

	system("pause");
}

int cuadrado(int x) {
	return x * x;
}
