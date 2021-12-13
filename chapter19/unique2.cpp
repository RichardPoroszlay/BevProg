// azért használunk -> szimbólumot a szintaxisban, mert p egy pointer. Ha pointeren keresztül hivatkozunk egy objektum tagjára, akkor nyilat kell használni

#include "std_lib_facilities.h"

// vektort feltöltő függvény
vector<int>* suspicious() {

	vector<int>* p = new vector<int>; // készítünk egy új vektort, ezt töltjük fel elemekkel
	
	for (int i; cin >> i; ) {
		if(i) p->push_back(i);		// ha i != 0, akkor hívjuk p-nek a push_backjét és hozzáadjuk i-t
		else throw std::exception();

	}	
	
	return p;	
}


int main() 
try{

	vector<int>* p = suspicious();	// hogy ha a függvényben dobunk egy kivételt, akkor a main többi része nem fog lefutni!
	
	for (int i = 0; i < p->size(); ++i)
		cout << p->at(i) << ' ';
	cout << '\n';
	
	delete p;
	
	return 0;
}

catch (std::exception& e) {
	std::cerr << "Error!\n";
	return 1;
}
