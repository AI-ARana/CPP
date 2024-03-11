#include<iostream>
using namespace std;
class A {
    public:
    A() {
         cout << "A's constructor called" << endl;
        }
    };
    class B : public A {
       public:
       B() { 
            cout << "B's constructor called" << endl; 
            }
       };
    class C: public B {
      public:
      C() { 
          cout << "C's constructor called" << endl; 
          }
      };    
    int main() {
       C c;
       return 0;
   }