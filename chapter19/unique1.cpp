#include "std_lib_facilities.h"

void suspicious(int size, int x) {

	int* p = new int[size];	// itt adjuk meg, hogy mekkora memória területet foglaljunk le intekre
	
	if (x == 0) throw std::exception();	// ha x = 0, akkor kivételt dob, nem lesz felszabadítva a free store, mivel innen rögtön a catchbe ugrunk
	
	delete[] p;	// ha x = 0, akkor ez sosem fog lefutni
}


int main() 
try{

	suspicious(5,0);	// 1st parameter: mennyi memóriát foglaljon
	
	return 0;
}

catch (std::exception& e) {
	std::cerr << "Error!\n";
	return 1;
}
