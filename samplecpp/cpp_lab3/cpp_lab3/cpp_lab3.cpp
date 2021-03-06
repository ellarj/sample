// cpplab3.cpp : Defines the entry point for the console application.
//
#define _CRT_SECURE_NO_WARNINGS 1 
#define _WINSOCK_DEPRECATED_NO_WARNINGS 1 
#include <iostream>
#include <string>
#include <string.h>
#include "Header.h"


using namespace std;

class Pies;


class Pies {
public:
	char * imie;
	string barwa;
	double energia;

	void spaceruj(void) {
		cout << " Pies " << imie << " spaceruje " << endl;
		energia -= 10;
	};

//	void spaceruj(int minuty) {
//		cout << " Pies " << imie << " spaceruje " << minuty << " minut" <<  endl;
//		energia -= 10;
//	};

//	void spaceruj(double godziny) {
//		cout << " Pies " << imie << " spaceruje " <<godziny << " godzin" << endl;
//		energia -= 10;
//	};

	void spaceruj(int minuty, double godziny = 1) {
		cout << " Pies " << imie << " spaceruje " << godziny << " godzin lub " << minuty << " minut " <<  endl;
		energia -= 10;
	};

	void jedz(void) {
		cout << " Pies " << imie << " je " << endl;
		energia += 20;
	};
	double ileEnergii(void) {
		cout << " Energia dla " << imie << " = " << energia << endl;
		return energia;
	}

	Pies() : barwa("nieokreslona"), energia(50) {
		imie = new char[80];
		strcpy(imie, "pies");
	};

	Pies(char * imie, double energia_poczatkowa) : imie(imie), barwa("nieokreslona"), energia(energia_poczatkowa) {
	};

	Pies(string barwa, double energia_poczatkowa) : barwa(barwa), energia(energia_poczatkowa) {
		imie = new char[80];
		strcpy(imie, "pies");
	};

	Pies(const Pies &pies) : imie(pies.imie) {
		imie = new char[strlen(pies.imie) + 1];
		strcpy(imie, pies.imie);
		imie = pies.imie;
		barwa = pies.barwa;
		energia = pies.energia + 4;

	};


	Pies(const Pies &pies, char * conc) {
		imie = new char[strlen(pies.imie) + 1];
		strcpy(imie, pies.imie);
		imie = pies.imie;
		strcat(imie, conc);
		barwa = pies.barwa;
		energia = pies.energia + 4;

	};
private:

};


int main()
{
	Pies wilczur;
	Pies jamnik;
	Pies burek = Pies();
	Pies *wskPies = new Pies();
	wilczur.imie = const_cast<char *>("Reksio");
	wilczur.imie = const_cast<char *>("Reksi02");
	jamnik.imie = const_cast<char *>("Pluto");
	burek.imie = const_cast<char *>("Doda");
	burek.barwa = "czarny";
	wskPies->imie = const_cast<char *>("Rambo");
	wskPies->barwa = "zloty";
	Pies husky = Pies("Max", 70);
	Pies jamnik2 = Pies("bialy", 20);
	Pies wilk(husky);
	wilk.imie = const_cast<char *>("zlyWilk");
	wilk.barwa = "srebrny";
	Pies drugi_husky(husky, (char *)"drugi");

	cout << "Imie wilczur: " << wilczur.imie << endl;
	cout << "Energia dla : " << wilczur.imie << " = " << wilczur.energia << endl;
	wilczur.spaceruj();
	wilczur.ileEnergii();
	wilczur.jedz();
	wilczur.ileEnergii();
	cout << "=====zadanie 5======" << endl;
	wilczur.spaceruj(20);
	wilczur.spaceruj(2.5);
	wilczur.spaceruj(15, 3);

	cout << "Imie jamnik: " << jamnik.imie << endl;
	cout << "Energia dla : " << jamnik.imie << " = " << jamnik.energia << endl;
	jamnik.spaceruj();
	jamnik.ileEnergii();
	jamnik.jedz();
	jamnik.jedz();
	jamnik.jedz();
	jamnik.ileEnergii();

	cout << "Barwa : " << burek.imie << " " << burek.barwa << endl;
	cout << "Energia dla : " << burek.imie << " = " << burek.energia << endl;
	burek.spaceruj();
	burek.ileEnergii();
	burek.jedz();
	burek.ileEnergii();

	cout << "Barwa : " << wskPies->imie << " " << wskPies->barwa << endl;
	cout << "Energia dla : " << wskPies->imie << " = " << wskPies->energia << endl;
	wskPies->spaceruj();
	wskPies->ileEnergii();
	wskPies->jedz();
	wskPies->ileEnergii();

	cout << "Barwa : " << husky.imie << " " << husky.barwa << endl;
	cout << "Energia dla : " << husky.imie << " = " << husky.energia << endl;
	husky.spaceruj();
	husky.ileEnergii();
	husky.jedz();
	husky.ileEnergii();


	cout << "Barwa : " << jamnik2.imie << " " << jamnik2.barwa << endl;
	cout << "Energia dla : " << jamnik2.imie << " = " << jamnik2.energia << endl;
	jamnik2.spaceruj();
	jamnik2.spaceruj();
	jamnik2.spaceruj();
	jamnik2.spaceruj();
	jamnik2.ileEnergii();
	jamnik2.jedz();
	jamnik2.ileEnergii();

	cout << "Imie wilka: " << wilk.imie << endl;
	cout << "Barwa wilka: " << wilk.barwa << endl;
	cout << "Energia dla wilka: " << wilk.imie << " = " << wilk.energia << endl;
	wilk.ileEnergii();

	cout << "Sprawdz husky: " << endl;
	cout << "Barwa : " << husky.imie << " " << husky.barwa << endl;
	cout << "Energia dla : " << husky.imie << " = " << husky.energia << endl;

	//cout << "Drugi husky: " << endl;
	//cout <<  "Barwa : " << drugi_husky.imie << " " << drugi_husky.barwa << endl;
	//cout <<  "Energia dla : "  << drugi_husky.imie << " = " << drugi_husky.energia << endl;

	cout << "===== Zabawki======" << endl;
	zabawka toy = zabawka((char *)"Mis");
	cout << "Imie zabawki: " << toy.getNazwa() << endl;
	zadanie3();

	cout << "===== Zespolone======" << endl;
	zadanie4();

	zadanie6();

	system("pause");
	return 0;

}


