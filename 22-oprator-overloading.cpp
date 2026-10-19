#include <iostream>
#include <iomanip>
#define pi 3.1415

using namespace std;


int sum(int a , int b){
    cout<<"Sum function exeuted successfuly"<<endl;
    return a+b;
}
int average(int a , int b , int c){
    cout<<"Average function exeuted successfuly"<<endl;
    return ((a+b+c)/2);
}
int volume_of_cube(int a){
    cout<<"volume function exeuted successfuly"<<endl;
    return a*a*a;
}

int area(int r){
    return pi*r*r;
}
int main() {
    
    cout<<"Sum of 2 number is "<<sum(12 , 33)<<endl;
    cout<<"Average of 2 number is "<<average(2 , 2 , 2)<<endl;
    cout<<"volume of 2 number is "<<volume_of_cube(4)<<endl;

    int rad;
    cout<<"enter the value of radius"<<endl;
    cin>>rad;
    cout<<"Area is "<<area(rad)<<endl;
    return 0;
}