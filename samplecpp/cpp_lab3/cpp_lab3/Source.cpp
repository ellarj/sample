#include "Header.h"
#include <iostream>


using namespace std;


ostream & operator<<(ostream & stream, const zespolona & z) {
	stream << "z = " << z.getRe() << " + i " << z.getIm() << endl;
	return stream;
}

istream & operator>>(istream & stream, zespolona & z)
{
	stream >> z.re >> z.im;
	return stream;
}

void zadanie3(void) {

	{ 
	  zabawka toy1 = zabawka((char *)"Mis Uszatek"); 

	  zabawka toy2 = zabawka((char *)"Mis Puchate"); 

      zabawka toy3 = zabawka((char *)"Mis Koralgol");

	  zabawka toy4 = zabawka((char *)"Klapouchy");
	}

}; 

void zadanie4(void) { 
	zespolona z1;
	cout << "=====Tworzenie zespolonych======" << endl;
	cout << "z1 = " << z1 << endl;

	zespolona z2 (2, 4);
	cout << "z2 = " << z2 << endl;


	zespolona z3 = zespolona(1, 6);
	cout << "z3 = " << z3 << endl;


	zespolona z4 = zespolona(3, 7);
	cout << "z4 = " << z4 << endl;

	cout << "=====Operacje arytmetyczne na zespolonych======" << endl;
	zespolona z5, z6, z7;
	z5 = z1 + z4;
	cout << "z5 = z1 + z4 = " << z5 << endl;

	z5 += z2;
	cout << "z5 += z2 = " << z5 << endl;

	z6 = z2 * z3;
	cout << "z6 = z2 * z3 => " << z6 << endl;

	z6 = z5;
	cout << "z6 = z5 => " << z6 << endl;

};

void zadanie5() {

};

void zadanie6() {
	zespolona ** pZespol = new zespolona*[100];
	for (int i = 0; i < 100; i++) {
		*pZespol++ = nullptr;
	}
	int index = 0;
	int lastIndex = 0;
    char command = NULL;
	while (command != 'K') {
		cin >> command;
		switch (command) {
		case 'N': {
			cout << "Tworzenie liczby zespolonej za pomoca konstruktora 1 arg: " << endl;
			pZespol[lastIndex] = new zespolona(2.0);
			cout << "Utworzono liczbe o wartosci: " << *(pZespol[lastIndex])<< "zapisan¹ pod indeksem: " << lastIndex << endl;
			lastIndex++;
			break;
		}
		case 'R': {
			cout << "Tworzenie liczby zespolonej za pomoca konstruktora 2 arg: " << endl;
			pZespol[lastIndex] = new zespolona(2.0, 4.7);
			cout << "Utworzono liczbe o wartosci: " << *(pZespol[lastIndex]) << "zapisan¹ pod indeksem: " << lastIndex << endl;
			lastIndex++;
			break;
		}
		case 'W': {
			cout << "Wyswietlanie liczby zespolonej: " << endl;
			cout << "Podaj index " << endl;
			cin >> index;
			cout << "Wybrana liczba zespolona to: " << *(pZespol[index]);
			break;
		}
		case '+': {
			cout << "Dodawanie liczb zespolonych: " << endl;
			cout << "Podaj pierwsza liczbe zespolona " << endl;
			zespolona z1, z2, z3;
			cin >> z1;
			cout << "Podaj druga liczbe zespolona " << endl;
			cin >> z2;
			z3 = z1 + z2;
			cout << "Suma liczb zespolonych z2 = " << z2 << " + z1 = " << z1 << "to z3 = " << z3 << endl;
			break;

		}
		case '-': {
			cout << "Odejmowanie liczb zespolonych: " << endl;
			cout << "Podaj pierwsza liczbe zespolona " << endl;
			zespolona z1, z2, z3;
			cin >> z1;
			cout << "Podaj druga liczbe zespolona " << endl;
			cin >> z2;
			z3 = z2 - z1;
			cout << "Roznica liczb zespolonych z2 = " << z2 << " - z1 = " << z1 << "to z3 = " << z3 << endl;
			break;
		}
		case '*': {
			cout << "Mno¿enie liczb zespolonych: " << endl;
			cout << "Dodawanie liczb zespolonych: " << endl;
			cout << "Podaj pierwsza liczbe zespolona " << endl;
			zespolona z1, z2, z3;
			cin >> z1;
			cout << "Podaj druga liczbe zespolona " << endl;
			cin >> z2;
			z3 = z2 * z1;
			cout << "Roznica liczb zespolonych z2 = " << z2 << " * z1 = " << z1 << "to z3 = " << z3 << endl;
			break;
		}
		case '=': {
			cout << "Porownanie liczb zespolonych: " << endl;
			cout << "Podaj pierwsza liczbe zespolona " << endl;
			zespolona z1, z2;
			cin >> z1;
			cout << "Podaj druga liczbe zespolona " << endl;
			cin >> z2;
			if ( z1 == z2) {
				cout << "Liczba z1 = " << z1<< " rowna jest z2 = " << z2 <<  endl;
			} else {
				cout << "Liczba z1 = " << z1 << "  nie jest rowna z2 = " << z2 << endl;
            }
			break;
		}
		default:
		{
			cout << "Wybierz N, R, W, +, -, *,=, K: " << endl;
		}

		}

	
	}
	for (int i = 0; i < 100; i++) {

	}
};