#include <iostream>                     /* pre-processor directive */
using namespace std;

int main()                              // main function, start of program
{
  int year = 2024;                      // an integer variable declaration
  char entry;                           // a character variable 

  cout << "Welcome to C++ Programming Session " << year << '\n';  
  cout << "Enter any value to quit: ";
  cin >> entry;                         // read input from user

  cout << "Goodbye!\n";
  return 0;                             // return value to operating system
}