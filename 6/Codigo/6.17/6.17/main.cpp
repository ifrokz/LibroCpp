#include <iostream>
using namespace std;

int numero = 7;

int main() {
	double numero = 10.5;

	cout << 
		"numero local: " << numero << "\n"
		"Numero global: " << ::numero << endl;
	
	system("pause");
}