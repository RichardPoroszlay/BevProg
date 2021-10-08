//Example 12

#include "std_lib_facilities.h"

int main() {

	try {
		string s = "fool"; //az ape-t fool-ra állítottam, hogy teljesüljön az if ág.
		if (s == "fool") {  //a + operátort módosítottam ==-ra.
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
