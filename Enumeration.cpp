// Declare a new enumeration named Week
#include <iostream>
using namespace std;
int main() {
enum Week {

  // Here are the enumerators
  // These define all the possible values this type Week can hold
  Monday, //assigned 0
  Tuesday, //assigned 1
  Wednesday, //assigned 2
  Thursday, //assigned 3
  Friday, //assigned 4
  Saturday, //assigned 5
  Sunday //assigned 6
};
  Week day;
  day = Friday;
  cout << "Day: " << day + 1 << endl;
  return 0;
}