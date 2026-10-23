#include <iostream>
#include <iomanip>

using namespace std;

class calculator{
    private:
    int q1;
    int q2;

    public:
    void taking_value(void){
        cout<<"Enter value of q1 and q2";
        cin>>q1>>q2;
    }

    void calculating_value(void){
        cout<<"Sum is "<<q1 + q2;
        cout<<"Sub is "<<q1 - q2;
        cout<<"Multplicatoin is "<<q1 * q2;
        cout<<"Division is "<<q1 / q2;
        cout<<"Reminder is "<<q1 % q2;

    }
};


class Product_by_number{
    private:
    int no_of_product;
    // int id_of_product;
    int price_of_product = 44; 

    public:
    void Taking_product(void){
        cout<<"Enter the no of product : "<<endl;
        cin>>no_of_product;
    }

    void calclation_on_product(void){
        cout<<"You have taken"<<no_of_product<<"And its price is :"<<no_of_product*price_of_product;
    }

};


class intro_to_my_self{

    private:
    int salary;
    int bank_balance;
    string adress;

    public:
    string name;
    int age;
    int DOB;

    void Taking_my_data(void);
    void calculating_my_data(void);
};

void intro_to_my_self :: Taking_my_data(void){
    cout << "Enter salary and bank balance: ";
    cin >> salary >> bank_balance;
    
    cout << "Enter address: ";
    cin.ignore(); 
    getline(cin, adress); 
    
    cout << "Enter name, age, DOB: ";
    cout<<"Enter your name";
    cin.ignore();
    getline(cin , name);
    cin >> age >> DOB;
}

void intro_to_my_self :: calculating_my_data(void){
    cout << "\n--- User Details ---" << endl;
    cout << "Name          : " << name << endl;
    cout << "Age           : " << age << endl;
    cout << "DOB           : " << DOB << endl;
    cout << "Salary        : " << salary << endl;
    cout << "Bank Balance  : " << bank_balance << endl;
    cout << "Address       : " << adress << endl;
}

int main() {
    
    calculator c1;
    c1.taking_value();
    c1.calculating_value();

    Product_by_number p1;
    p1.Taking_product();
    p1.calclation_on_product();


    intro_to_my_self i1;
    i1.Taking_my_data();
    i1.calculating_my_data();
    return 0;
}