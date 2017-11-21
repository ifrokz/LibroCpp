#include <iostream>
#include <array>
using namespace std;

void a() {
	cout << "A: " << endl;
	const size_t tamanioArreglo = 10;
	array < int, tamanioArreglo > cuentas {};
	for (int &num : cuentas)
		cout << num << " ";
	cout << "\n\n" << endl;
}

void b(){
	cout << "B: " << endl;
	const size_t tamanioArreglo = 15;
	array < short, tamanioArreglo > bono {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
	short int total{};
	for (short &val : bono)
		total += val;
	cout << "El total es: " << total << "\n\n"  << endl;
}

void c() {
	cout << "C: " << endl;
	const size_t tamanioArreglo = 12;
	array < double, tamanioArreglo > temperaturas{};
	for (double &dato : temperaturas)
		cin >> dato;
	for (double &dato : temperaturas)
		cout << dato << " ";
	cout << "\n\n" << endl;
}

int main() {
	a();
	b(); 
	c();
	system("pause");
}