#include <iostream>

using namespace std;

int main() {

	bool a = ( (1 < 3) or (3 != 3) );
	
	cout << "The value of a is " << a << endl;
	
	a = ( (3 != 3) or (1 != 1) );
	
	cout << "The value of a is " << a << endl;
	
	return 0;

}//end main
