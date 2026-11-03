#include <iostream>
#include <iomanip>

using namespace std;

class Employee{
    public:
        int salary;
        int age;
        Employee(int s, int a){
            salary = s;
            age = a;
        }

        ~Employee(){
            cout << "Destructor called for Employee with salary: " << salary << " and age: " << age << endl;
        }
};

class Manager : public Employee{
    public:
        int bonus;
        Manager(int s, int a, int b) : Employee(s, a){
            bonus = b;
        }

        void displayDetails(){
            cout << "Salary: " << salary << ", Age: " << age << ", Bonus: " << bonus << endl;
        }


        ~Manager(){
            cout << "Destructor called for Manager with salary: " << salary << ", age: " << age << ", and bonus: " << bonus << endl;
        }
};
int main() {
    
    Employee emp1(50000, 30);
    cout << "The Salary of Employee 1 is : " << emp1.salary << endl;
    cout << "The Age of Employee 1 is : " << emp1.age << endl;


    Manager mgr1(80000, 40, 10000);
    mgr1.displayDetails();
    // cout << "The Salary of Manager 1 is : " << mgr1.salary << endl;
    // cout << "The Age of Manager 1 is : " << mgr1.age << endl;
    // cout << "The Bonus of Manager 1 is : " << mgr1.bonus << endl;
    return 0;
}