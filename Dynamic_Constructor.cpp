/* When memory is allocated dynamically to the data members at the runtime 
using a new operator, the constructor is known as the dynamic constructor. 
This constructor is similar to the default or parameterized constructor; 
the only difference is it uses a new operator to allocate the memory.*/
#include <iostream>
using namespace std;

class Employee{
  
  // declaring private class data members 
private:
  int* age;
  
public: 
  Employee(int* Employee_age)
  {
      cout<<"Constructor for age is called"<<endl;
      
      // allocating memory 
      age = new int; 
      //When you allocate memory using new int, you get a pointer to the newly allocated memory.
      age = Employee_age;
  }
  
  // display function to print the class data members value 
  void display()
  {
      cout<<"Age of current object: "<<*age<<endl;
      cout<<endl;
  }
  
};
int main() 
{
    // creating objects of class using parameterized constructor
    int age = 25;
    Employee obj1(&age);
    
    // printing class data members for first object 
    obj1.display();
    
    return 0;
}