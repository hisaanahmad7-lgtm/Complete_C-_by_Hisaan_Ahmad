#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cout<<"Enter a number;";
    cin>>n;
    for (int i = 1; i < n; i++){
        for (int x = 1; x <= i; x++)
        {
            cout<<i*x;
        }
        cout<<endl;
    }
    cout<<endl;



    for (int i = 1; i < n; i++){
        for (int x = 1; x <= i; x++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
        cout<<endl;



    for (int i = n; i >= 1; i--) {      
        for (int x = 1; x <= i; x++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;


    for (int x = 1; x <= n; x++) {
        for (int y = 1; y <= n - x; y++) {
            cout << " ";
        }
        for (int z = 1; z <= 2 * x - 1; z++) {
            cout << "*";
        }
        cout << endl;
    }

    for (int x = n; x >= 1; x--) {
        for (int y = 1; y <= n - x; y++) {
            cout << " ";
        }
        for (int z = 1; z <= 2 * x - 1; z++) {
            cout << "*";
        }
        cout << endl;
    }
    


    cout<<endl;
    for (int i = 1; i <= n; i++) {
        long long denom = 0;
        for (int y = 1; y <= i; y++) {
            denom = denom * 10 + y;
        }

        cout << i << "/" << denom;
        if (i < n) {
            cout << " , ";
        }
    }

    cout << endl;



    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 5; j++) {
            cout << j << " x " << i << " = " << j * i << "\t";
        }
        cout << "\n";
    }

    cout<<endl;
    int rows = 4, cols = 8;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            cout << "* ";
        }
        cout << "\n";
    }
    cout<<endl;

    int alpha = 5;
    for (int i = 1; i <= alpha; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << "\n";
    }




    cout<<endl;
    for (int i = 1; i <= n; i++) {
        for (int s = 1; s <= n - i; s++) {
            cout << " ";
        }
        for (int j = i; j >= 1; j--) {
            cout << j;
        }
        for (int k = 2; k <= i; k++) {
            cout << k;
        }
        cout << endl;
    }

    for (int i = n - 1; i >= 1; i--) {
        for (int s = 1; s <= n - i; s++) {
            cout << " ";
        }
        for (int j = i; j >= 1; j--) {
            cout << j;
        }
        for (int k = 2; k <= i; k++) {
            cout << k;
        }
        cout << endl;
    }


    cout<<endl;
    for (int i = n; i >= 1; i--) {
    for (int j = i; j >= 1; j--) {
        cout << j;
    }
    cout << endl;
}
    

    return 0;
}