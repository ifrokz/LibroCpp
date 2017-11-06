#include <iostream>

using namespace std;

void function1();
void function2(void);
int main() {

	function1();
	function2();

	system("pause");
}

void function1() {
	cout << "funcion function1 no recibe argumentos" << endl;
}


void function2(void) {
	cout << "funcion2 tampoco recibe argumentos" << endl;
}

