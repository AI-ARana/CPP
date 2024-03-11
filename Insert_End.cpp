/*Insertion at the end of the list, it increases the list size by 1. 
push_front() function is used to do the insertion at the beginning of the list.*/
#include <iostream>
#include <list> 
using namespace std;
  
int main() 
{
    list<int> list1;
      
    list1.assign(2,2);
       list1.push_back(5);

    for (list<int>::iterator i=list1.begin(); i!=list1.end(); i++)
       cout << *i << " ";
}
