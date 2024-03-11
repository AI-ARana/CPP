/*Code Implementation of Recursive Approach for converting 
Binary Number into Decimal Number in C++*/
#include<bits/stdc++.h>
using namespace std;
int BinarytoDecimal(char binary[],int len, int i=0){
   if (i == len-1)
   return (binary[i] - '0');

   int temp=binary[i]-'0';
   temp=temp<<len-i-1;
   temp=temp+BinarytoDecimal(binary,len,i+1);
   return (temp);
}
int main(){
   char strBinary[] = "111";
   int length=strlen(strBinary);
   cout <<"Decimal Number of given binary number: "<<BinarytoDecimal(strBinary,length) << endl;
   return 0;
}