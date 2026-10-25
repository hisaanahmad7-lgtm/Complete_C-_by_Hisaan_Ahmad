#include <iostream>
#include <iomanip>
#define true 11
#define false 0

using namespace std;

int main() {
    
    // int a = 22;
    // if(a == 22){
    //     cout<<true;
    // }

    string username = "hisaan123";
    string password = "mypassword";

    // bool isValidUser = (username == "hisaan123");
    // bool isValidPass = (password == "mypassword");

    // string user_pass;
    // cout<<"Enetr your Password : ";
    // cin>>user_pass;

    // if(user_pass == password){
    //     cout<<true;
    // }
    // else{
    //     exit(0);
    // }
    
    // cout<<"I am Hisaan Ahamd";

    // bool isLogedIn = isValidUser && isValidPass;

    // if (isLogedIn) {
    //     cout << "Login Successful!" << endl;
    // } else {
    //     cout << "Invalid credentials!" << endl;
    // }


    // string user_name = "Hisaan";
    // if(user_name == "Hisaan"){
    //     cout<<"You entered correct name"<<endl;
    //     cout<<true;
    // }
    // else{
    //     cout<<"System exitting..."<<endl;
    //     exit(0);
    // }

    // int num1 = 112233;
    // bool var = true;

    // if(num1 == 112233){
    //     cout<<var;
    // }
    // else{
    //     cout<<"Not var";
    // }


    // increment and Decrement oprator  

    int x = 3;
    cout << x++<<endl; 
    cout << x<<endl; 
    cout<<endl;


    int count = 3;
    while (count > 0) {
        cout<<count<<endl;
        count--;
}

    cout<<endl;
    int a = 5;
    int b = ++a + a++;
    cout<<b;

    cout<<endl;
    int x2 = 10;
    if (++x2 == 11) {
        cout<<"Yessssssss";
    }

    cout<<endl;
    int x1 = 10;
    if (x1++ == 10) {
        cout<<"Goooooood";
}

    cout<<endl;
    int x11 = 8;
    int y = x11-- - --x11;
    cout<<y<<endl;
    return 0;
}