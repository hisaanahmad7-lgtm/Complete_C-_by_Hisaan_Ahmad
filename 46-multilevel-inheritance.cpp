#include <iostream>
#include <iomanip>
using namespace std;

class student{
    protected:
    int marks;
    int ph_no;

    public:
    string name;
    int age;
    int rolno;

    void getData(int , int , string , int , int);
    void setData(void);

};

void student :: getData(int m , int ph , string n , int a , int r){
    marks = m;
    ph_no = ph;
    name = n;
    age = a;
    rolno = r;
}

void student :: setData(void){
    cout<<"The  name of student is "<<name<<endl;
    cout<<"The  age of student is "<<age<<endl;
    cout<<"The  rolno of student is "<<rolno<<endl;
    cout<<"The  marks of student is "<<marks<<endl;
    cout<<"The  phno of student is "<<ph_no<<endl;

}


class mymarks: public student{
    public:
    int PF;
    int ICT;

    void get_marks(int pf , int ic){
        PF = pf;
        ICT = ic;
    }
    void set_marks(void){
        cout<<"The marks of student in pf is:"<<PF<<endl;
        cout<<"The marks of student in ICT is :"<<ICT<<endl;
    }
};

class get_avg_score: public mymarks{
    public:
    void get_avg(void){
        float avg = (static_cast<float>(PF) + ICT) / 2.0;
        cout << "The average marks of student in subjects are: " << avg << endl;
    }
};

int main() {
    student s1;
    s1.getData(100 , 0322151 , "Hisaan" , 18 , 144);
    s1.setData();
    cout<<endl;


    mymarks m1;
    m1.get_marks(50 , 50);
    m1.set_marks();
    cout<<endl;

    
    get_avg_score g1;
    g1.get_avg();

    return 0;
}