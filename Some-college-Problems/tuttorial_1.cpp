#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    // Problem no 1


    int num1;
    char c1;
    cout << "Enter the value of num1 and c1" << endl;
    cin >> num1;
    cin >> c1;

    cout << num1 << "|";

    int q1 = 0;
    while(q1 < num1) {
        cout << c1 << "|";
        q1++;
    }
    
    cout << num1 << endl;

    // Problem no 2

    int a = 12; int b = 33; int c = 77;
    cout<<"The  sum of "<<a<<" & "<<b<<" & "<<c<<" is : "<<a+b+c<<endl;

    float a1 = 12.44; float b1 = 33.12; float c11 = 77.99;
    cout<<"The  sum of "<<a1<<" & "<<b1<<" & "<<c1<<" is : "<<a1+b1+c11<<endl;

    // Problem no 3

    int divisible , devider;
    cout<<"Enter the values: "<<endl;
    cin>>divisible>>devider;

    int answer = divisible/devider;
    int reminder = divisible%devider;

    cout<<"Quotient : "<<answer<<endl;
    cout<<"Reminder : "<<reminder<<endl;


    // Problem no 4

    int hisaan_1;
    int hisaan_2;
    cout<<"Enetr 2 number you wanna perforn Arthemetic opration...";
    cin>>hisaan_1>>hisaan_2;

    cout<<"The sum of 2 number is "<<hisaan_1 + hisaan_2<<endl;
    cout<<"The sub of 2 number is "<<hisaan_1 - hisaan_2<<endl;
    cout<<"The Multiplication of 2 number is "<<hisaan_1 * hisaan_2<<endl;
    cout<<"The Division of 2 number is "<<hisaan_1 / hisaan_2<<endl;
    cout<<"The Reminder of 2 number is "<<hisaan_1 % hisaan_2<<endl;

    // Problem no 5

    int farah_Height = 45;
    int calculation = (1.8*(farah_Height) + 32);
    cout<<"The temp from farnHeight to celcius is "<<calculation<<endl;

    // Problem no 6

    // problem no 6 is irrelevant we study this problem during pointers 
    return 0;
}