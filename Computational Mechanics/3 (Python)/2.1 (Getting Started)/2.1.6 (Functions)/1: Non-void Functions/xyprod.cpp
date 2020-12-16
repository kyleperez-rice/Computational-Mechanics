#include <iostream>

using namespace std;

double product (double x, double y) {
	return x * y;
}//end product

int main() {
	
	double x = 3.0;
	double y = 4.0;
	
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "x*y = " << product(x,y) << endl;
	
	return 0;


}//end main
