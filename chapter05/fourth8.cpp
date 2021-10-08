//Example 8

#include "std_lib_facilities.h"

int main() {

	try {
		bool c = true;
		
		if (c) {
			cout << "Success!\n"; //c = true
		}
		else {
			cout << "Fail!\n";  //c = false
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
