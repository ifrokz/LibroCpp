#include <iostream>
#include <random>
#include <time.h>
using namespace std;

int main() {
	default_random_engine motor(static_cast < unsigned int > ( time ( 0 ) ) );
	uniform_int_distribution<unsigned int> numAleatorio(1, INT32_MAX); 

	cout << "2,4,6,8,10: -> " <<  2 * (1 + ( numAleatorio(motor) % 5 ) ) << endl;
	cout << "3,5,7,9,11: -> " << 1 + 2 * (1 + (numAleatorio(motor) % 5)) << endl;
	cout << "6,10,14,18,22: -> " << 2 + 4 * (1 + (numAleatorio(motor) % 5)) << endl;
	
	system("pause");
}