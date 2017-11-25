#include <array>
#include <iostream>
using namespace std;

const size_t dimensionesLaberinto = 12;

void laberintoRecursivo(array < array <char, dimensionesLaberinto>, dimensionesLaberinto > & laberinto, short col, short row) {
	laberinto[row][col] = 'x';
	for (const array <char, dimensionesLaberinto> &col : laberinto) {
		for (const char &carac : col)
			cout << carac << " ";
		cout << endl;
	}
}

int main() {
	array < array <char, dimensionesLaberinto>, dimensionesLaberinto > laberinto = {
		'#','#','#','#','#','#','#','#','#','#','#','#',
		'#','.','.','.','#','.','.','.','.','.','.','#',
		'.','.','#','.','#','.','#','#','#','#','.','#',
		'#','#','#','.','#','.','.','.','.','#','.','.',
		'#','.','.','.','.','#','#','#','.','#','.','#',
		'#','#','#','#','.','#','.','#','.','#','.','#',
		'#','.','.','#','.','#','.','#','.','#','.','#',
		'#','#','.','#','.','#','.','#','.','#','.','#',
		'#','.','.','.','.','.','.','.','.','#','.','#',
		'#','#','#','#','#','#','.','#','#','#','.','#',
		'#','.','.','.','.','.','.','#','.','.','.','#',
		'#','#','#','#','#','#','#','#','#','#','#','#'
	};
	unsigned short RowInicio = 0, ColInicio = 2;
	laberintoRecursivo(laberinto, RowInicio, ColInicio);

	system("pause");
}

