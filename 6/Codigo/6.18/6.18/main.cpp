#include <iostream>
using namespace std;

int cuadrado(int x) {
	cout << "El cuadrado de un entero " << x << " es ";
	return x * x;
}

double cuadrado(double x) {
	cout << "El cuadrado de un double " << x << " es ";
	return x * x;
}

void fig6_23() {
	cout << cuadrado(7) << endl;
	cout << cuadrado(5.5) << endl;
}




int main() {
	fig6_23();

	system("pause");
}
