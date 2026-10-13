#include <iostream>
using namespace std;    

int sub(int a, int b){
    return a - b;
}




int globalVar = 100;
void showValues() {
    printf("Function ke andar globalVar: %d\n", globalVar);
}



int my_local_variable = 12;

int sum(int q1, int q2) {
    int mysum = q1 + q2;
    return mysum;
}
int main(){

    int num1 = 12;
    int num2 = 13;
    int r;
    float pi = 3.14;
    char character = 'A';


    // cout<<"Enter the radius of circle: "<<endl; 
    // cin>>r;
    cout<<"The sum of " <<num1<< "And" <<num2<< "is: "<<num1 + num2<<endl;
    // cout<<"The area of circle is: "<<pi*r*r<<endl;
    // cout<<"The Circumference of circle is: "<<2*pi*r<<endl;
    // cout<<"The value of num1 is " <<num1<<"The value of num2 is "<<num2<<"The value of pi is "<<pi<<"The value of char is "<<character<<endl;



    cout<<"My name is Hisaan Ahmad\n and i am a good boy\n i study in class 12"<<endl;
    cout<<"The difference of " <<num1<<  " And"  <<num2<< "is: " <<sub(num1, num2)<<endl;

    cout<<"The sum of 2 and 3 is: "<<sum(2, 3)<<endl;\




    int localVar = 50;
    cout<<"local variable in main func= (localVar):"<<localVar;
    cout<<"global var in main fnc (globalVar): "<<globalVar;

    showValues();
    return 0;
}