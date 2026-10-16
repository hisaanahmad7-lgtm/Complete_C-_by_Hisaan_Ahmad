#include<iostream>
using namespace std;

int main(){
    int i = 0;
    while(i < 5){
        cout << "Value is :" << i << endl;
        i = i + 1;
    }
    cout<<endl;


    int ii;
    cout<<"Enter a number you wanna print table : ";
    cin>>ii;
    int myloop = 0;
    while(myloop<=10){
        cout<<i<<" X "<<myloop<<" = "<<ii*myloop<<endl;
        myloop = myloop + 1;
    }



    // cout<<endl;
    // char num1 = '1';
    // char num2 = '5';
    // char num3 = '3';
    
    // int n1 = num1 - '0';
    // int n2 = num2 - '0';
    // int n3 = num3 - '0';
    
    // int agq1 = n1 + n2 + n3;
    
    // int nums = n1 * n1 * n1;
    // int numss = n2 * n2 * n2;
    // int numsss = n3 * n3 * n3;
    // int myq2 = nums + numss + numsss;
    
    // cout << agq1 << endl;
    // cout << myq2 << endl;
    
    // if(agq1 == myq2){
    //     cout << "This is an Armstrong number!" << endl;
    // }
    // else{
    //     cout << "This is not Armstrong number..." << endl;
    // }
    
    // cout << nums;




    // do while loop 
    cout<<endl;
    int my_variable = 0;
    do{
        cout<<i<<endl;
        my_variable+=3;
    }
    while(my_variable<=10);



    cout<<endl;
    int my_name = 0;
    do{
        cout<<"Hisaan Ahmad"<<endl;
        my_name = my_name + 1;
    }
    while(my_name<=3);
    return 0;
}
