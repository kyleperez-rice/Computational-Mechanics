#include <iostream>

using namespace std;

int main() {

	for (int i = 2; i < 7; ++i) {
		if (i == 4) {
			cout << "I did not do any push-ups." << endl;
			continue;
		}//end if
		
		cout << "I did " << i << " push-ups in a row." << endl;
	
	}//end for
	
	return 0;

}//end main
