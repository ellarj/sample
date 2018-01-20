#include <iostream>
#include <cstdio>

using namespace std;

void zadanie1_7() {
	cout << "Print extended ASCII table: " << endl;
	int row, col;
	for (row = 32; row <= 255; row++) {
		cout << "Znak ACII o kodzie: " << row << " to: " << static_cast<char>(row) << endl;
		if ( ! ( (row - 32) % 24 ) ) {
			cout << "Nacisnij [ENTER] zeby kontynuowaæ " << endl;
			getchar();
		}
	}
	system("pause");
	return;
}