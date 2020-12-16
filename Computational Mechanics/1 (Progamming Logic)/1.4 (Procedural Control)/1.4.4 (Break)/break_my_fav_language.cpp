#include <iostream>
#include <string>

using namespace std;

int main() {
	
	bool my_answer_is_valid = false;
	string my_favorite_language;
	
	while (my_answer_is_valid == false) {
		cout << "Which is your favorite programming language? C++ or Java?" << endl;
		cout << "My favorite programming language is ";
		getline(cin, my_favorite_language);
	
		if (my_favorite_language == "C++") {
			cout << "That's a good language." << endl;
			break;
		}
		else if (my_favorite_language == "Java") {
			cout << "That's a shame." << endl;
			break;
		}
		else {
			cout << "You didn't pick one of the languages I wanted." << endl;
		}//end if
	}//end while

	return 0;

}//end main
