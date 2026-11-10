#include <iostream>
#include <iomanip>

using namespace std;


// Easy exmple no 1 



class base1{
    public:
    void txt1(void){
        cout<<"Hy i am base 1"<<endl;
    }
    
    ~base1(){
        cout<<"Destructor for base 1 is calling.."<<endl ; 
    }
};

class base2{
    public:
    void txt2(void){
        // txt1(); it will throw error bacause base 2 is not inherated with base 1
        cout<<"Hy i am base 2"<<endl;
    }
    ~base2(){
        cout<<"Destructor for base 2 is calling.."<<endl ; 
    }
};

class derived : base1 , base2{
    public:
    void txt3(void){
        txt1();
        txt2();
        cout<<"I am a derived class from base 1 and base 2"<<endl;
    }

    ~derived(){
        cout<<"Destructor is calling for derived class.."<<endl;
    }
};


class employee{
    protected:
    string adress;
    int salary;

    public:
    string name;
    int age;
    int dob;

    void getdata(string ad , int s , string nm , int ag , int db){
        adress = ad;
        salary = s;
        name = nm;
        age = ag;
        dob = db;
    }

    void setdata(void){
        cout<<"The name of employee is "<<name<<endl;
        cout<<"The age of employee is "<<age<<endl;
        cout<<"The DOB of employee is "<<dob<<endl;
        cout<<"The adress of employee is "<<adress<<endl;
        cout<<"The salary of employee is "<<salary<<endl;
    }
};

class manager{
    public:
    int salary;
    
    void getsalary(int s1){
        salary = s1;
    }
    void setsalary(void){
        cout<<"The salary of Manager is "<<salary<<endl;
    }
};

class boss: employee , manager{
    public:
    int salary;
    void boss_get_salary(int ss1){
        salary = ss1;
    }

    void boss_set_salary(void){
        getdata("Hisaan" , 2000 , "Hisaan" , 20 , 2008);
        setdata();
        cout<<"The salary of Boss is "<<salary<<endl;

    }
};




int main() {

try{
    boss b1;
    b1.boss_get_salary(1200);
    b1.boss_set_salary();

    cout<<endl;
    derived d1;
    d1.txt3();
    
    cout<<endl;
    base1 bs1;
    bs1.txt1();

    cout<<endl;
    base2 b2;
    b2.txt2();
}

catch(const char*err){
        cout<<"I am an error occoured when code dose not execute..."<<err<<endl;
    }
    return 0;
}