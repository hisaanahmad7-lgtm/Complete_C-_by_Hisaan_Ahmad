#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    // int hisaan = 12;
    // hisaan = 44;
    // float ahmad = 3443.33;
    // ahmad = 10.10;
    // cout<<"The value of float is "<<ahmad<<endl;
    // cout<<"The value of hisaan is "<<hisaan<<endl;

    const int hisaan = 12;
    const float ahmad = 43.33;
    // ahmad = 10.10;   Doesnt allow by using const in c++
    cout<<"The value of float is "<<ahmad<<endl;
    cout<<"The value of hisaan is "<<hisaan<<endl;


    cout<<"The value of hisaan is "<<setw(4)<<hisaan<<endl;
    cout<<"The value of ahamd is "<<setw(10)<<ahmad<<endl;
    return 0;
}