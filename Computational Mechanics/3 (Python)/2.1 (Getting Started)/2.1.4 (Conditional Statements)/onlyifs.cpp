#include <iostream>

using namespace std;

int main() {

	int a = 1;
	
	if (a%2 == 1) {
		cout << a << " is not divisible by 2." << endl;
	}//end if
	if (a == 1) {
		cout << a << " is neither prime nor composite." << endl;
	}//end if
	if (a == 3) {
		cout << a << " is the smallest odd prime number." << endl;
	}
	else {
		cout << a << " is not 3." << endl;
	}//end if

	return 0;

}//end main
