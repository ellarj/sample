#include "Header.h"
#include <iostream>
#include <cstring>

using namespace std;

void Dstring::copy(const Dstring & b) {
	sp = new char[];
	strcpy(sp, b.sp);
};

Dstring::Dstring() {
	sp = NULL;
};

Dstring::Dstring(const Dstring &b) {
	sp = new char[];
	strcpy(sp, b.sp);
};

Dstring::Dstring(const char * s) 
{   
	sp = new char[];
	strcpy(sp, s);
};

Dstring::operator const char*() {
	return (char *)sp;
};

Dstring & Dstring::operator=(const Dstring & b) {

};

friend ostream & Dstring::operator<<(ostream &, Dstring &);
friend istream & Dstring::operator>>(istream &, Dstring &);

Dstring::~Dstring()
{
}
