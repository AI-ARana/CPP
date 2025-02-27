// Pascal Triangle
#include<iostream>
using namespace std;
int main() {
    int rows, n = 1;
    system("cls");
    cout << "Enter number of rows: ";
    cin >> rows;
    
    for (int i = 0; i < rows; i++) {
        int n = 1;
        // leading space
        for (int j = 0;  j< rows - i - 1; j++) {
            cout << "  ";
        }
        for (int k = 0; k <= i; k++) {
            cout << n << "   ";
            n = n * (i - k) / (k + 1);
        }
        cout << endl;
    }
    return 0;
}
