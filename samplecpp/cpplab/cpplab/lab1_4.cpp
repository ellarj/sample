#include <iostream>
#include <string>
using namespace std;


int zadanie1_4(void) {
	int maksymalny_spadek = 0, maksymalna_waga = 0, waga;
	int liczba_dni;

	cout << "Podaj liczbe dni " << endl;
	cin >> liczba_dni;
	for (int i = 0; i < liczba_dni; i++) {
		cin >> waga;
		if (waga > maksymalna_waga) {
			maksymalna_waga = waga;
		}
		if (maksymalna_waga - waga > maksymalny_spadek) {
			maksymalny_spadek = maksymalna_waga - waga;
		}
	}
	cout << "Maksymalny spadek wagi to " << maksymalny_spadek << endl;
	system("pause");
	return maksymalny_spadek;
}