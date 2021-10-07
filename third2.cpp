#include "std_lib_facilities.h"

int main() {
    double num1 = 0;
    double num2 = 0;
    
    //Addig megy a ciklus, amíg a num1 vagy num2 értéke nem egyenlő a | karakterrel.
    while ((cin >> num1 >> num2) && (num1 != '|' || num2 != '|')) {
    	if (num1 < num2) {
    	    cout << "The smaller value is: " << num1 << " The larger value is: " << num2 << endl;
    	     if (abs(num1 - num2) < 0.01 * max(abs(num1), abs(num2))) { //A "majdnem egyenlőség" kiszámítására a relatív különbség módszerét alkalmaztam. (StackOverflow)
    	    	cout << "The numbers are almost equal." << endl;
    	    }  
    	}
    	else if (num1 > num2) {
    	    cout << "The smaller value is: " << num2 << " The larger value is: " << num1 << endl;
    	    if (abs(num1 - num2) < 0.01 * max(abs(num1), abs(num2))) {
    	    	cout << "The numbers are almost equal." << endl;
    	    }
    	}
    	else {
    	    cout << "The numbers are equal!" << endl;
    	}
    }
   
    
    return 0;
}

