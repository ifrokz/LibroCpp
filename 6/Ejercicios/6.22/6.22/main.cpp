#include<iostream>
using namespace std; 

void cuadrado(unsigned int lado);
int main() {

	cuadrado(4);
	cout << endl;

	system("pause");
}

void cuadrado(unsigned int lado) {
	for (int i = 0; i < lado * lado; i++) {
		if (i % lado == 0 && i != 0)
			cout << endl;
		cout << "*";
	}
}