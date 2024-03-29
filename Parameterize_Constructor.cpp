/*Parameterized constructor is used to initialize data members with the values 
provided by the user. This constructor is basically the upgraded version of 
the default constructor. We can define more than one parameterized constructor 
according to the need of the user, but we have to follow the rules of 
the function overloading, like a different set of arguments must be there for each constructor.*/
#include <bits/stdc++.h>
using namespace std;
class Student {
  
    public:
    
    string name;
    int roll_no;
    int marks;
    
    Student() {
        cout<<"Student Class Default Constructor called\n";
    }
    
    Student(string name,int roll_no, int marks) { //Parameterize constructor
        cout<<"Student Class Parameterize Constructor"<<endl;
        this->name = name;
        this->roll_no = roll_no;
        this-> marks = marks;
    }
       
    void print() {
        cout<<"My name is "<<name<<" and my roll number is "<<roll_no<<". I got "<<marks<<" marks out of 100\n";
    }
    
};

int main() {
    
    //parameterized constructor is being called
    Student s1("Anurag",29,95);
    s1.print();
}