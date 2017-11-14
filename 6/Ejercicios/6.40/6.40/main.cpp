#include <iostream>
using namespace std;

long factorial(long numero, long espacios = 0) {
	
	for (long i = 0; i < espacios; i++)
		cout << " ";
	cout << "!" << numero << endl;
	if (numero <= 1)
		return 1;
	else
		return factorial(numero - 1, ++espacios) * numero;
}

int main() {
	cout << factorial(12);

	system("pause");
}