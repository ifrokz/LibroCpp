#include <iostream>
#include <iomanip>
using namespace std;

bool multiplo(int, int);

int main() {
	int a, b;
	cin >> a >> b;

	cout << boolalpha << multiplo(a, b) << endl;
	system("pause");
}

bool multiplo(int a, int b) {
	if (a % b == 0)
		return true;
	else
		false;
}