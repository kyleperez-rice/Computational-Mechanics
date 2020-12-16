#include <iostream>
#include <string>

using namespace std;

int main() {

	bool i_am_a_foo = false;
	
	string my_type;
	string am_i_funny;
	
	while (i_am_a_foo == false) {
	
		cout << "Are you a Foo or a Bar?" << endl;
		cout << "I am a ";
		cin >> my_type;
		
		if (my_type == "Foo") {
			cout << "You are a Foo." << endl;
			i_am_a_foo = true;
			
		}
		else if (my_type == "Bar") {
			cout << "You are a Bar." << endl;
			break;
		}
		else {
			cout << "Try again." << endl;
		}//end if	
	}//end while
	
	while (i_am_a_foo == true) {
		cout << "Are you a funny Foo?" << endl;
		cin >> am_i_funny;
		
		if (am_i_funny == "Yes") {
			cout << "You are funny." << endl;
			break;
		}
		else if (am_i_funny == "No") {
			cout << "You are not funny." << endl;
			break;
		}
		else {
			cout << "Try again." << endl;
		}//end if
	}//end while
	
	
	return 0;

}//end main
