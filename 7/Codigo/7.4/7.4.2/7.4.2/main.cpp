#include <iostream>
#include <iomanip>
#include <array>

using namespace std;

int main() {
	array < int, 5> n = { 32, 27, 64, 18, 95 };

	cout << "Elemento " << setw(13) << "Valor" << endl;

	for (size_t j = 0; j < n.size(); j++)
		cout << setw(8) << j << setw(12) << n[j] << endl;

	system("pause");
}