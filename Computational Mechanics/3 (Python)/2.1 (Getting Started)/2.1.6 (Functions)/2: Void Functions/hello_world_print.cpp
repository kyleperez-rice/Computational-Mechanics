#include <iostream>

using namespace std;

void hello_world_print() {

	cout << "Hello World!" << endl;
	
	return;

}//end hello_world_print

using namespace std;

int main() {

	for (int i = 0; i < 4; ++i) {
		hello_world_print();
	}//end for

	return 0;
	
}//end main
