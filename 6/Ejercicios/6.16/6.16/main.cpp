#include <iostream>
#include <math.h>
#include <time.h>
using namespace std;

int main() {
	srand(static_cast<unsigned int>( time ( 0 ) ) );

	cout << "1 >= && <= 2: " << 1 + ( rand() % 2 ) << endl;
	cout << "1 >= && <= 100: " << 1 + (rand() % 100) << endl;
	cout << "0 >= && <= 9: " << (rand() % 10) << endl;
	cout << "1000 >= && <= 1112: " << 100 + (rand() % 112) << endl;
	cout << "-1 >= && <= 1: " << -1 + (rand() % 3) << endl;
	cout << "-3 >= && <= 11: " << -3 + (rand() % 15) << endl;

	system("pause");
}