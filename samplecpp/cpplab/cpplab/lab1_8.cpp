#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

struct wizytowka {
	string imie;
	string nazwisko;
	int kod;
	string ulica;
	string miejscowosc;
};

void zadanie1_8(void) {
	const int ile = 2;
	struct wizytowka osoba[ile];
	for ( int i = 0; i < ile; i++ ) {
		if (_getch() == 27) {
			break;
  		}
		cout << "Podaj imie. " << endl;
		cin >> osoba[i].imie;
		cout << "Podaj nazwisko. " << endl;
		cin >> osoba[i].nazwisko;
		cout << "Podaj kod: " << endl;
		cin >> osoba[i].kod;
		cout << "Podaj ulice: " << endl;
		cin >> osoba[i].ulica;
		cout << "Podaj miejscowosc: " << endl;
		cin >> osoba[i].miejscowosc;
	}
	cout << "Wprowadzone dane to: " << endl;
	for (int i = 0; i < ile; i++) {
		cout << "Osoba nr " << i << endl;
		cout << "Imie to:  " << osoba[i].imie  << "   Nazwisko to: " << osoba[i].nazwisko << endl;
		cout << "Kod to: " << osoba[i].kod  << "   Ulica to: " << osoba[i].ulica << "   Miejscowosc to: " << osoba[i].miejscowosc << endl;
	}
	system("pause");
	return;
}