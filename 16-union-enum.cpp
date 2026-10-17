#include <iostream>
#include <iomanip>

using namespace std;

union Data {
    int id;
    char code;
};

union id_card{
    int c;
    char c1;
};

union salary{
    int salarys;
    // float salaryss;
    float good_salary;
};
int main() {
    Data emp;
    Data emp2;
    // emp.id = 105;
    emp.id = {120};
    emp2.id = 11223344;
    cout << emp.id << endl;
    cout << emp2.id << endl;

    emp.code = 'X';
    cout << emp.code << endl;

    id_card name;
    name.c1 = 'A';
    cout<<name.c1<<endl;


salary my_sal;
my_sal.salarys = 10000;
my_sal.good_salary = 55256.55;
cout<<"MY salary is "<<my_sal.salarys<<endl;
cout<<"MY salary is "<<my_sal.good_salary<<endl;
    return 0;
}