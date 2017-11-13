#include <iostream>
using namespace std; 

int mcd(int a, int b) {
	for (unsigned int contador = a < b ? a : b ; contador > 0; contador--) {
		if(a % contador == 0)
			if (b % contador == 0)
				return contador;
	}
}

int main() {
	cout << mcd(34542, 5522) << endl;
	system("pause");
}