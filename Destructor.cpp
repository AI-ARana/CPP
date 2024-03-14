/*Destructor is just the opposite function of the constructor. 
A destructor is called by the compiler when the object is destroyed and 
its main function is to deallocate the memory of the object. */
#include <iostream>
using namespace std;

class Employee{
  
  // declaring private class data members 
private:
  int a,b;
  
public: 
  
  // declaring Constructor
  Employee(int x, int y)
  {
      cout<<"Constructor is called"<<endl;
      a = x;
      b = y;
      
      cout<<"Value of a: "<<a<<endl;
      cout<<"Value of b: "<<b<<endl;
      cout<<endl;
  }
  
  // declaring destructor
  ~Employee()
  {
      cout<<"Destructor is called"<<endl;
      cout<<"Value of a: "<<a<<endl;
      cout<<"Value of b: "<<b<<endl;
  }
  
};
int main() 
{
    // creating objects of class using parameterized constructor
    Employee obj(25,76);
    
    return 0;
}