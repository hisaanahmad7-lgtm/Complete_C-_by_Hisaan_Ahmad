#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class student{
    private:
    int bank_balance;
    int salary;
    string adress;

    public:
    string name;
    int age;
    int DOB;

    void get_info_of_student(void);
    void show_info_of_student(void);
};

void student :: get_info_of_student(){
    cout << "Enter info of student (Bank Balance, Salary, Address, Name, Age, DOB):" << endl;
    cin >> bank_balance >> salary >> adress >> name >> age >> DOB;
}

void student :: show_info_of_student(){
    cout << "\n--- Student Details ---" << endl;
    cout << "Bank Balance: " << bank_balance << endl;
    cout << "Salary: " << salary << endl;
    cout << "Address: " << adress << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "DOB: " << DOB << endl;
}

int main() {
    student s1;
    s1.get_info_of_student();
    s1.show_info_of_student();

    return 0;
}