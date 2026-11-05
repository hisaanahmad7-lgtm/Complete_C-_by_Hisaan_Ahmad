#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Problem no 1
    // int row;
    // cout<<"ENter the number of rows: "<<endl;
    // cin>>row;

    // for(int i = 0 ; i<=row; i++){
        
    //     for(int j = 0; j<=i; j++){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }
    // Problem no 2 

    // for(int i = 0 ; i<=5 ; i++){
    //     for(int j = 0; j<=i; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // for(int i = 0 ; i<=5 ; i++){
    //     for(int j = 5; j>=i; j--){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    for(int i = 0 ; i<=5 ; i++){
        for(int j = 0; j<=i; j++){
            cout<<" ";
        }
        // cout<<endl;
    // }
    for(int k = 1; k <= ( i - 1); k++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}