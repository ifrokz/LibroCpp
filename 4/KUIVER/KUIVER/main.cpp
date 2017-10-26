#include <iostream>
#include <string>
using namespace std;

/*int main() {
	float distanciaKm = 0;
	float velocidadMaxKMh = 0;
	float tiempoEnHoras = 0;

	for (int i = 0; i < 3; i++ ) {
		cout << "Digita la distancia recorrida en metros:"; cin >> distanciaKm;
		cout << "\nVelocidad maxima de la via: "; cin >> velocidadMaxKMh;
		cout << "\nCuanto tiempo se ha tardado en segundos: "; cin >> tiempoEnHoras;

		distanciaKm = distanciaKm / 1000;
		tiempoEnHoras = tiempoEnHoras / 3600;


		float velocidadactual = distanciaKm / tiempoEnHoras;
		string resultado;
		if (distanciaKm < 0 || tiempoEnHoras < 0 || velocidadMaxKMh < 0)
			resultado = "Error"; 
		else if (velocidadactual > velocidadMaxKMh) {
			if (velocidadactual > velocidadMaxKMh*1.2) {
				resultado = "Puntos";
			}
			else {
				resultado = "Multa";
			}
		}
		else {
			resultado = "Ok";
		} 

		cout << resultado << ", " << velocidadactual << endl;
	}

	system("PAUSE");
}
*/

/*

	introduces: M/s

	comparas con: Km/h
*/

int main() {
	for (int i = 0; i < 3; i++) {
		float distanciaKm = 0;
		float velocidadMaxKMh = 0;
		float tiempoEnHoras = 0;
		float velocidadActual;

		cout << "Digita la distancia recorrida en metros:"; cin >> distanciaKm;
		cout << "\nVelocidad maxima de la via: "; cin >> velocidadMaxKMh;
		cout << "\nCuanto tiempo se ha tardado en segundos: "; cin >> tiempoEnHoras;
	
		distanciaKm /= 1000; // Esta es al cantidad de Km recorridos en el tiempo indicado.
		tiempoEnHoras = tiempoEnHoras / 60 / 60; // El tiempo que hemos tardado en recorrer esa distancia en Horas.

		velocidadActual = distanciaKm / tiempoEnHoras; // (formula de calculo de la velocidad V = Dist/tiempo )Ahora calculamos para X horas de trayecto a que velocidad he ido sabiendo la distancia en Km recorrida.

		string resultado;
		if (distanciaKm < 0 || tiempoEnHoras < 0 || velocidadMaxKMh < 0)
			resultado = "Error";
		else if (velocidadActual > velocidadMaxKMh) {
			if (velocidadActual > velocidadMaxKMh*1.2) {
				resultado = "Puntos";
			}
			else {
				resultado = "Multa";
			}
		}
		else {
			resultado = "Ok";
		}

		cout << resultado << ", " << velocidadActual << endl;
	}

	system("PAUSE");



	int ivanX = 10000;
	int antonioX = 10;
	
	int aux;

	aux = ivanX;
	ivanX = antonioX;
	antonioX = aux;
}