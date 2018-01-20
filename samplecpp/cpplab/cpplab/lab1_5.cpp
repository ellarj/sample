#include <iostream>
#include <string>

using namespace std;

void zadanie1_5(void) {
	string imie;
	cout << "Prosze podaj swoje imie " << endl;
	cin >> imie;
	if (tolower(imie[imie.length() - 1]) == 'a') {
		cout << "Witam Pani " << imie << endl;
	} else {
		cout << "Witam Panie " << imie << endl;
	}
	system("pause");
	return;
}