#include <iostream>

using namespace std;
int koszykarz(int current, int required, int step);

void zadanie1_1(void) {
	int current, required, step, count = 0;
	cout << "Podaj wysokosc Jacka" << endl;
	cin >> current;
	cout << "Podaj wymagana wysokosc" << endl;
	cin >> required;
	cout << "Podaj wysokosc guza" << endl;
	cin >> step;
	int result = koszykarz(current, required, step);
	cout << "Jacek musi sobie nabiæ " << result << " guzow";
	system("pause");
}

int koszykarz(int current, int required, int step) {
	int total = current, count = 0;
	while (total < required) {
		total += step;
		count++;
	}
	return count;

}