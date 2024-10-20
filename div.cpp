#include <iostream>
#include <conio.h>

using namespace std;

    int divide(int a, int b)
    {
        int q=0;
        while(a>=b)
        {
            a=a-b;
            ++q;
        }
        return q;
    }
int main()
{
    int a=15;
    int b=3;
    cout<<divide(a,b);

}
