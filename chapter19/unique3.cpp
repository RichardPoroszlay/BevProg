// az előzőekben látott problémák (exceptionök) elkerüléséhez ún. smart pointereket használhatunk
// mi esetünkben most a unique pointerrel fogunk foglalkozni, mivel azt könnyebb megérteni

// itt már áttérünk más librarykre, mivel lehetnek gondok, ha nem azokat használjuk

#include <vector>
#include <iostream>
#include <memory>


std::vector<int>* suspicious() {
	// unique pointerrel specializáljuk, hogy a pointerünk egy int vectorra mutasson
	std::unique_ptr<std::vector<int>> p {new std::vector<int>};	// a p jobb oldalán lévő constructorban foglalunk memóriát a vectornak, ezt dobjuk a unique ptr-nek
	
	for (int i; std::cin >> i; ) {
		if(i) p->push_back(i);		
		else throw std::exception();

	}	
	
	return p.release();	 // release()-el érhetjük el azt, hogy a constructoron belüli vectort adja vissza
}


int main() 
try{

	std::vector<int>* p = suspicious();
	
	for (int i = 0; i < p->size(); ++i)
		std::cout << p->at(i) << ' ';
	std::cout << '\n';
	
	delete p;
	
	return 0;
}

catch (std::exception& e) {
	std::cerr << "Error!\n";
	return 1;
}
