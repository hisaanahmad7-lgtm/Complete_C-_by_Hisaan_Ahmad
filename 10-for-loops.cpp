#include<iostream>
using namespace std;

int main(){
    // For loops in c++
    int q = 0;
    for(int q = 0; q <= 5; q++){ 
        cout << "Hisaan Ahmad" << endl;
    }

    cout<<endl;
    int i = 0;
    for(i=0;i<=10;i++){
        cout<<"Value of "<<i<<" is : "<<i<<endl;
    }

    cout<<endl;
    int q1 = 0;
    for(int q1 = 0; q1 <= 5; q1+=2){ 
        cout << q1<<" Is Even Number" << endl;
    }


    cout<<endl;
    int q11 = 5;
    for(int q11 = 5; q11 >= 0; q11--){ 
        cout << q11<<" Is Reverse Numer..." << endl;
    }

    cout<<endl;
    int loop = 0;
    int user_choice;
    cout << "Enter your choice";
    cin >> user_choice;

    for(loop = 0 ; loop<=10 ; loop++){
        cout<<user_choice<<"x"<<loop<<"="<<user_choice*loop<<endl;
    }



    cout<<endl;
    int loops = 10;
    int user_choices;
    cout << "Enter your choice ; ";
    cin >> user_choices;

    for(loops = 10 ; loops>=0 ; loops--){
        cout<<user_choices<<"x"<<loops<<"="<<user_choices*loops<<endl;
    }

    // #Advanced For loop By Hisaan Ahmad

    int w1 = 0;
    int w2 = 0;
    for(w1 = 0 ; w1<=4 ; w1++){
        for(w2 = 0 ; w2<=w1; w2++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;

}