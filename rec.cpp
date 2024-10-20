#include <iostream>
#include <conio.h>

using namespace std;
int rec(int a[],int s,int r);
int main()
{
    int a[100];
    int r,i;
    cout<<"Enter range"<<endl;
    cin>>r;
    cout<<"Enter array element"<<endl;
    for(i=0;i<r;i++)
    {
        cin>>a[i];
    }
    rec(a,0,r);
}
int rec(int a[], int s, int r)
{
    if(s>=r)
    {
       return 0;
    }
    cout<<a[s]<<endl;
//    rec(a,s+1,r);
}
