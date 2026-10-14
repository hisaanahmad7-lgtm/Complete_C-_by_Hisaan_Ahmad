#include<iostream>
using namespace std;

int main(){

    int num1, num2;
    char oprator;
    cout<<"ENter the value of num1 and num2 : ";
    cin>>num1>>num2;
    cout<<"Enter the oprator do you wanna perform calculation (+ , - , * , / , %)";
    cin>>oprator;

    if (oprator == '+'){
        cout<<"The sum of "<<num1<<" And "<<num2<<" is " <<num1 + num2<<endl;
    }
    else if (oprator == '-'){
        cout<<"The subtraction of "<<num1<<" And "<<num2<<" is " <<num1 - num2<<endl;
    }
    else if (oprator == '*'){
        cout<<"The Multiplicstion of "<<num1<<" And "<<num2<<" is " <<num1 * num2<<endl;
    }
    else if (oprator == '/'){
        cout<<"The Division of "<<num1<<" And "<<num2<<" is " <<num1 / num2<<endl;
    }
    else if (oprator == '%'){
        cout<<"The Reminder of "<<num1<<" And "<<num2<<" is " <<num1 % num2<<endl;
    }
    else{
        cout<<"invalid Input";
    }
    return 0;
    
}