#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
    int a[100];
    int r;
    cout<<"Enter Range"<<endl;
    cin>>r;
    cout<<" Enter array element"<<endl;
    for(int i=0;i<r;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<r;i++)
    {
        for(int j=i+1;j<r;j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0;i<r;i++)
    {
        cout<<a[i]<<endl;
    }
return 0;
}
