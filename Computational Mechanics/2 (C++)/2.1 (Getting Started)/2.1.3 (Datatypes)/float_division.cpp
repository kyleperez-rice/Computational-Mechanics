#include <iostream>

using namespace std;

int main() {

	int a = 10;
	int b = 3;
	
	//Approach 1: just declare variables that are doubles
	double c = 10.0;//Same as a
	double d = 3.0;//Same as b
	
	cout << "a/b = " << c/d << endl;
	
	//Approach 2: cast the variables to doubles
	double aa = (double)a;
	double bb = (double)b;
	
	cout << "a/b = " << aa/bb << endl;
	
	//Approach 3: cast the result to a double
	cout << "a/b = " << (double)a/b << endl;

	return 0;

}//end main
