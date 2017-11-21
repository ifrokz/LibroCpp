#include<iomanip>
#include<iostream>
#include<vector>
#include<stdexcept>
using namespace std;

void imprimirVector(const vector< int > &);
void recibirVector(vector<int> &);

int main() {
	vector<int> enteros1(7);
	vector<int> enteros2(10);

	cout << "El tamanio del vector enteros1 es " << enteros1.size()
		<< "\nvector despues de la inicializacion: " << endl;
	imprimirVector(enteros1);

	cout << "El tamanio del vector enteros2 es" << enteros2.size()
		<< "\nvector despues de la inicializacion: " << endl;
	imprimirVector(enteros2);

	cout << "\nEscriba 17 enteros: " << endl;
	recibirVector(enteros1);
	recibirVector(enteros2);

	cout << "Depues de la entrada los vectores contienen: \nenteros1: " << endl;
	imprimirVector(enteros1);
	cout << "enteros2:" << endl;
	imprimirVector(enteros2);

	cout << "\nEvaluacion: enteros1 != enteros2" << endl;
	if (enteros1 != enteros2)
		cout << "Enteros 1 y 2 no son iguales" << endl;

	vector < int > enteros3(enteros1);
	cout << "El tamanio del vector enteros3 es " << enteros3.size() << "\nvector depues de la inicalizacion:" << endl;
	imprimirVector(enteros3);

	cout << "Asignacion de enteros2 a enteros1: " << endl;
	enteros1 = enteros2;

	cout << "enteros1:" << endl;
	imprimirVector(enteros1);
	cout << "enteros2:" << endl;
	imprimirVector(enteros2);

	cout << "Evaluacion de enteros1 == enteros2" << endl;
	if (enteros1 == enteros2)
		cout << "enteros1 y enteros2 son iguales. " << endl;

	cout << "enteros1[5] = " << enteros1[5];

	cout << "\n\nAsignacion de 1000 a enteros1[5] " << endl;
	enteros1[5] = 1000;
	cout << "enteros1:" << endl;
	imprimirVector(enteros1);

	try {
		cout << "\nIntento de mostrar enteros1.at(15)" << endl;
		cout << enteros1.at(15) << endl;
	}
	catch ( out_of_range &ex)
	{
		cerr << "Ocurrio una excepcion: " << ex.what() << endl;
	}

	cout << "El tamanio actual de enterios3 es de " << enteros3.size() << endl;
	enteros3.push_back(1000);
	cout << "El tamanio actual de enteros3 es de " << enteros3.size() << endl;
	cout << "Ahora enteros3 contiene: " << endl;
	imprimirVector(enteros3);

	system("pause");
}

void imprimirVector(const vector< int > &arreglo) {
	for (int elemento : arreglo)
		cout << elemento << " ";

	cout << endl;
}

void recibirVector(vector < int > & arreglo) {
	for (int &elemento : arreglo)
		cin >> elemento;
}

