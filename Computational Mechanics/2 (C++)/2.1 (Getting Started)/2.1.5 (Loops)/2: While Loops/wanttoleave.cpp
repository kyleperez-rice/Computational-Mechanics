#include <iostream>

using namespace std;

int main() {

	bool i_want_to_leave = false;

	string my_answer;
	
	while (i_want_to_leave == false) {
		cout << "Do you want to leave the loop? ";
		cin >> my_answer;
		
		if (my_answer == "Yes" or my_answer == "yes") {
			i_want_to_leave = true;
			cout << "Let's leave the loop." << endl;
		}//end if
	
	}//end while
	
	return 0;

}//end main
