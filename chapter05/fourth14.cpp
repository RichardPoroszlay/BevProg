//Example 14

#include "std_lib_facilities.h"

int main() {

	try {
		vector<char> v(5);
		for (int i = 0; i < v.size(); ++i) { //ha i <= v.size() lenne (ahogy eredetileg), akkor lefutna a hibaüzenet.
			if (i >= v.size()) error("Out of range"); //Akkor jelenik meg, ha az i nagyobb vagy egyenlő lesz a v paraméterével.
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
