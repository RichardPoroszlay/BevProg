#include "std_lib_facilities.h" //header fájl

int main() {
	string first_name;	//string típusú változó
	string friend_name;
	char friend_sex = 0;	//char típusú változó
	int age;	//integer típusú változó
	
	cout << "Enter the name of the person you want to write to: " << endl;
	cin >> first_name;	//cin az inputot jelzi
	
	cout << "Dear" << " " << first_name << "," << endl;	//a szóközzel választottam el egymástól az elemeket, habár megoldható lenne nélküle is.
	cout << "How are you? I am doing great!" << endl << endl;
	
	cout << "Add one of your friends name:" << endl;
	cin >> friend_name;
	cout << endl;
	
	cout << "Have you seen " << friend_name << " lately?" << endl << endl;
	
	cout << "Is your friend male (m) or female (f)?" << endl;
	
	cin >> friend_sex;
	
	if (friend_sex == 'm') { //a char típusú értékeket aposztrofok közé fogom	
		cout << "If you see " << friend_name << " please ask him to call me." << endl;
	}
	else if (friend_sex == 'f') {
		cout << "If you see " << friend_name << " please ask her to call me." << endl;
	}
	else {
		cout << "Your input is invalid, try again!" << endl;
	}
	
	cout << "How old is your friend?" << endl;
	cin >> age;
	
	if (age <= 0 || age >= 110) {
		simple_error("You're kidding!");
	}
	 
	cout << "I hear you just had a birthday and you are " << age << " years old." << endl;
	
	if (age < 12) {
		cout << "Next year you will be " << age+1 << endl;
	}
	else if (age == 17) {
		cout << "Next year you will be able to vote." << endl;
	}
	else if (age > 70) {
		cout << "I hope you are enjoying retirement." << endl;
	}
	
	cout << "Yours sincerely, " << endl << endl;
	cout << "Poroszlay Richárd" << endl;
	
	
	
	return 0;
}

