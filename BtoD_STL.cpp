/*Code Implementation using Predefined Functions of C++ for the conversion of
 Binary Number into Decimal Number*/
 #include <iostream>
using namespace std;

int main()
{
    char binaryNumber[] = "1010";
    //stoi is a C++ function that converts a string to an integer. 
    //It's part of the <string> header in C++.
    cout << stoi(binaryNumber, 0, 2);

    return 0;
}