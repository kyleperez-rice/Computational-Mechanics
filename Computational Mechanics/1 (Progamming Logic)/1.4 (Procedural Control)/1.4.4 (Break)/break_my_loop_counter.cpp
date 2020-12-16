#include <iostream>

using namespace std;

int main() {

	for (int i = 0; i < 4; i = i + 1) {
		cout << "My value for i is " << i << endl;
		
		if (i == 2) {
			cout << "I'm breaking the statement" << endl;
			break;
		}//end if
	
	}//end for

	return 0;

}//end main
