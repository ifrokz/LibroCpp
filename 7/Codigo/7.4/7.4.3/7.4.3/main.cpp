#include <iomanip>
#include <iostream>
#include <array>
using namespace std;

int main() {
	const size_t tamanioArreglo = 5;

	array < int, tamanioArreglo > s;

	for (size_t i = 0; i < s.size(); i++)
		s[i] = 2 + 2 * i;

	cout << "Elemento" << setw(13) << "Valor" << endl;

	for (size_t i = 0; i < s.size(); i++)
		cout << setw(8) << i << setw(12) << s[i] << endl;


	system("pause");
}