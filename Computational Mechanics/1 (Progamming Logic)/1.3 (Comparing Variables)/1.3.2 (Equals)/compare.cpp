#include <iostream>
#include <string>

using namespace std;

int main() {

	bool a = (2 == 2);
	
	cout << "The value of a is " << a << endl;
	
	a = (2 == 3);
	
	cout << "The value of a is " << a << endl;
	
	
	string my_string = "Hello";
	string my_second_string = "World";
	
	a = (my_string == my_string);
	
	cout << "The value of a is " << a << endl;

	a = (my_string == my_second_string);
	cout << "The value of a is " << a << endl;
	
	return 0;

}//end main
