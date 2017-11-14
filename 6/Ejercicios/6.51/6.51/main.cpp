#include <iostream> 
using namespace std;

template< typename T > 
auto minimo(T a, T b) -> T
{
	return a < b ? a : b;
}

template< class T >
auto maximo(T a, T b) -> unsigned short
{
	return a > b ? a : b;
}

int main() {
	char a = 'a', b = 'b';
	cout << "El minimo es: " << minimo(a, b) << endl;
	cout << "El maximo es: " << maximo(a, b) << endl;
	system("pause");
}