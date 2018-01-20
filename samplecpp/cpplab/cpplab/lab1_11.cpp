#include <iostream>
#include <string>

using namespace std;

void zadanie1_11(void) {
	string tekst;
	string wzorzec;
	string zastap;

	cout << "Podaj tekst " << endl;
	getline(std::cin >> std::ws, tekst);
	cout << "Ktory fragment tekstu chcesz zastapic " << endl;
	getline(std::cin >> std::ws, wzorzec);
	cout << "Podaj tekst, ktory chcesz wstawic " << endl;
	getline(std::cin >> std::ws, zastap);

	string::size_type p = tekst.find(wzorzec);
	if (p != string::npos) {
		tekst.replace(p, wzorzec.length(), zastap);
	}
	cout << "Tekst po przerobce : " << tekst << endl;
	system("pause");
	return;
}