#include <iostream>
#include <corecrt_math_defines.h>
#include <math.h>
using namespace std;

inline float areaCirculo(float radio) {
	return M_PI * pow(radio, 2);
}

int main() {
	float radio;
	cout << "Escribe el radio del circulo a calcular: "; cin >> radio;
	cout << "El area del circulo es de: " << areaCirculo(radio) << endl; 
	system("pause");
}