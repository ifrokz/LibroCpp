#include <iostream>
using namespace std;

unsigned int mcd(unsigned x, unsigned y) { // solo funciona si x es mayor que y.
	if (y == 0)
		return x;
	else {
		return mcd(y, x % y);
	}
}

int main() {
	cout << mcd(542355, 0);
	system("pause");
}