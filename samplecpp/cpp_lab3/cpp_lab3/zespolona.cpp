#include "Header.h"
#include <iostream>

using namespace std;

zespolona::zespolona() {
	re = 0;
	im = 0;
}

zespolona::zespolona(double real, double image ) {
	re = real;
	im = image;
}
zespolona::zespolona(double value ) {
	re = value;
	im = value;
}


zespolona::zespolona(const zespolona & z) {
	re = z.re;
	im = z.im;
}

double zespolona::getRe() const {
	return re;
}

double zespolona::getIm() const {
	return im;
}

void zespolona::setRe(double real) {
	re = real;
}

void zespolona::setIm(double image) {
	im = image;
}

zespolona::~zespolona() {
}

zespolona zespolona::operator+(const zespolona & z) {
	zespolona zespol;
	zespol.re = re + z.re;
	zespol.im = im + z.im;
	return zespol;
}

zespolona zespolona::operator+=(const zespolona & z) {
	re += z.re;
	im += z.im;
	return (*this);
}

zespolona zespolona::operator*(const zespolona & z) {
	zespolona zespol;
	zespol.re = re * z.re - im * z.im;
	zespol.im = re * z.im + im * z.re;
	return zespol;
}

zespolona & zespolona::operator=(const zespolona & z) {

	if (this == &z) { return *this; };
	re = z.re;
	im = z.im;
	return *this;
}

zespolona zespolona::operator-(zespolona & z) {
	zespolona zespol;
	zespol.re = re - z.re;
	zespol.im = im - z.im;
	return zespol;
}

bool zespolona::operator==(zespolona & z) {
	return (bool)((re == z.re) && (im == z.im));
}

