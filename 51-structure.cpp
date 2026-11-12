#include <iostream>
#include <iomanip>

using namespace std;


struct student{
    string name;
    int age;
    int salary;
    string adress;
};
struct employee{
    string name;
    int age;
    char grade;
};
string greet(string name){
    cout<<"How are you " + name <<endl;

    return 0;
};
int main() {
    

    struct student s1 = {"Hisaan" , 12 , 2000 , "Housing_Colony_no_2"};
    cout<<s1.name<<endl<<s1.age<<endl<<s1.salary<<endl<<s1.adress<<endl;


    struct employee e1;
    cout<<"Enter name in string age in numbers and grade in char:";
    cin>>e1.name>>e1.age>>e1.grade;

    cout<<"The name of Employee is "<<e1.name<<" The age of Employee is "<<e1.age<<" And the grade of Employee is... "<<e1.grade<<endl;
greet("Hisaan Ahmad");
    return 0;
}

// cout<<"Ended"<<endl;