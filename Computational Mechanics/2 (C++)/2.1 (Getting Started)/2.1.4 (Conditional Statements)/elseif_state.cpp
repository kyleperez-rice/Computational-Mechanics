#include <iostream>

using namespace std;

int main() {

	int my_int = 1;
	
	//The following two statements are the same:
	
	//1: else if statement
	if (my_int%3 == 0) {
		cout << my_int << " is divisible by 3" << endl;
	}
	else if (my_int%3 == 1) {
		cout << my_int << "/3 has a remainder of 1" << endl;
	}
	else {
		cout << my_int << "/3 has a remainder of 2" << endl;
	}//end if
	
	//2: nested if statement
	if (my_int%3 == 0) {
		cout << my_int << " is divisible by 3" << endl;
	}
	else {
		if (my_int%3 == 1) {
			cout << my_int << "/3 has a remainder of 1" << endl;
		}
		else {
			cout << my_int << "/3 has a remainder of 1" << endl;
		}//end if
	}//end if




	return 0;

}//end main
