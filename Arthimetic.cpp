#include <iostream>
#include <omp.h>

using namespace std;

int main()
{
   int x = 5, y = 6;
   cout << "Enter integer value for x: ";
   cin >> x;
   cout << "Enter integer value for y: ";
   cin >> y;

   // Display arithmetic results for integers
   cout << '\n';
   cout << x << " + " << y << " = " << x + y << '\n';
   cout << x << " - " << y << " = " << x - y << '\n';
   cout << x << " * " << y << " = " << x * y << '\n';

   // Check for division by zero for integer division
   if (y != 0) {
       cout << x << " / " << y << " = " << x / y << '\n';
       cout << x << " % " << y << " = " << x % y << '\n';  // Only valid for integers
   } else {
       cout << "Division by zero is not allowed for integers!\n";
   }
   cout << '\n';

   // Now try it for doubles
   double a, b;
   cout << "Enter double (float) value for a: ";
   cin >> a;
   cout << "Enter double (float) value for b: ";
   cin >> b;

   // Display arithmetic results for floating-point numbers
   cout << a << " + " << b << " = " << a + b << '\n';
   cout << a << " - " << b << " = " << a - b << '\n';
   cout << a << " * " << b << " = " << a * b << '\n';

   // Check for division by zero for floating-point division
   if (b != 0) {
       cout << a << " / " << b << " = " << a / b << '\n';
   } else {
       cout << "Division by zero is not allowed for floating-point numbers!\n";
   }

   // The modulus operator % is not valid for floating-point numbers
   // Therefore, the line below has been commented out
   // cout << a << " % " << b << " = " << a % b << '\n'; // Invalid for floating-point types

   cout << "\nGoodbye!\n";
   return 0;
}
