//Example 11

#include "std_lib_facilities.h"

int main() {

	try {
		string s = "fool";
		if (s == "fool") {
			cout << "Success!\n"; //kimaradt egy "kacsacsőr".
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
