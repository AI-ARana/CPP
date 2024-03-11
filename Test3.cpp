/*This program will print the number of bytes used by each type - 
sizes may vary from system to system 
*/
#include <iostream>

using namespace std;

int main()
{
   cout << "Size of bool        = " << sizeof(bool) << " bytes\n\n";

   cout << "Size of char        = " << sizeof(char) << " bytes\n";
   cout << "Size of short       = " << sizeof(short) << " bytes\n";
   cout << "Size of int         = " << sizeof(int) << " bytes\n";
   cout << "Size of long        = " << sizeof(long) << " bytes\n\n";

   cout << "Size of float       = " << sizeof(float) << " bytes\n";
   cout << "Size of double      = " << sizeof(double) << " bytes\n";
   cout << "Size of long double = " << sizeof(long double) << " bytes\n";



   return 0;
}