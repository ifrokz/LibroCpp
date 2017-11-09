#include <iostream>
#include "maximo.h"
using namespace std;

int main() {
	{
		int val1, val2, val3;
		cout << "Introduzca tres valores enteros: " << endl; cin >> val1 >> val2 >> val3;
		cout << "\nEl valor int maximo es:" << maximo(val1, val2, val3);
		cout << "\n --------------------------------- \n" << endl;
	}
	

	{
		double val1, val2, val3;
		cout << "Introduzca tres valores decimales: " << endl; cin >> val1 >> val2 >> val3;
		cout << "\nEl valor double maximo es:" << maximo(val1, val2, val3);
		cout << "\n --------------------------------- \n" << endl;
	}

	{
		char val1, val2, val3;
		cout << "Introduzca tres caracteres: " << endl; cin >> val1 >> val2 >> val3;
		cout << "\nEl valor char maximo es:" << maximo(val1, val2, val3);
		cout << "\n --------------------------------- \n" << endl;
	}

	system("pause");
}