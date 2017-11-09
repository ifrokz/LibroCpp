#include <iostream>
#include <math.h>
using namespace std;

template <typename T> 
void redondear (T numero)
{
	T cercano = numero;
	cout << numero << " -> ";

	if (fabs(ceil(numero) - numero) <= fabs(floor(numero) - numero))
		cercano = ceil(numero);
	else
		cercano = floor(numero);


	cout << cercano << endl;
}

int main() {

	redondear(2.2);
	redondear(1.5);
	redondear(1.8f);
	redondear(2);

	system("pause");
}