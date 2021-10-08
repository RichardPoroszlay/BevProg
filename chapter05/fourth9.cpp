//Example 9

#include "std_lib_facilities.h"

int main() {

	try {
		string s = "ape"; 
		string f = "fool"; //módosítottam, hogy ez string legyen bool helyett,
		bool c = f.length() > s.length(); //s ebben a változóban hasonlítottam össze őket.
		
		if (c) {
			cout << "Success!\n";
		}
	
		keep_window_open();
		return 0;
	}
	catch (exception& e) {
		cerr << "error: " << e.what() << '\n';
		keep_window_open();
		return 1;
	}
	catch (...) {
		cerr << "Oops: unknown exception!\n";
		keep_window_open();
		return 2;
	}


}
