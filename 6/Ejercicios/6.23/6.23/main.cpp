#include<iostream>
using namespace std;

void cuadrado(unsigned int lado, char relleno);
int main() {
	char relleno = '#';
	cuadrado(4, relleno);
	cout << endl;

	system("pause");
}

void cuadrado(unsigned int lado, char relleno) {
	for (int i = 0; i < lado * lado; i++) {
		if (i % lado == 0 && i != 0)
			cout << endl;
		cout <<  relleno;
	}
}