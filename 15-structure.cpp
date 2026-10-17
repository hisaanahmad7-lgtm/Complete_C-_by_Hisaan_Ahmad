#include <iostream>
#include <iomanip>

using namespace std;

typedef struct {
    int age;
    float salary;
    char grade;
} Employee;

int main() {
    // Employee hisaans;
    // Employee my_hisaan;
    // hisaans.age = 20;
    // hisaans.salary = 100;
    // hisaans.grade = 'A';

    // my_hisaan.age = 2000;
    // my_hisaan.salary = 1000000;
    // my_hisaan.grade = 'b';
    
    Employee hisaans = {2000, 1000000, 'b'};
    Employee my_hisaan = {22, 50000, 'A'};
    
    cout << "The age of emp1 is : " << hisaans.age << endl; 
    cout<< "The salary of emp1 is : " << hisaans.salary << endl; 
    cout<< "The grade of Emp1 is : " << hisaans.grade << endl;

cout<<endl;
    cout << "The age of emp2 is : " << my_hisaan.age << endl; 
    cout<< "The salary of emp2 is : " << my_hisaan.salary << endl; 
    cout<< "The grade of Emp2 is : " << my_hisaan.grade << endl;
    return 0;
}