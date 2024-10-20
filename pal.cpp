#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;
int pal(int n)
{
    int r=0;
    int temp =n;
    while(temp)
    {
        r=10*r+(temp%10);
        temp=temp/10;
    }
    return r==n;

}
int main()
{
    int i,j,m=0;
    for(i=100;i<=999;i++)
    {
        for(j=100;j<=999;j++)
        {
            int p=i*j;
            if(pal(p)&&p>m)
            {
                m=p;
            }
        }
    }
    cout<<m;
}
