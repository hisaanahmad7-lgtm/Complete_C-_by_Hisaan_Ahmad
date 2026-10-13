#include<iostream>
using namespace std;

int main(){
    long double e = 44.3;
    long e1 = 44.3;
    float e2 = 44.3;
    int e3 = 44.3;
    short e4 = 22;
    char e5 = 'A';
    cout<<"The size of e is "<<sizeof(e)<<endl;
    cout<<"The size of e1 is "<<sizeof(e1)<<endl;
    cout<<"The size of e2 is "<<sizeof(e2)<<endl;
    cout<<"The size of e3 is "<<sizeof(e3)<<endl;
    cout<<"The size of e4 is "<<sizeof(e4)<<endl;
    cout<<"The size of e5 is "<<sizeof(e5)<<endl;


    int x = 12;
    int &  y = x;
    cout<<x<<endl;
    cout<<y<<endl;

    // cout<<"The size of x is"<<sizeof(x)<<endl;
    // cout<<"The size of x is"<<sizeof(y)<<endl;

    cout<<float(x)<<endl;
    cout<<float(y)<<endl;

    cout<<"The size of x is"<<sizeof(x)<<endl;
    cout<<"The size of y is"<<sizeof(y)<<endl;
    return 0;
}