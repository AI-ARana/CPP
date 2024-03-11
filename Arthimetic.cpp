// Example of arithmetic operations

#include <iostream>

using namespace std;

int main()
{
   int x, y;
   cout << "Enter integer value for x: ";
   cin >> x;
   cout << "Enter integer value for y: ";
   cin >> y;

   // display arithmetic results
   cout << '\n';
   cout << x << " + " << y << " = " << x + y << '\n';
   cout << x << " - " << y << " = " << x - y << '\n';
   cout << x << " * " << y << " = " << x * y << '\n';
   cout << x << " / " << y << " = " << x / y << '\n';
   cout << x << " % " << y << " = " << x % y << '\n';
   cout << '\n';

   // now try it for doubles
   double a, b;
   cout << "Enter double (float) value for a: ";
   cin >> a;
   cout << "Enter double (float) value for b: ";
   cin >> b;

   // display arithmetic results
   cout << a << " + " << b << " = " << a + b << '\n';
   cout << a << " - " << b << " = " << a - b << '\n';
   cout << a << " * " << b << " = " << a * b << '\n';
   cout << a << " / " << b << " = " << a / b << '\n';

   // Notice that any attempt to compile the line below will not work
   // The % operator is NOT valid for floating point types
   //
   // cout << a << " % " << b << " = " << a % b << '\n';

   cout << "\nGoodbye!\n";
   return 0;
}
