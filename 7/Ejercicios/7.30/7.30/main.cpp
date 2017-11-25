#include <iostream>
#include <array>
using namespace std;

const size_t tamanioArreglo = 10;
void imprimirArreglo(size_t begin, size_t end, array<short , tamanioArreglo > &arr) {
	cout << arr.at(begin) << " ";
	if (begin < end)
		imprimirArreglo(begin + 1, end, arr);
	else
		cout << endl;
}

int main() {
	array < short, tamanioArreglo > arr{ 1,2,3,4,5,6,7,8,9,10 };
	imprimirArreglo(0, arr.size() -1  , arr);
	system("pause");
}