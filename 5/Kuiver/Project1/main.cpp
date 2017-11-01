#include <iostream>

using namespace std;

int main() {
	int  horas, minutos, segundos;

	static int horasCosnt, minutosConst, segundosConst;

	cout << "Horas: "; cin >> horas; horasCosnt = horas;
	cout << "\nMinutos: "; cin >> minutos; minutosConst = minutos;
	cout << "\nSegundos: "; cin >> segundos; segundosConst = segundos;


	// Avanzamos el tiempo.
	segundos++;

	// ahora quiero saber si el tiempo ha excedido su limite de medida (60).
		// si lo es, transfiero un minuto a los minutos (min++) y vacio el contador de los segundos.

	// 1:59:59 + 0:0:01 = 2:60:0
	//  de izq a derecha
	// 2:0:0 izq a derecha

	bool heAcabado = false;
	for (int i = 0; heAcabado == false; i++) { // 3 cosas, de las cuales 2 son irrelevantes para el problema. No siempre es encesaria mas de 1 iteracion del bucle.
		if (segundos >= 60) {
			segundos = segundos - 60;
			minutos++;
		}
		if (minutos >= 60) {
			minutos = minutos - 60;
			horas++;
		}

		if (segundos < 60) {
			if(minutos < 60){
				heAcabado = true;
				cout << "he recorrido el bucle " << i+1 << " veces" << endl;
			}
		}
	}

	cout << "Bucle for:\n";
	cout << horas << ":" << minutos << ":" << segundos << endl;

	minutos = minutosConst;
	horas = horasCosnt;
	segundos = segundosConst;
	heAcabado = false;
	segundos++;
	while (heAcabado == false) { // No siempre es encesaria mas de 1 iteracion del bucle.
		if (segundos >= 60) {
			segundos = segundos - 60;
			minutos++;
		}
		if (minutos >= 60) {
			minutos = minutos - 60;
			horas++;
		}

		if (segundos < 60) {
			if (minutos < 60) {
				heAcabado = true;
			}
		}
	}



	minutos = minutosConst;
	horas = horasCosnt;
	segundos = segundosConst;
	heAcabado = false;
	segundos++;
	do {	 // PERFECTO
		if (segundos >= 60) {
			segundos = segundos - 60;
			minutos++;
		}
		if (minutos >= 60) {
			minutos = minutos - 60;
			horas++;
		}

		if (segundos < 60) {
			if (minutos < 60) {
				heAcabado = true;
			}
		}
	} while (heAcabado == false);

	

	cout << "Bucle do while:\n";
	cout << horas << ":" << minutos << ":" << segundos << endl;
	system("pause");
	return 0;
}

