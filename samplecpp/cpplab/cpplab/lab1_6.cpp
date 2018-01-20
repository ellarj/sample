#include <iostream>
#include <conio.h>
#include <cctype>
#include <stdlib.h>

using namespace std;

void zadanie1_6(void) {
	unsigned char znak;
	cout << "Klawisz [ESC] wychodzi z programu." << endl;
	do {
		znak = _getch();
		if (isdigit(znak)) {
			cout << "znak to cyfra: " << znak << " kod: " << static_cast <int>(znak) << endl;
		}
		else {
			cout << "znak: " << znak << " kod: " << static_cast <int>(znak) << endl;
		}
		cout << endl;
	} while (znak != 27);
	system("pause");
   return;
}