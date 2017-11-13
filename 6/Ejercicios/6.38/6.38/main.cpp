#include <iostream>
using namespace std;

void hanoi(int num, char inicio, char aux, char destino)
{
	if (num == 1)
		 {
		cout << "Mueva el bloque " << num << " desde " << inicio << " hasta  " << aux << endl;
		}
	else
		 {
		hanoi(num - 1, inicio, destino, aux);
		cout << "Mueva el bloque " << num << " desde " << inicio << " hasta  " << aux << endl;
		hanoi(num - 1, destino, aux, inicio);
		}
	}


int main() {
	hanoi(3, 'A', 'B', 'C');
	system("pause");
	
}