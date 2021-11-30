#include "std_lib_facilities.h"

void print_array(ostream& os, int* a, int n) {

	for(int i = 0; i < n; ++i)
		os << "a[" << i << "] = " << a[i] << '\n';
	os << '\n';
}


int main() {

	int var = 7;
	int* p1 = &var;
	
	cout << "p1==" << p1 << " *p1== " << *p1 << '\n';	// printing out the memory address and the value assigned to p1 ( p1[0] )
	
	int* array_a = new int[7];
	
	for(int i = 0; i < 7; ++i)
		array_a[i] = i+1;
	
	int* p2 = array_a;
	
	cout << "p2== " << p2 << " *p2== " << *p2 << '\n';
	cout << '\n';
	
	cout << "The values of array_a:\n";
	print_array(cout, array_a, 7);
	
	delete[] array_a;	// delete[] to avoid memory leaks
	
	
	int* p3 = p2;
	p2 = p1;
	p1 = p3;
	
	cout << p1 << ' ' << p2 << ' ' << p3 << '\n';	// memory addresses in hexadecimal
	
	int* array_b = new int[10];
	
	for(int i = 0; i < 10; ++i)
		array_b[i] = (i+1)*2;
	
	cout << "The values of array_b:\n";
	print_array(cout, array_b, 10);
	
	int* array_c = new int[10];
	p2 = array_c;
	
	// copy array_b to array_c
	for(int i = 0; i < 10; ++ i)
		*(p2+i)=*(p1+i);
	cout << "array_c after copying:\n";
	print_array(cout, array_c, 10);
	
	delete[] array_b;	// delete[] to avoid memory leaks
	delete[] array_c;
	
	
	return 0;
}
