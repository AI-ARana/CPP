#include <iostream>
using namespace std;

class Employee{
  
  // declaring private class data members 
private:
  string name;
  int age;
  
public: 
  Employee(string Employee_name, int Employee_age)
  {
      cout<<"Constructor for both name and age is called"<<endl;
      name = Employee_name;
      age = Employee_age;
  }
  
  Employee(const Employee& obj)
  {
      cout<<"Copy constructor is called"<<endl;
      name = obj.name;
      age = obj.age;
  }
  // display function to print the class data members value 
  void display()
  {
      cout<<"Name of current object: "<<name<<endl;
      cout<<"Age of current object: "<<age<<endl;
      cout<<endl;
  }
  
};
int main() 
{
    // creating objects of class using parameterized constructor
    Employee obj1("Anurag",31);
    
    // printing class data members for first object 
    obj1.display();
    
    // creating copy of the obj1
    Employee obj2(obj1);
    
    // printing class data members for second object 
    obj2.display();
    
    return 0;
}