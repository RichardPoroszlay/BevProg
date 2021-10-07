#include "std_lib_facilities.h"

int main() {
    double value = 0;
    string unit;
    double smallest = 0;
    double largest = 0;
    
    //Ezek a konstans értékeink, melyek nem változnak meg sosem.
    constexpr double m_to_cm = 100;
    constexpr double in_to_cm = 2.54;
    constexpr double ft_to_in = 12;
    
    int sum = 0;
    int numberOfValues = 0;
    
    vector<double> numbers;
    
    //Valós szám értékeket vár a zárójelek közti mértékegységek valamelyikével párosítva.
    cout << "Please, enter values with units (m, cm, in, ft)!" << endl;
    while (cin >> value >> unit && value != '|') {
  	
  	if (unit =="m") {
		cout << value << "m" << endl;
		numbers.push_back(value);
	}
	    
	else if (unit == "in") {
	    value *= in_to_cm;
	    value /= m_to_cm;
	    cout << value << "m" << endl;
	    numbers.push_back(value);
	}
	    
	else if (unit == "ft") {
	    value *= ft_to_in;
	    value *= in_to_cm;
	    value /= m_to_cm;
	    cout << value << "m" << endl;
	    numbers.push_back(value);
	}
	    
	else if (unit == "cm") {
	    value /= m_to_cm;
	    cout << value << "m" << endl;
	    numbers.push_back(value);
	}
	
	//Hibakód rossz unit megadása esetén.    
	else error("Your unit isn't showed up in our list! It's ILLEGAL!");
	    
	
  	  
    	if (value > largest) {
     	    largest = value;
     	    cout << "Your input became the new largest value: " << value << endl;
     	    sum += value;
     	    numberOfValues += 1;
    	}
    	else if (value < smallest) {
    	    smallest = value;
    	    cout << "Your input became the new smallest value: " << value << endl;
    	    sum += value;
    	    numberOfValues += 1;
    	}
    	else {
    	    sum += value;
    	    numberOfValues += 1;
    	}
    
    }
    
    
    //ÖSSZEGZÉS
    cout << "The largest number: " << largest << endl;
    cout << "The smallest number: " << smallest << endl;
    cout << "The total sum of the recieved numbers: " << sum << endl;
    cout << "The total number of the entered numbers: " << numberOfValues << endl;
 
 
    //Ezzel a paranccsal növekvő sorrendbe rendezem a vektorban szereplő értékeket.
    sort(numbers);
    
    //Bejárom a vektor elemeit, s kiíratom azokat.
    cout << "The values of the vector: " << endl;
    for (double i: numbers) {
    	cout << i << ' ';
    }
   
    
    return 0;
}


