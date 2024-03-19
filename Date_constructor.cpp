/*  C++ Program to Display Date using Constructors */

#include<iostream>
using namespace std;

class date
{
    private:
        int dd, mm, yy;

    public:
        date(int d, int m, int y)
        {
            dd=d;
            mm=m;
            yy=y;
            cout<<"\nDate Object has been created..............\n";
        }
        void get_date()
        {
            cout<<"\n Enter date = ";
            cin>>dd;
            cout<<"\n Enter month = ";
            cin>>mm;
            cout<<"\n Enter year = ";
            cin>>yy;
        }
        void display()
        {
            cout<<"\nThe Entered Date is :: ";
            cout<<dd<<"-"<<mm<<"-"<<yy<<"\n";
        }
};
int main ()
{
date date1;
date1.get_date();
date1.display ();

return 0;
}
