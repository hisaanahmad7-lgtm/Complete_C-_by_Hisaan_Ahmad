#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    // int my_user;
    // cout<<"Enter a number you wanna check divisible by 3 or not : ";
    // cin>>my_user;

    // if(!(my_user%3 == 0)){
    //     cout<<"Num is not divisible by 3"<<endl;
    // }
    // else{
    //     cout<<"Num is divisible by 3!";
    // }
//     return 0;
// }


// float q2 = 323.332;
// bool q2 = true;

// cout<<q2<<endl;
// int alpha = int(q2);
// cout<<alpha<<endl;
// cout<<bool(q2);

// char ww = 'B';
// int aa = 55; 
// cout<<aa<<ww;


int e_consumed;
cout<<"Enter the number of units you have cosumed :";
cin>>e_consumed;

float p_unit;
cout<<"Enter the price of 1 unit : ";
cin>>p_unit;

float t_bill = e_consumed * p_unit;
cout<<t_bill;

bool grater = e_consumed >= 5000;
cout<<grater;

bool less = e_consumed<=5000 || e_consumed<=0;
cout<<less;
return 0;

}