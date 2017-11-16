#include <iostream> 
#include <array>
using namespace std;

int main() {
	array < int, 5 > items = { 1, 2, 3, 4, 5 };

	cout << "items antes de modificarlos: ";
	for (int item : items)
		cout << item << " ";

	for (int &refItems : items)
		refItems *= 2;

	cout << "\nitems despues de modificarlos: ";
	for (int item : items)
		cout << item << " ";

	cout << endl;
	system("pause");
}