#include <iostream>
#include <iomanip>
#include <array>

using namespace std;

int main() {
	array < int, 5> n;

	for (size_t i = 0; i < n.size(); i++)
		n[i] = 0;

	cout << "Elemento " << setw(13) << "Valor" << endl;

	for (size_t j = 0; j < n.size(); j++)
		cout << setw(7) << j << setw(13) << n[j] << endl;

	system("pause");
}