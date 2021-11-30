// this file contains the second part's vector part of the drill

#include "std_lib_facilities.h"

void print_vector(ostream& os, vector<int>& v) {

	for(int i = 0; i < v.size(); ++i)
		os << "v[" << i << "] = " << v[i] << '\n';
	cout << '\n';
}

int main() {
	vector<int> v1(10);
	
	for(int i = 0; i < v1.size(); ++i)
		v1[i] = (i+1)*2;
		
	vector<int>* vp1 = &v1;
	cout << "Vector v1:\n";
	
	print_vector(cout, v1);
	
	cout << "Declaring v2 vector\n";
	vector<int> v2(10);
	for(int i = 0; i < v2.size(); ++i)
		v2[i] = i;
		
	vector<int>* vp2 = &v2;
	cout << "Vector v2:\n";
	print_vector(cout, v2);
	
	cout << "Copy values from v1 to v2\n";
	for(int i = 0; i < 10; ++i)
		vp2[i] = vp1[i];
	
	print_vector(cout, *vp2);
	

	return 0;
}
