// this file contains the first part's vector part of the drill

#include "std_lib_facilities.h"

void init_vector(vector<int>& v, int val) {

	for(int i = 0; i < v.size(); ++i, ++val)
		v[i] = val;
}


void print_vector(ostream& os, vector<int>& v) {

	for(int i = 0; i < v.size(); ++i)
		os << "v[" << i << "] = " << v[i] << '\n';
	cout << '\n';
}

int main() {
	
	vector<int> v1(10);
	init_vector(v1, 100);		// megadom, hogy mely allokált helyen számoljon és azt, hogy mennyitől (scnd argument)
	print_vector(cout, v1);
	
	vector<int> v2(11);
	init_vector(v2, 100);
	print_vector(cout, v2);
	
	vector<int> v3(20);
	init_vector(v3, 100);
	print_vector(cout, v3);
	
	
	return 0;
}
