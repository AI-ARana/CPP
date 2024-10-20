#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
    int i ,r;
    cout<<"Enter range"<<endl;
    cin>>r;
    for(i=1;i<=r;i++)
    {
        int cube=i*i*i;
        cout<<"Cube of "<<i<<" is = "<<cube<<endl;
    }
}

