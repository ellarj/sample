#include <iostream>

using namespace std;

double poleTrojkata(double a, double b);

void zadanie1_0(void) {
	double a, h;
	cout << "Funkcja oblicza pole trojkata" << endl;
	cout << "Podaj wysokosc trojkata" << endl;
	cin >> h;
	cout << "Podaj pole podstawy trojkata" << endl;
	cin >> a;
	cout << "Pole trojkata wynosi: " << poleTrojkata(a, h) << endl;
	system("pause");
}


double poleTrojkata(double a, double b) {

	return 0.5*a*b;
}