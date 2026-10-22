#include <iostream>
#include <iomanip>
#include <typeinfo> 
#include<string>
using namespace std;

int cel_to_faranHeight(int c){
    return (1.8*(c+32));
}
int main() {
    
    cout<<"cel to faranHeight is "<<cel_to_faranHeight(40)<<endl;

    int a = 44; int b = 55 ; int c = 66;
    cout<<"Sum is "<<a+b+c<<endl;
    cout<<"Sum is "<<float(a+b+c)<<endl;
    cout<<typeid(a).name()<<endl;

    
    string my_star(10, '*'); 
    cout << my_star << endl;
    return 0;
}