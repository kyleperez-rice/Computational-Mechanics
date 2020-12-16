#include <iostream>

using namespace std;

int main() {

	int my_fav_number;
	
	cout << "My favorite number is ";
	cin >> my_fav_number;
	
	switch(my_fav_number) {
	
		case 1://IE: my_fav_number == 1
			cout << "That is my favorite number too!" << endl;
			break;
		case 2:
			cout << "I hate 2." << endl;
			break;
		default:
			cout << "I'm indifferent to that number." << endl;
	
	}//end switch

	return 0;

}//end main
