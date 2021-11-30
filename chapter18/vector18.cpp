// this file contains the second part of chapter 18 drill

#include "std_lib_facilities.h"

vector<int> gv = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};

void f(vector<int> v, int n) {	// n == number of arguments

	vector<int> lv(n);
	
	for(int i = 0; i < n; ++i) {
		lv[i] = gv[i];
	}
	cout << '\n';
	
	for(int i = 0; i < n; ++i) {
		cout << "lv[" << i << "]: " << i << '\n';
	}
	cout << '\n';
	
	vector<int> lv2 = v;
	
	for(int i = 0; i < n; ++i) {
		cout << "v[" << i << "]: " << i << '\n';
	}
	cout << '\n';

}

int main() {

	f(gv, 10);
	
	vector<int> vv(10);
	vv[0] = 1;
	
	// we are counting with factorials
	for(int i = 1; i < 10; ++i) {	
		vv[i] = vv[i-1] * i; 
	}
	cout << '\n';
	
	for(int i = 0; i < 10; ++i) {
		cout << "vv[" << i << "]: " << vv[i] << '\n';
	}
	cout << '\n';
	
	f(vv, 10);
	
	
	return 0;
}
