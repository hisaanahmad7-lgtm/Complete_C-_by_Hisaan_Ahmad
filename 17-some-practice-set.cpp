#include <iostream>
#include <iomanip>

using namespace std;

struct employee{
    string name;
    int age;
    int salary;
};

typedef struct student{
    string name;
    int age;
    char grade;
    float cgpa;
} student;
union salary{
    int int_salary;
    float float_salary;
};

enum good_salary{val1 = 100,
    val2 = 1000,
    val3 = 10000,
    val4 = 100000,
    val5 = 10000000};
int main() {
    
    struct employee emp1 = {"Hisaan Ahamd" , 12 , 1000};
    cout << emp1.name << " " << emp1.age << " " << emp1.salary << endl;
    
    salary s1;
    s1.int_salary= 45645;
    cout<<s1.int_salary<<endl;

    good_salary first = val2;
    cout<<first<<endl;


    student std1 = {"M.Hisaan Ahamd" , 12 , 'A' , 3.9};
    cout<<"The name of student is "<<std1.name<<endl<<" The age of student is "<<std1.age<<endl<<" The grade of student is "<<std1.grade<<endl<<" The GPA pf student is "<<std1.cgpa<<endl;
    return 0;

}