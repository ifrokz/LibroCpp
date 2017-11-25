#include <iostream>
#include <array>	
using namespace std;

const size_t tamanioArreglo = 10;
int minimoRecursivo(size_t begin, size_t end, array <int , tamanioArreglo> &arr) {
	if (begin < end) {
		int x = minimoRecursivo(begin + 1, end, arr);
		if (x < arr[begin])
			return x;
		else
			return arr[begin];
	}
	else 
		return arr[begin];
}

int main() {
	array <int, tamanioArreglo > arr{ 6, 2 ,3 ,4 ,5 ,6 ,2, 8 ,9, 10 };
	cout << "El minimo es: " << minimoRecursivo(0, arr.size()-1, arr) << endl;
	system("pause");
}