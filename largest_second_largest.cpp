#include<iostream>

using namespace std;

int main() {
    int n = 0, i1 = 0, i2 = 0, temp = 0;
    int array[10];

    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    cout << "The array elements are: ";
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    i1 = array[0];
    i2 = array[1];

    if (i1 < i2) {
        temp = i1;
        i1 = i2;
        i2 = temp;
    }

    for (int i = 2; i < n; i++) {
        if (array[i] > i1) {
            i2 = i1;
            i1 = array[i];
        } else if (array[i] > i2 && array[i] != i1) {
            i2 = array[i];
        }
    }
    cout << "The largest = " << i1 << endl;
        cout << "The second largest = " << i2 << endl;

    return 0;
}
