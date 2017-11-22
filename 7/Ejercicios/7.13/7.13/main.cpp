#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

int main() {
	const size_t tamanioArreglo = 20;
	array < short, tamanioArreglo > numeros{};

	for (short &num : numeros)
	{
		bool dale = true;
		short temp; cin >> temp;
		if (temp >= 10 && temp <= 100) 
		{
			for (short &check : numeros)
				if (temp == check)
					dale = false;
			if (dale)
				num = temp;
		}
	}
	
	for (short &num : numeros)
		if (num != 0)
			cout << num << " ";
	system("pause");
}