// Check if Character is Vowel or Consonant
#include <iostream>
using namespace std;
int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
            ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            cout << "Vowel" << endl;
        } else {
            cout << "Consonant" << endl;
        }
    } else {
        cout << "Not a letter" << endl;
    }
    // In Built function isalpha
    // if (isalpha(ch)) {
    //     cout << (strchr("AEIOUaeiou", ch) ? "Vowel" : "Consonant") << endl;
    // } else {
    //     cout << "Not a letter" << endl;
    // }
    return 0;
}
