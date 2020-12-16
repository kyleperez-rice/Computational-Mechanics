#include <iostream>

using namespace std;

int main() {

	string my_state = "California";
	
	string my_county = "Riverside County";
	
	if (my_state == "California") {
		if (my_county == "Riverside County") {
			cout << "Your county seat is Riverside." << endl;
		}
		else if (my_county == "San Bernadino County") {
			cout << "Your county seat is San Bernadino." << endl;
		}
		else {
			cout << "I'm only programmed for Riverside and San Bernadino Counties!" << endl;
		}//end if
	
	}
	else if (my_state == "New Mexico") {
		if (my_county == "Los Alamos County") {
			cout << "Your county seat is Los Alamos." << endl;
		}
		else {
			cout << "I'm only programmed for Los Alamos County!" << endl;
		}//end if
	}
	else if (my_state == "Florida")
		if (my_county == "Miami-Dade County") {
			cout << "Your county seat is Miami." << endl;
		}
		else {
			cout << "I'm only programmed for Miami-Dade County!" << endl;
		}//end if
	
	else {
		cout << "I'm not programmed to tell you your county seat!" << endl;
	}//end if




	return 0;

}//end main
