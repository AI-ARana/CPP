#include <iostream>
using namespace std;

class Employee{
  
  // declaring private class data members 
private:
  string name;
  int age;
  
public: 

  // declaring parameterized constructor of three different types 
  // First Type
  Employee(string Employee_name) 
  {
      cout<<"Constructor to set name is called"<<endl;
      name = Employee_name;
      age = 21;
  }
  // Second Type
  Employee(int Employee_age)
  {
      cout<<"Constructor to set age is called"<<endl;
      name = "Anurag";
      age = Employee_age;
  }
  // Third Type
  Employee(string Employee_name, int Employee_age)
  {
      cout<<"Constructor for both name and age is called"<<endl;
      name = Employee_name;
      age = Employee_age;
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
    Employee obj1("Errika");
    
    // printing class data members for first object 
    obj1.display();
    
    Employee obj2(25);
    
    // printing class data members for second object 
    obj2.display();
    
    Employee obj3("Erra",15);
    
    // printing class data members for third object 
    obj3.display();
    return 0;
}