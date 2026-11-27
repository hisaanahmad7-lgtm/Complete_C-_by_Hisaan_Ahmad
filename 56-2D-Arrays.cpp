#include <iostream>
using namespace std;

int main() {
    // int arr[6][6];
    // int sum = 0;
    // for (int i = 0; i < 2; i++) {
    //     for (int j = 0; j < 2; j++) {
    //         cout << "Enter value for [" << i << "][" << j << "]: ";
    //         cin >> arr[i][j];
    //     }
    // }

    // for (int i = 0; i < 2; i++) {
    //     for (int j = 0; j < 2; j++) {
    //         sum = sum + arr[i][j];
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl; 
    // }
    // cout<<"Sum is :"<<sum;



    int A[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int B[2][3] = {{6, 5, 4}, {3, 2, 1}};
    int C[2][3];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    cout << "Sum Matrix:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
