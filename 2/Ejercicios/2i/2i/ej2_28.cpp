#include <iostream>

using namespace std;

int main0228() {

	int number = 625476;
	
	while (number > 0) {
		cout << (number % 10) << " ";
		number /= 10;
	}
	cout << endl;

	system("pause");

	return 0;
}