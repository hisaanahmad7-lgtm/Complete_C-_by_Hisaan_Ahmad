#include <iostream>
#include <iomanip>
#include <algorithm>
#include<climits>

using namespace std;

int main() {
    int count = 0;
    int arr1[5] = {12, 44, 66, 24, 88};
    int n = 5;
    int greatest = INT_MIN;
    reverse(arr1, arr1 + n);

    for (int i = 0; i < n; i++) {
        cout << arr1[i] << " ";
        count++;

        greatest= max(greatest , arr1[i]);
    
    }

    cout << endl << "Count: " << count << endl;
    cout<<greatest;
    return 0;
}