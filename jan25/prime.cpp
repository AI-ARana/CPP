// Check if a Number is Prime
#include<iostream>
using namespace std;
int main() {
    int num, flag = 1;
    cout << "Enter a number: ";
    cin >> num;
    system("cls");
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            flag = 0;
            break;
        }
    }
    cout << num << " is "<< (flag ? "Prime" : "Not Prime") << endl;
    return 0;
}
