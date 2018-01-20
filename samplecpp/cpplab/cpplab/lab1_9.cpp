#include <iostream>
#include <string>
#include <map>

using namespace std;

void zadanie1_9(void) {
	typedef std::map<char, int> CharMap_t;
	string bufor;
	CharMap_t asciiTablica;

	cout << "Podaj wejsciowy ciag znakow " << endl;
	getline(std::cin >> std::ws, bufor);
 	for (unsigned int i = 0; i < bufor.length(); i++) {
		asciiTablica[bufor[i]]++;
	}

	for (CharMap_t::iterator i = asciiTablica.begin(); i != asciiTablica.end(); i++) {
		std::cout << (*i).first << " :  " << (*i).second << endl;
	}
	system("pause");
	return;

}