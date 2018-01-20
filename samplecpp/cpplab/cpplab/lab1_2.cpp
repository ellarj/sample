#include <iostream>
using namespace std;

void zadanie1_2(void) {
	int n;
	cout << "Podaj liczbe wierszy " << endl;
	cin >> n;
	for ( int i = 0; i < n; i++ ) {
		if ( !(i % 2) ) {
			for (int j = 0; j < n; j++) {
				cout << i * n + j + 1  << " ";
			}
		}
		else {
			for (int j = n; j > 0 ; j--) {
				cout << i * n + j << " ";
			}
		}
		cout << endl;
	}
	system("pause");

}
