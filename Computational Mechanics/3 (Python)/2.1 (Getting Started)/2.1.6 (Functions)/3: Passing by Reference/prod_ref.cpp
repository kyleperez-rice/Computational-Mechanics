#include <iostream>

using namespace std;

void my_product(double& x, double& y) {
	x = x*x;
	y = y*y;
}//end my_product


int main() {

	double x = 2.0;
	double y = 3.0;
	
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	
	my_product(x, y);
	
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;

	return 0;
	
}//end main
