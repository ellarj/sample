#include <iostream>

using namespace std;

double sum(int n);

double zadanie1_7_1(void) {
	int n;
	double result = 0.0;
	cout << "Podaj liczbe wyrazow ciagu harmonicznego " << endl;
	cin >> n;
	result = sum(n);
	cout << "Suma ciagu harmonicznego  o " << n << " wyrazach to: " << result;
	system("pause");
	return result;

}

double sum(int n) {
	double sum = 0.0;
	if (n) {
		for (int i = 1; i < n; i++) {
			sum +=  1 / (static_cast<double>( i ) );
		}
	}
	return sum;
}