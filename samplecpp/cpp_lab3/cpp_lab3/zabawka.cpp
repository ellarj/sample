#include "Header.h"
#include <iostream>
#include <cstring>
#include <iostream>

using namespace std;

int ile_zabawek;

zabawka::zabawka(char * nazwa_0) {
	nazwa = new char[20];
	strcpy(nazwa, nazwa_0);
	++ile_zabawek;
	nr = ile_zabawek;
	cout << "Konstruktor obiektu " << (*this).getNazwa() << " o numerze: " << (*this).getNr() << endl;
	cout << "Ilosc zabawek obecnie wynosi: " << ile_zabawek << endl;
}

char * zabawka::getNazwa() {
	return nazwa;
}

int zabawka::getNr() {
	return nr;
}

zabawka::~zabawka() {
	cout << "Destruktor obiektu " << (*this).getNazwa() << " o numerze: " << (*this).getNr() << endl;
	--ile_zabawek;
	delete nazwa;
	nazwa = 0;
	cout << "Ilosc zabawek obecnie wynosi: " << ile_zabawek << endl;
}
