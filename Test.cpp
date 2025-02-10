// #include<iostream>
// #include<conio.h>
// using namespace std;
// int main(){
//     cout<<"Anurag rana";
// return 0;
// }

#include<iostream>

using namespace std;

int main(){
    string hello = "Hello";
    string world = "world!";
    string msg = hello + " " + world ;
    system("cls");
    cout <<  msg << endl;
    msg[0] = 'h';
    cout <<  msg << endl;

    //msg

    return 0;

}