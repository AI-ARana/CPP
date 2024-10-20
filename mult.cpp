#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
    int sum=0;
    for(int i=0;i<100;i++)
    {
        if((i%3==0)||(i%7==0))
        {
            sum=sum+i;
        }

    }
    cout<<"the sum of all the multiples of 3 or 7 below 100 is equal to  "<<sum;
}
