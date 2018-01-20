#pragma once
#define _CRT_SECURE_NO_WARNINGS 1 
#define _WINSOCK_DEPRECATED_NO_WARNINGS 1 
#include <iostream>

using namespace std;

extern int ile_zabawek;

char * charcpy(char * output, char * input);

void zadanie3(void);
void zadanie4(void);
void zadanie5(void);
void zadanie6(void);

class zabawka
{
	char * nazwa;
	int nr; 
public:
	zabawka(char * nazwa_0);
	char * getNazwa();
	int getNr();
	~zabawka();
};

class zespolona
{
	double re;
	double im;
public:
	zespolona();
	zespolona(double real, double image);
	zespolona(double value);
	zespolona(const zespolona & z);
	~zespolona();
	friend  ostream & operator<<(ostream & stream, const zespolona & z);
	friend istream & operator>>(istream & stream, zespolona & z);
	zespolona operator+(const zespolona & z);
	zespolona operator+=(const zespolona & z);
	zespolona operator*(const zespolona & z);
	zespolona & operator=(const zespolona & z);
    zespolona operator-(zespolona & z);
	bool operator==(zespolona & z);
	double getRe() const;
	double getIm() const;
	void setRe(double real);
	void setIm(double image);
};

class Dstring
{
protected:
	char * sp;
	void copy(const Dstring & b);
public:
	Dstring();
	Dstring(const Dstring &b);
	Dstring(const char * s);
	operator const char*();
	Dstring & operator=(const Dstring & b);
	friend ostream & operator<<(ostream &, Dstring &);
	friend istream & operator>>(istream &, Dstring &);
	
	~Dstring();
};



