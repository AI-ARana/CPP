/*Code Implementation of For Loop approach for converting 
Binary Number into Decimal Number in C++*/
#include<bits/stdc++.h>
using namespace std;

int main() {
    int i, bin_num, decimal_num = 0, rem;  
    bin_num = 111;
    for (i = 0; bin_num != 0; ++i)  
    {  
        rem = bin_num % 10;  
        bin_num = bin_num / 10;  
        decimal_num = decimal_num + (rem) * ( pow (2, i));  
 
    }  
    cout<<"\n Decimal Number of given binary number:"<<decimal_num;
    return 0;
}