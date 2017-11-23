// reconocer palindromos.
#include <iostream>
#include <string>
using namespace std;

bool esPalindromo(size_t begin, size_t end,  string & frase) {
	while (frase[begin] == ' ')
		begin++;
	while (frase[end] == ' ')
		end--;
	
	if (frase.size() <= 1)
		return true;
	else if (begin < end) {
		if (frase[begin] == frase[end])
			if (begin + 1 == end)
				return true;
			else
				return esPalindromo(begin+1, end-1, frase);
		else
			return false;
	}
	else {
		return true;
	}
}

int main() {

	string palindromo = "aaa";
	cout << esPalindromo(0, palindromo.size()-1, palindromo) << endl;
	system("pause");
}