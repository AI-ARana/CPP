#include <iostream>
using namespace std;

// Calculate Square Root Without sqrt()
// double sqrtApprox(double n) {
//     double x = n, y = 1;
//     while (x - y > 0.0001) {
//         x = (x + y) / 2;
//         y = n / x;
//     }
//     return x;
// }
int main(){
    double a,b,c;
    system("cls");
    cout<<"Enter the number:";
    cin>>c;
    a=c;
   // cout<<sqrtApprox(c);
    while(a - b > 0.0001){
        a = (a + b) / 2;
        b = c / a;
    }
    cout<< "The Square root of" << c<<"is :"<<a;
    return 0;
}



