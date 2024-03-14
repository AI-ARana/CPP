/* Default constructor is also known as a zero-argument constructor, 
as it doesn’t take any parameter. It can be defined by the user 
if not then the compiler creates it on his own. Default constructor always initializes 
data members of the class with the same value they were defined.*/
#include <iostream>
using namespace std;

class Person{
  
  // declaring private class data members 
private:
  string name;
  int age;
  
public: 

  // declaring constructor
  Person()
  {
      cout<<"Default constructor is called"<<endl;
      name = "Anurag";
      age = 21;
  }
  
  // display function to print the class data members value 
  void display()
  {
      cout<<"Name of current object: "<<name<<endl;
      cout<<"Age of current object: "<<age<<endl;
  }
  
};
int main() 
{
    // creating object of class using default constructor
    Person obj;
    
    // printing class data members 
    obj.display();
    
    return 0;
}