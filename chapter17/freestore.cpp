#include "std_lib_facilities.h"

void print_array10(ostream& os, int* a) {
	
	for(int i = 0; i < 10; ++i)
		os << "a[" << i << "] = " << a[i] << '\n';	// az os helyén jóesetben 'cout' fog szerepelni
	os << '\n';
	
}


void print_array(ostream& os, int* a, int n) {

	for(int i = 0; i < n; ++i)
		os << "a[" << i << "] = " << a[i] << '\n';
	os << '\n';
}


int main() {
	
	// size of arrays
	int size_a = 10;
	int size_b = 10;
	int size_c = 11;
	int size_d = 20;
	
	int* a = new int[size_a];	
	
	int* b = new int[size_b] { 100, 101, 102, 103, 104, 105, 106, 107, 108, 109 }; // inicializáltuk a 10 elemet az adott értékekkel
	
	int* c = new int[size_c] { 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110 }; // ennél már nem alkalmazható az array10-es függvényünk
	
	int* d = new int[size_d] { 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119 };
	
	print_array10(cout, a);
	print_array10(cout, b);
	print_array(cout, c, size_c);
	print_array(cout, d, size_d);
	
	delete[] a;	// 0 bytera hozom ki a heap summaryt (valgrind)
	delete[] b;
	delete[] c;
	delete[] d;

	return 0;
}


