#include <iostream>

using namespace std;

int main() {
	int num, a, b, i;
	a = 0;
	b = 1;
	i = 0;
	
	cin >> num;

	cout << a << ", ";
	
	while (i < num-1) {
		cout << b << ", ";

		b += a;
		a = b - a;

		i++;	
	}

	cout << b << endl;

	return 0;
}
