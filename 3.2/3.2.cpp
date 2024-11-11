#include <iostream>
using namespace std;

int main() {
	
	double a, b, c, x, F;
	cout << "Введіть значення a: ";
	cin >> a;
	cout << "Введіть значення b: ";
	cin >> b;
	cout << "Введіть значення c: ";
	cin >> c;
	cout << "Введіть значення x: ";
	cin >> x;

	
	if (x + 10 < 0 && b != 0) {
		F = a * x * x - c * x + b;
	}
	else if (x + 10 > 0 && b == 0) {
		F = (x != a) ? (x - a) : (x - c);
	}
	else {
		F = -x / (a - c);
	}
	cout << "Результат (скорочена форма): " << F << endl;

	
	if (x + 10 < 0 && b != 0) {
		F = a * x * x - c * x + b;
	}
	else if (x + 10 > 0 && b == 0) {
		if (x != a) {
			F = x - a;
		}
		else {
			F = x - c;
		}
	}
	else {
		F = -x / (a - c);
	}
	cout << "Результат (повна форма): " << F << endl;

	
	system("pause");

	return 0;
}