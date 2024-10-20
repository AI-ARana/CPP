#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
    int a[]={5,1,1};
    for (int i=0;i<=3;i++)
    {
        for(int j=i+1;j<=3;j++)
        {
            if (a[i]==a[j])
            {
                cout<<a[j]<<endl;
            }
        }
    }
}
