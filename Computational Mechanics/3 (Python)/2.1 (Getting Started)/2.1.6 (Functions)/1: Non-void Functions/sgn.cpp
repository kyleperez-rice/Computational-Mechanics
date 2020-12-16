#include <iostream>

using namespace std;

double sgn (double x) {
	
	if (x < 0.0) {
		return -1.0;
	}
	else if (x == 0) {
		return 0.0;
	}
	else {
		return 1.0;
	}//end if
		
}//end sgn

int main() {
	
	double x = -3.0;
	
	cout << "x = " << x << endl;
	cout << "sgn(x) = " << sgn(x) << endl;
	
	x = 0.0;
	cout << "x = " << x << endl;
	cout << "sgn(x) = " << sgn(x) << endl;
	
	x = 4.0;
	cout << "x = " << x << endl;
	cout << "sgn(x) = " << sgn(x) << endl;
	
	return 0;


}//end main
