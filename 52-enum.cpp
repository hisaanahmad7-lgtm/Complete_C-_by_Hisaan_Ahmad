#include <iostream>
using namespace std;

enum day { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

int main() {
    // int n;
    // day x1;

    // cout << "Enter day (0=Sunday, 1=Monday, ..., 6=Saturday): ";
    // cin >> n;

    // if (n < 0 || n > 6) {
    //     cout << "Invalid day!";
    //     return 0;
    // }

    // x1 = static_cast<day>(n);

    // cout << "Today is ";

    // switch (x1) {
    //     case Sunday:    cout << "Sunday";    break;
    //     case Monday:    cout << "Monday";    break;
    //     case Tuesday:   cout << "Tuesday";   break;
    //     case Wednesday: cout << "Wednesday"; break;
    //     case Thursday:  cout << "Thursday";  break;
    //     case Friday:    cout << "Friday";    break;
    //     case Saturday:  cout << "Saturday";  break;
    // }

    int x = 12.22;
    float y = static_cast<float>(x);
    cout<<y;

    return 0;
}