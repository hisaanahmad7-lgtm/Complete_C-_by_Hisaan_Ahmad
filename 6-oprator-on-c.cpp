#include<iostream>
using namespace std;

int main(){

    int first_num = 100;
    int sec_number = 44;

    cout<<"The + of 2 number is "<<first_num + sec_number<<endl;
    cout<<"The - of 2 number is "<<first_num - sec_number<<endl;
    cout<<"The * of 2 number is "<<first_num * sec_number<<endl;
    cout<<"The / of 2 number is "<<first_num / sec_number<<endl;
    cout<<"The % of 2 number is "<<first_num % sec_number<<endl;


    cout<<endl;
    cout<<endl;
    cout<<"\n";
    cout<<"\n";
    cout << "The + of 2 number is " << ((first_num + sec_number) == (first_num - sec_number)) << endl;
    // cout<<"The - of 2 number is "<< ((first_num + sec_number)  (first_num - sec_number)) << endl;
    cout<<"The * of 2 number is "<< ((first_num + sec_number) != (first_num - sec_number)) << endl;
    cout<<"The / of 2 number is "<< ((first_num + sec_number) <= (first_num - sec_number)) << endl;
    cout<<"The % of 2 number is "<< ((first_num + sec_number) >= (first_num - sec_number)) << endl;



    cout<<endl;
    cout<<endl;
    cout<<"\n";
    cout<<"\n";
cout << "The * of 2 number is " << (((first_num + sec_number) != (first_num - sec_number)) && ((first_num + sec_number) <= (first_num - sec_number))) << endl;
cout << "The * of 2 number is " << (((first_num + sec_number) != (first_num - sec_number)) || ((first_num + sec_number) <= (first_num - sec_number))) << endl; 
cout << "The * of 2 number is " << (((first_num + sec_number) != (first_num - sec_number)) and ((first_num + sec_number) <= (first_num - sec_number))) << endl;
}