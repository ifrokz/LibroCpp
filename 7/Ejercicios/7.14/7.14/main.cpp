#include <iostream>
#include <vector>
using namespace std;

int main() {
	
	vector<short > numeros{};
	for (size_t contador{}; contador < 20; contador++) {
		short temp = 0; cin >> temp;
		if (temp >= 10 && temp <= 100) {
			bool dale = true;
			for (short &num : numeros)
				if (num == temp)
					dale = false;
			if (dale)
				numeros.push_back(temp);
		}
	}

	for (short & num : numeros)
		cout << num << " ";
	cout << endl;
		

	system("pause");
}