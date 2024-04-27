// C++ program to demonstate the use of catch all
// in exception handling.

#include <iostream>
using namespace std;

int main()
{
	// try block
	try {

		// throw
		throw 10;
	}

	// catch block
	catch (char* excp) {
		cout << "Caught " << excp;
	}

	// catch all
	catch (...) {
		cout << "Default Exception\n";
	}
	return 0;
}
