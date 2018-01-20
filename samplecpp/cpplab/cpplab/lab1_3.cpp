#include <iostream>
#include <string>
using namespace std;

void zadanie1_3(void) {
	const int k = 1000;
	int n, liczba;
	string wynik = "TAK";
	int A[k];
	int i;
	for (i = 0; i < k; i++) {
		A[i] = 0;
	}
	cout << "Podaj ilosc liczb" << endl;
	cin >> n;
	for ( i = 0; i < n; i++ ) {
		cin >> liczba;
		A[liczba - 1] = 1;
	}

	for ( i = 0; i < n; i++ ) {
		if ( ! A[i] ) {
			wynik = "NIE";
		}
	}
	cout << "Czy dany ciag liczb jest permutacja " << wynik << endl;
	system("pause");

}