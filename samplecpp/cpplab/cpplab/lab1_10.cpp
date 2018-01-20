#include <iostream>
#include <map>

using namespace std;

const int n = 10;

bool increase(int tab[]);
bool decrease(int tab[]);
bool symetric(int tab[]);
bool repeat(int tab[]);

void zadanie1_10(void) {
	// wczytanie danych

	int tab[n];

	for (int i = 0; i < n; i++) {
		tab[i] = 0;
	}

	for (int i = 0; i < n; i++) {
		cin >> tab[i];
	}

	for (int i = 0; i < n; i++) {
		cout << tab[i] << endl;
	}

	if (increase(tab)) {
		// czy rosnaca
		cout << "Liczby sa uporzadkowane rosnaca " << endl;
	} else if (decrease(tab)) {
		//czy malejaca
		cout << "Liczby sa uporzadkowane malejaco " << endl;
	} else if (symetric(tab)) {
		// elementy symetryczne
		cout << "Liczby sa uporzadkowane symetrycznie " << endl;
	} else {
		cout << "Liczby nie sa uporzadkowane ani rosnaco, ani malejaco, ani symetrycznie " << endl;
	}
	if (repeat(tab)) {
		// czy jest powtorzenie
		cout << "Wystepuja powtorzenia " << endl;
	}
	system("pause");
	return;
}

bool increase(int tab[]) {
	bool flag = true;
	for (int i = 0; i < n - 1; i++) {
		if (tab[i] > tab[i + 1]) {
			flag = false;
			cout << tab[i] << " jest wieksza od nastepnego " << tab[i + 1] << endl;
			cout << "Ciag nie jest rosnacy " << endl;
			break;
		}
	}
	return flag;
}

bool decrease(int tab[]) {
	bool flag = true;
	for (int i = 0; i < n - 1; i++) {
		if (tab[i] < tab[i + 1]) {
			flag = false;
			cout << tab[i] << " jest mniejsza od nastepnego " << tab[i + 1] << endl;
			cout << "Ciag nie jest malejacy " << endl;
			break;
		}
	}
	return flag;
}

bool symetric(int tab[]) {
	bool flag = true;
	for (int i = 0, j = (n - 1); i < n/2, j > n/2; i++, j-- ) {
		if ( tab[i]!=tab[j] ) {
			flag = false;
			break;
		}
	}
	return flag;
}

bool repeat(int tab[]) {
	bool flag = true;
	typedef map<int, int>  IntMap_t;
	IntMap_t temp;
	for (int i = 0; i < n; i++) {
		temp[tab[i]]++;
	}

	for (IntMap_t::iterator i = temp.begin(); i!= temp.end(); i++) {
		std::cout << (*i).first << " :  " << (*i).second << endl;
	}
	for (IntMap_t::iterator i = temp.begin(); i != temp.end(); i++) {
	    if ((*i).second > 1) {
			flag = false;
			break;
		}
	}
	return flag;
}