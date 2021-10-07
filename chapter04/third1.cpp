#include "std_lib_facilities.h"

int main() {
    int num1 = 0;
    int num2 = 0;
    
    //Addig megy a ciklus, amíg a num1 vagy num2 értéke nem egyenlő a | karakterrel.
    while ((cin >> num1 >> num2) && (num1 != '|' || num2 != '|')) {
    	if (num1 < num2) {
    	    cout << "The smaller value is: " << num1 << " The larger value is: " << num2 << endl;
    	}
    	else if (num1 > num2) {
    	    cout << "The smaller value is: " << num2 << " The larger value is: " << num1 << endl;
    	}
    	else {
    	    cout << "The numbers are equal!" << endl;
    	}
    }
   
    
    return 0;
}



