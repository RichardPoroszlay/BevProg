//Example 7

#include "std_lib_facilities.h"

int main() {

	try {
		bool cond = true; //nem volt eredetileg deklarálva ez a változó
		
		if (cond) {
			cout << "Success!\n";	//cond = true;
		}
		else {
			cout << "Fail!\n";	//cond = false;
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
