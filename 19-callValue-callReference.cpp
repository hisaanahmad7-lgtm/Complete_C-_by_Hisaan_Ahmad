#include <iostream>
#include <iomanip>

using namespace std;

// void one_numbers(int a){
//     a= 100;
// }

// int main() {
//     int change_number = 10020;
//     one_numbers(change_number);

//     cout<<change_number<<endl;
//     return 0;
// }

void one_numbers(int &a){
    a = 100;
}

int main() {
    int change_number = 10020;
    one_numbers(change_number);

    cout << change_number << endl;
    return 0;
}