#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
    int i ,r,sum=0;
    cout<<"Enter range"<<endl;
    cin>>r;
    for(i=1;i<=r;i++)
    {
        int a=i*i;
        sum=sum+a;

    }
cout<<sum;
}
