#include<iostream>
using namespace std;
class Counter
{
    protected:
    unsigned int count;
     public:
     Counter():count() // constructor, one arg
     {

     }
     Counter(int c):count(c) // constructor, one arg
     {

     }
     unsigned int get_count() const // return count
     {
        return count;
     }
     Counter operator ++ () // increment count (prefix)
     {
        return Counter(++count);
     }

};

class CountDn : public Counter
{
    public:
    CountDn():Counter() // Constructor, no args
    {

    }
    CountDn(int c): Counter(c) // constructor, one args
    {

    }
    CountDn operator --() // Decrementcount (prefix)
    {
        return CountDn(--count);
    }
};
int main()
{
    CountDn c1; //Class CountDn
    CountDn c2(100);
    cout<<"\n c1 = " <<c1.get_count(); // Display
    cout<<"\n c2 = " <<c2.get_count(); // Display

    ++c1;
    ++c1;
    ++c1;  // Increment c1

    cout<<"\n c1= "<<c1.get_count(); // Display it
    --c2;
    --c2;
    --c2; // Decrement c2
     cout<<"\n c2= "<<c2.get_count(); // Display it

     CountDn c3 = --c2; // create c3 from c2
     cout<<"\n c3= " <<c3.get_count(); // Display c3
     cout<<endl;
     return 0;
}