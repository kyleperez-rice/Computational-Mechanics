#include <iostream>

using namespace std;

void string_print(string my_string) {

	cout << my_string << endl;
	
	return;

}//end hello_world_print

using namespace std;

int main() {

	string my_string = "Hi";

	for (int i = 0; i < 4; ++i) {
		string_print(my_string);
	}//end for

	return 0;
	
}//end main
