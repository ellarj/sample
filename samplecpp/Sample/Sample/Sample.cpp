#include <fstream> // ifstream
#include <map>     // map
#include <cassert> // assert
#include <iostream>
#include <string>
#include <vector>
#include <functional>
#include <algorithm>
#include <list>
#include <utility>
#include <numeric>      // std::accumulate

using namespace std;

// The ascii histogram is supposed to count each character apperance in
// txt file. 
// Input: txt file path 
// Output: ascii characters histogram directed to console 
void asciiHistogram(std::string fileName) {
	// create map <char,int>
	typedef std::map<char, int> CharMap_t;
	const int NUM_MAX = 10000;

	CharMap_t asciiHistogram;

	std::ifstream fileIn;
	// open file
	fileIn.open(fileName, std::ios::in);
	assert(fileIn.good());
	// count each char appearance
	char c;
	while (!fileIn.eof()) {
		fileIn >> c;
		asciiHistogram[tolower(c)]++;
	}
	// draw histogram
	for (CharMap_t::iterator i = asciiHistogram.begin(); i != asciiHistogram.end(); ++i) {
		std::cout << (*i).first << " :  " << (*i).second << " :  ";
		for (int j = 1; j < (*i).second; ++j) {
			std::cout << "-";
		}
		std::cout << "\n";
	}
	fileIn.close();
	system("pause");
	return;
}

void accumulateString() {
	// create vector of strings
	std::vector<std::string> stringArray;
	stringArray.push_back("Relentless Commitment to Impact");
	stringArray.push_back("Robust as Fudge");
	stringArray.push_back("Be Surprisingly Bold");
	stringArray.push_back("Get Back Up");
	stringArray.push_back("Don't be a Jerk");
	stringArray.push_back("Confront the Grey");
	stringArray.push_back("Laugh Together, Grow Together");
	stringArray.push_back("Simprints, every person counts");

	typedef std::vector<std::pair<int, string>> stringItems_t;
	stringItems_t stringVector;
	for (int i = 0; i < stringArray.size(); ++i) {
		stringVector.push_back(pair<int, string>(std::accumulate(stringArray[i].begin(), stringArray[i].end(), 0), stringArray[i]));
	}

	// create hash map string = sum of ascii char
	std::cout << " Before sorting " << std::endl;
	for (stringItems_t::iterator i = stringVector.begin(); i != stringVector.end(); ++i) {
		std::cout << (*i).first << " :  " << (*i).second << endl;
	}
	std::cout << " After sorting " << endl;
	// sort hash map in decreasing order
	std::sort(stringVector.begin(), stringVector.end());
	std::reverse(stringVector.begin(), stringVector.end());
	for (stringItems_t::iterator i = stringVector.begin(); i != stringVector.end(); ++i) {
		std::cout << (*i).first << " :  " << (*i).second << endl;
	}
}

// cyclic rotation
struct Results {

	int N;
	int A[];
};

// CountDiv
//Compute number of integers divisible by k in range [a..b]. 
//Write a function:
//int solution(int A, int B, int K);
//that, given three integers A, B and K, returns 
//the number of integers within the range [A..B] that are divisible by K, i.e.:
//{ i : A ≤ i ≤ B, i mod K = 0 }

int countDiv(int A, int B, int K) {
	long int temp, count = 0;
	for (int i = A; i <= B; i++) {
		if (!(i % K)) {
			temp = i;
			count++;
			printf("\n*Found: %d\n", temp);
			break;
		}
	}

	for (int i = A + K; i <= B; i++) {
		if (!(i % K)) {
			temp += K;
			printf("\n*Found: %d\n", temp);
			count++;
		}
	}
	return count;
}

// Dominator
//Find an index of an array such that its value occurs at more than half 
//of indices in the array.
//Programming language:  Human language:  
//A zero-indexed array A consisting of N integers is given. The dominator of 
//array A is the value that occurs in more than half of the elements of A.
int * dominator(int A[], int N) {
	const int SIZE = 100000;
	int array[SIZE];
	int index[SIZE];
	int max = 0;
	int indxMax = -1;
	int dominator = -1;
	int result = -1;
	int * pointer = NULL;
	for (int i = 0; i < N; i++) {
		array[i] = 0;
	}

	for (int i = 0; i < N; i++) {
		if (A[i] <= N) {
			array[A[i] - 1]++;
			printf("\ni: %d, A[i]: %d\n", i, A[i]);
		}
	}

	for (int i = 0; i < N; i++) {
		if (array[i] > max) {
			max = array[i];
			indxMax = i + 1;
		}
	}

	for (int i = 0; i < indxMax; i++) {
		index[i] = 0;
	}

	if (max >= (N / 2)) {
		dominator = indxMax;
		for (int i = 0, count = 0; i < N; i++) {
			if (A[i] == dominator) {
				index[count] = i;
				count++;
			}
		}
		result = index[0];
	}

	for (int i = 0; i < max; i++) {
		printf("\ni: %d, index[%d]\n", i, index[i]);
	}

	pointer = &result;
	return pointer;
}

//PassingCars
//Count the number of passing cars on the road.  
//A non-empty zero-indexed array A consisting of N integers is given. 
//The consecutive elements of array 
//A represent consecutive cars on a road.
//Array A contains only 0s and/or 1s:
//0 represents a car traveling east,
//1 represents a car traveling west.
//The goal is to count passing cars. We say that a pair of cars (P, Q),
// where 0 ≤ P < Q < N, is passing when 
//P is traveling to the east and Q is traveling to the west.

int passingCars(int A[], int N) {
	int count, pairs = 0, ones = 0, zeroes = 0;
	for (int i = (N - 1), count = 1; i >= 0; i--, count++) {
		printf("\n**** i: %d, count: %d", i, count);
		if (!(A[i])) {
			zeroes++;
			ones = count - zeroes;
			printf("\ni: %d, count: %d ,zeroes : %d, ones: %d\n", i, count, zeroes, ones);
			pairs += ones;
		}

	}
	return pairs;
}

//PermCheck
//Check whether array A is a permutation.
//Programming language:  
//A non-empty zero-indexed array A consisting of N integers is given.
//A permutation is a sequence containing each element from 1 to N once,
//and only once.
int permCheck(int A[], int N) {
	const int SIZE = 100000;
	int result = 0;
	// initialize auxiliary array
	int array[SIZE];
	for (int i = 0; i < N; i++) {
		array[i] = 0;
	}

	for (int i = 0; i < N; i++) {
		if (A[i] <= N) {
			array[A[i] - 1] = 1;
			printf("\ni: %d, A[i]: %d\n", i, A[i]);
		}
	}

	for (int i = 0; i < N; i++) {
		printf("\n*** i: %d; array[%d]: %d\n", i, i, array[i]);
		if (!(array[i])) {
			result = 0;
			break;
		}
		else {
			result = 1;
		}
	}
	return result;
}

//FrogRiverOne
//Find the earliest time when a frog can jump to the other side of a river.
//A small frog wants to get to the other side of a river. 
//The frog is initially located on one bank of the river (position 0) 
//and wants to get to the opposite bank (position X+1). Leaves fall from 
//a tree onto the surface of the river.
//You are given a zero-indexed array A consisting of N integers representing
// the falling leaves. A[K] represents the position where one leaf falls at 
// time K, measured in seconds.
//The goal is to find the earliest time when the frog can jump to the other 
//side of the river. The frog can cross only when leaves appear at 
//every position across the river from 1 to X (that is, we want to find 
//the earliest moment when all the positions from 1 to X are covered by leaves). 
//You may assume that the speed of the current in the river is negligibly small, i.e.
//the leaves do not change their positions once they fall in the river.

int frog(int X, int A[], int N) {
	const int SIZE = 100000;
	int result = -1;
	int array[SIZE];
	for (int i = 0; i < N; i++) {
		array[i] = 0;
	}
	bool flag = false;
	for (int i = 0; (i < N) & (!flag); i++) {
		if (A[i] <= N) {
			array[A[i] - 1]++;
			printf("\ni: %d, A[i]: %d\n", i, A[i]);

		}

		for (int k = 0; k < X; k++) {
			if (!array[k]) {
				flag = false;
				break;
			}
			else {
				flag = true;
				result = i;
			}
		}
	}
	return result;
}

//MaxCounters
//Calculate the values of counters after applying all alternating operations: 
//increase counter by 1; 
//set value of all counters to current maximum. 
//You are given N counters, initially set to 0, and you have two possible operations 
//on them:

//A non-empty zero-indexed array A of M integers is given. This array represents 
//consecutive operations:

//if A[K] = X, such that 1 ≤ X ≤ N, then operation K is increase(X),
//if A[K] = N + 1 then operation K is max counter.

struct res {
	int * C;
	int L;
};

struct res maxCounters(int N, int A[], int M) {
	const int SIZE = 100000;
	struct res result;
	int array[SIZE];
	for (int i = 0; i < M; i++) {
		array[i] = 0;
	}
	int max = 0;
	for (int i = 0; i < M; i++) {
		printf("\n!!!! i: %d, A[%d]: %d\n", i, i, A[i]);
		for (int k = 0; k < M; k++) {
			if (array[k] > max) {
				max = array[k];
				printf("\n***k: %d, array[%d]: %d, max: \n", k, k, array[k], max);
			}
		}
		if (A[i] == M - 1) {
			for (int k = 0; k < M; k++) {
				array[k] = max;
				printf("\nA[i] == N)***k: %d, array[%d]: %d, max: \n", k, k, array[k], max);
			}
		}
		if (A[i] < M) {
			array[A[i] - 1]++;
			printf("\nA[i] < N ***i: %d, array[%d]: %d, max: \n", i, i, array[A[i] - 1], max);
		}
	}
	for (int i = 0; i < N; i++) {
		printf("\ni: %d, array[%d]: %d\n", i, i, array[i]);

	}
	return result;
}