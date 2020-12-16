#include <iostream>

using namespace std;

double times_two (double x) {
	return 2.0 * x;
}//end times_two

int main() {
	
	double x = 1.0;
	
	cout << "x = " << x << endl;
	cout << "2.0 * x = " << times_two(x) << endl;
	
	x = 2.0;
	cout << "x = " << x << endl;
	cout << "2.0 * x = " << times_two(x) << endl;
	
	x = 3.0;
	cout << "x = " << x << endl;
	cout << "2.0 * x = " << times_two(x) << endl;	
	
	return 0;


}//end main
