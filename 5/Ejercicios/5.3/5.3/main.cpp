#include <iostream>

using namespace std;


void a() {
	unsigned int x = 1;
	while (x <= 10) {
		++x;
	}
}
void b() {
	for (unsigned int i = 1; i != 10; i++) {
		cout << (static_cast<double>(i) / 10) << endl; 
	}
}
void c() {
	short unsigned n = 1;
	switch (n) {
	case 1:
		cout << "Es el numero 1 " << endl;
		break;
	case 2:
		cout << "Es el numero 2" << endl;
		break;
	default: 
		cout << "No es el numero 1 ni el numero 2" << endl;
		break;
	}
}
void d() {
	unsigned int n = 1;
	while (n <= 10) {
		cout << n++ << endl;
	}
}

int main() {
	//a();
	//b();
	//c();
	//d();
	system("pause");
}