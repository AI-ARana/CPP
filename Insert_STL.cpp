/*Using assign() function, to insert multiple elements in
 the list in one operation only. It is used to insert multiple elements at 
 once in a list.
syntax: list.assign(number of times, element).*/
#include <iostream>
#include <list> // for list operations
using namespace std;
  
int main() 
{
    list<int> list1;  
    list1.assign(4,2);      
    for (list<int>::iterator i=list1.begin(); i!=list1.end(); i++)
       cout << *i << " ";      
    cout << endl;     
} 