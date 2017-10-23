//Fig 2.5

#include <iostream>

int main() {
	int numero1 = 0;
	int numero2 = 0;
	int suma = 0;

	std::cout << "Escriba un numero entero: ";
	std::cin >> numero1;

	std::cout << "Escriba el segundo entero: ";
	std::cin >> numero2;

	suma = numero1 + numero2;

	std::cout << "La suma es " << suma << std::endl;

	system("pause");
}

