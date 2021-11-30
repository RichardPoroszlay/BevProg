// first part of chapter 18 drill

#include "std_lib_facilities.h"

int ga[10] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};

/*
void print_array(ostream& os, int* a, int n) {

	for(int i = 0; i < n; ++i)
		os << "a[" << i << "] = " << a[i] << '\n';
	os << '\n';
}
*/


// after the first argument we must to use subscript operators, thus we can avoid errors

void f(int array[], int n) { 	// n == number of elements in an array
	
	int la[10];
	
	for(int i = 0; i < 10; ++i) {
		la[i] = ga[i];
		cout << "la[" << i << "]: " << la[i] << '\n';
	}
	
	int* p = new int[n];
	
	for(int i = 0; i < n; ++i) {
		p[i] = array[i];
		cout << "p[" << i << "]: " << p[i] << '\n';
	}
	delete[] p;
}
	

int main() {

	f(ga, 10);

	int aa[10];
	aa[0] = 1;
	
	// we are counting with factorials
	for(int i = 1; i < 10; ++i) {	
		aa[i] = aa[i-1] * i; 
	}
	
	for(int i = 0; i < 10; ++i) {
		cout << "aa[" << i << "]: " << aa[i] << '\n';
	}
	
	f(aa, 10);
	
	return 0;
}
