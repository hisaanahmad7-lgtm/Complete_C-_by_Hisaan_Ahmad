#include <iostream>
#include <iomanip>

using namespace std;

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
    
    struct employee e1;
    cout<<"Enter name in string age in numbers and grade in char:";
    cin>>e1.name>>e1.age>>e1.grade;

    cout<<"The name of employee is "<<e1.name<<" The age of emploee is "<<e1.age<<" And the grade of employee is... "<<e1.grade<<endl;
greet("Hisaan Ahmad");
    return 0;
}