#include <iostream>
#include <iomanip>

using namespace std;

class base{

    protected:
    string name;
    public:

    int marks;
    int age;
    int salary;
    void getData(string n , int m , int a , int s);
    void SetData(void);
};

void base:: getData(string n , int m , int a , int s){
    name = n;
    marks = m;
    age = a;
    salary = s;
}


void base:: SetData(void){
    cout<<name<<endl<<marks<<endl<<age<<endl<<salary<<endl;
}

class derived : public base{
    public:
    void gainData(string n, int m, int a, int s);
    void strainData(void);
};

void derived::gainData(string n, int m, int a, int s){
    getData(n, m, a, s);
}

void derived::strainData(void){
    SetData();
}

int main() {
    derived obj;
    obj.gainData("Hisaan", 90, 21, 60000);
    obj.strainData();
    return 0;
}