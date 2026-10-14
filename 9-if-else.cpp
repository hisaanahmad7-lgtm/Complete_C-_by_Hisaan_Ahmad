#include<iostream>
using namespace std;

int main(){

    int num1, num2;
    char oprator;

    int age;
    int password = 11223344;
    int my_user_choice;
    cout<<"ENter the value of num1 and num2 : ";
    cin>>num1>>num2;
    cout<<"Enter the oprator do you wanna perform calculation (+ , - , * , / , %) : ";
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




    cout<<"Enter your proper age : ";
    cin>>age;
    if (age>=18){
        cout<<"You can drive..."<<endl;
    }
    else if (age<18){
        cout<<"You can not drive..."<<endl;
    }
    else{
        cout<<"Invalid input";
    }




    cout<<"Enter your password : ";
    cin>>my_user_choice;
    if(password == my_user_choice){
        cout<<"Correct password"<<endl;
    }
    else if(password != my_user_choice){
        cout<<"Incorrect passsword try again..."<<endl;
    }
    else{
        cout<<"Invalid input... Try again"<<endl;
    }
    return 0;

}