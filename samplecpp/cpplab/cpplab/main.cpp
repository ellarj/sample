// cpplab.cpp : Defines the entry point for the console application.
//
#include <iostream>
#include <string>
#include "lab1_0.h"
#include "lab1_1.h"
#include "lab1_2.h"
#include "lab1_3.h"
#include "lab1_4.h"
#include "lab1_5.h"
#include "lab1_6.h"
#include "lab1_7.h"
#include "lab1_7_1.h"
#include "lab1_8.h"
#include "lab1_9.h"
#include "lab1_10.h"
#include "lab1_11.h"

using namespace std;


int main()
{
	int numer;
	cout << "Podaj numer programu " << endl;
	cin >> numer;
	switch ( numer ) {
	  case 0: {
		  zadanie1_0();
	  }
	  case 1: {
		  zadanie1_1();
	  }
	  case 2: {
		  zadanie1_2();
	  }
	  case 3: {
		  zadanie1_3();
	  }
	  case 4: {
		  zadanie1_4();
	  }
	  case 5: {
		  zadanie1_5();
	  }
	  case 6: {
		  zadanie1_6();
	  }
	  case 7: {
		  zadanie1_7();
	  }
	  case 8: {
		  zadanie1_7_1();
	  }
	  case 9: {
		  zadanie1_8();
	  }
	  case 10: {
		  zadanie1_9();
	  }
	  case 11: {
		  zadanie1_10();
	  }
	  case 12: {
		  zadanie1_11();
	  }
	  default:
		break;
	}

    return 0;
}

