//Example 13

#include "std_lib_facilities.h"

int main() {

	try {
		vector<char> v(5); //ötször fog lefutni a cout a loopon belül.
		for (int i = 0; i < v.size(); ++i) { // 0 < v.size() --> a 0 helyett i-t írok, hogy elkerüljem a végtelen ciklust.
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
