#include <iostream>

using namespace std;

int main() {

	bool a = ( (1 < 3) and (3 < 4) );
	
	cout << "The value of a is " << a << endl;
	
	a = ( (1 < 3) and (1 == 2) );
	
	cout << "The value of a is " << a << endl;
	
	return 0;

}//end main
