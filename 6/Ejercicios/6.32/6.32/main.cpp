#include <iostream>
using namespace std;

unsigned short calif(unsigned short media) {
	if (media >= 90)
		return 4;
	else if (media >= 80)
		return 3;
	else if (media >= 70)
		return 2;
	else
		return 1;
}

int main() {
	cout << calif(90) << endl;

	system("pause");
}