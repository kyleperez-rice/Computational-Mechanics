#include <iostream>

using namespace std;

int main() {

	bool i_want_to_stay = false;

	string my_answer;

	do {
		cout << "Do you want to stay in the loop? ";
		cin >> my_answer;
		
		if (my_answer == "Yes" or my_answer == "yes") {
			i_want_to_stay = true;
		}
		else if (my_answer == "No" or my_answer == "no") {
			i_want_to_stay = false;
			cout << "Let's leave." << endl;
		}//end if
	}//end do
	while (i_want_to_stay == true);
	
	return 0;

}//end main
