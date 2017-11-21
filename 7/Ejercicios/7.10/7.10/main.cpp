#include <array>
#include<iostream>
using namespace std;

int main() {
	const size_t tamanioArreglo = 9;
	const unsigned short int salarioBase = 200;
	unsigned int salario;
	array < int, tamanioArreglo > rangos = {};

	{
		cout << "Introduce las ventas de cada uno de los trabajadores: " << endl;
		int dineroVentas = 0;
		while (cin >> dineroVentas) {
			dineroVentas = (dineroVentas*0.09);
			dineroVentas < 800 ? rangos[dineroVentas / 100] ++ : rangos[8]++;
		}
	}

	for (size_t contador = 0; contador < tamanioArreglo; contador++)
	{
		if (10 == contador+2)
			cout << "1000$ en adelante:";
		else
			cout << ((contador * 100) + salarioBase) << "-" << ((contador * 100) + salarioBase) + 99 << ": ";

		cout << rangos.at(contador) << endl;
	}
	 

	//for(size_t contador = 0 ; )

system("pause");
}