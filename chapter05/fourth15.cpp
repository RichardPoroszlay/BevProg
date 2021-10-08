//Example 15

#include "std_lib_facilities.h"

int main() {

	try {
		
		string s = "Success!\n";
		for (int i = 0; i <= 7; ++i) { // i < 6-ot módosítottam i <= 7-re, hogy megjelenjen a teljes s változó.
			cout << s[i];
		}
		cout << endl;
		
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
