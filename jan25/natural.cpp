// Sum of First 10 Natural Numbers and Print Odd Numbers in Reverse Order
#include <iostream>
using namespace std;

int main() {
    int start, end, sum = 0;
    cout << "Enter the initial range: ";
    cin >> start;
    cout << "Enter the end range: ";
    cin >> end;
    
    for (int i = start; i <= end; i++) {
        sum += i;
    }
    cout << "Sum: " << sum << endl;
    
    cout << "Odd numbers in reverse order: ";
    // for (int i = (end % 2 == 0 ? end - 1 : end); i >= start; i -= 2) {
    //     cout << i << " ";
    // }
    // cout << endl;
    if (end % 2 == 0) {
        end--; // Make end an odd number if it's even
    }
    for (int i = end; i >= start; i -= 2) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
