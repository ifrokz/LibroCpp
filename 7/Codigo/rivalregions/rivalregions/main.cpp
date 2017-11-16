#include <iostream>

using namespace std;

int oroFabrica(int );
void nivelFabrica(int );
int main() {
	cout << oroFabrica(71) << endl;
	nivelFabrica(333);
	system("pause");
}

int oroFabrica(int nivel) {
	return nivel == 1 ? 500 : (nivel * 5) + oroFabrica(nivel - 1);
}

void nivelFabrica(int oro) {
	int nivel = 0;
	if (oro >= 500) {
		oro -= 500;
		while (oro > 0 && oro >= ((nivel + 1) * 5)) {

			oro -= nivel++ * 5;
		}
	}
	
	cout << nivel << endl;
}