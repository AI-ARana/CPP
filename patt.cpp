#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
    int i ,r, a=1;
    int m =(2*r)-2;
    cout<<"Enter range"<<endl;
    cin>>r;
    for(i=1;i<=r;i++)
    {
        for(int j=1;j<m;j++)
        {
            cout<<" ";
        }
        m=m-1;
    for(int k=1;k<i+1;k++)
    {
        cout<<a<<" ";
        a++;
    }

        cout<<" "<<endl;

    }
}


