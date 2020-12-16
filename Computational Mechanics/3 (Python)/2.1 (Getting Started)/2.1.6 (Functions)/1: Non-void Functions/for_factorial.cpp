#include <iostream>

using namespace std;

int for_factorial(int n) {

	int fact_n = 1;
	
	if (n < 0) {
		return 0;
	}//end if
	if (n == 0) {
		return 1;
	}//end if

	for (int i = n; i > 1; --i) {
		fact_n = i * fact_n;
	}//end for
	
	return fact_n;

}//end for_factorial

int main() {

	for (int n = 0; n < 6; ++n) {
		cout << "n = " << n << endl;
		cout << "n! = " << for_factorial(n) << endl;
	}//end for

	return 0;

}//end main
