/*If we have an object of a class and we want to create its copy in a new declared object 
of the same class, then a copy constructor is used. The compiler provides each class 
a default copy constructor and users can define it also. It takes a single argument 
which is an object of the same class.*/

#include<iostream>
/*Including <bits/stdc++.h> is a non-standard and non-portable way to include all 
the standard C++ libraries in one go. It's not recommended for production code 
because it's not guaranteed to work across different compilers and environments.*/
#include <bits/stdc++.h>
using namespace std;
class Student {
  
    public:
    
    string name;
    int roll_no;
    int marks;
    
    Student() {
        cout<<"Student Class Default Constructor\n";
    }
    
    Student(string name,int roll_no, int marks) { // Parameterize Constructor
        this->name = name;
        this->roll_no = roll_no;
        this-> marks = marks;
    }
    
    Student(Student &other) {   // Copy Constructor
        this->name = other.name;
        this->roll_no = other.roll_no;
        this->marks = other.marks;
    }
    
    void setValue(string name,int roll_no, int marks) {
        this->name = name;
        this->roll_no = roll_no;
        this-> marks = marks;
    }
    
    void printValue() {
        cout<<"My name is "<<name<<" and my roll number is "<<roll_no<<". I got "<<marks<<" marks out of 100\n";
    }
    
};

int main() {
    
    //parameterized constructor is being called
    Student s1("Anurag",29,95);
    s1.printValue();
    
  //copy constructor is being called
    Student s2(s1);
    s2.printValue();
}