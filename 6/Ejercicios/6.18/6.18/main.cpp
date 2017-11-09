#include <iostream>
using namespace std;

inline unsigned int cuadrado(unsigned int, int);

int main() {

	cout << cuadrado(4, 3) << endl;

	system("pause");
}

inline unsigned int cuadrado(unsigned int base, int exponente) {
	int total = base;
	if (exponente > 2)
		total = cuadrado(total, exponente - 1);
	
	return total * base;
}
