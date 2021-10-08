//Example 17

#include "std_lib_facilities.h"

int main() {

	try {
		
		int x = 2000;
		char c = x;
		if (x == 2000) { // c volt alapból, amely sosem lesz = 2000-el, mivel char típus.
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
