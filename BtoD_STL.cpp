/*Code Implementation using Predefined Functions of C++ for the conversion of
 Binary Number into Decimal Number*/
 #include <iostream>
using namespace std;

int main()
{
    char binaryNumber[] = "1010";
    
    cout << stoi(binaryNumber, 0, 2);

    return 0;
}