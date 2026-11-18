#include <iostream>
#include <climits>

using namespace std;

int main() {
    int n;
    int user_choice;
    int sum = 0;
    int greatest = INT_MIN;

    cout << "Enter how many numbers to input: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid count." << endl;
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        cout << "Enter data (" << i << "): ";
        cin >> user_choice;
        sum += user_choice;

        if (i == 1 || user_choice > greatest) {
            greatest = user_choice;
        }
    }

    cout << "\nTotal (Sum) = " << sum << endl;
    cout << "Greatest Number = " << greatest << endl;

    return 0;
}