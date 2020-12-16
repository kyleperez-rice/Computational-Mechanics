#include <iostream>

using namespace std;

int recur_factorial(int n) {

	if (n < 0) {
		return 0;
	}//end if
	if (n == 0) {
		return 1;
	}
	else {
		return n * recur_factorial(n-1);
	}//end if
	
	

}//end recur_factorial

int main() {

	for (int n = 0; n < 6; ++n) {
		cout << "n = " << n << endl;
		cout << "n! = " << recur_factorial(n) << endl;
	}//end for

	return 0;

}//end main
