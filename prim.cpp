#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;
int prime(int x)
{
    int y=2;
    while(y<=sqrt(x))
    {
        if(x%y==0)
        {
            return 0;
        }
        else
        {
            y++;
        }
    }
    return 1;

}
int main()
{
 int x=3;
 int c=1;
 while(c<1001)
 {
    c=c+prime(x);
    x=x+2;
 }
 x=x-2;
 cout<<x;
}

