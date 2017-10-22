#include <iostream>
using namespace std;

int main() { // Calcula si tu peso es saludable.


	cout << "VALORES DE BMI" << endl;
	cout << "Bajo peso:\tmenos de 18.5" << endl;
	cout << "Normal:\t\tentre 18.5 y 24.9" << endl;
	cout << "Sobrepeso:\tentre 25 y 29.9" << endl;
	cout << "Obeso:\t\t30 o mas" << endl;

	float peso = 0, altura = 0, bmi = 0;

	cout << "Escribe tu peso:";
	cin >> peso;
	cout << "Escribe tu altura en cm:";
	cin >> altura;
	altura /= 100;


	bmi = peso / (altura * altura);
	cout << "Tu BMI es de: " <<  bmi << endl;
	

	system("pause");
	return 0;
}