// make unique függvényt fogunk hívni
// ez még jobb megoldás
// egyébként unique pointer használatánál a block végén felszabadul a memória

#include <vector>
#include <iostream>
#include <memory>


std::unique_ptr<std::vector<int>> suspicious() {	// itt már alapjáraton a unique_ptr-t adjuk vissza
	
	auto p = std::make_unique<std::vector<int>>();	// hívjuk a template make_unique függvényt
	for (int i; std::cin >> i; ) {
		if(i) p->push_back(i);		
		else throw std::exception();

	}	
	
	return p;	
}


int main() 
try{

	auto p = suspicious();
	
	for (int i = 0; i < p->size(); ++i)
		std::cout << p->at(i) << ' ';
	std::cout << '\n';
	
	return 0;
}

catch (std::exception& e) {
	std::cerr << "Error!\n";
	return 1;
}
