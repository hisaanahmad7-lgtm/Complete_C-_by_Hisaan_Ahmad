#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class student {

    private:
    // int salary;
    string ph_no;
    string adress;

    public:
    string name;
    int age;
    int DOB;
    
    void setData( string ph, string adr) {
        // salary = sal;
        ph_no = ph;
        adress = adr;
        cout <<" Phone: " << ph_no << ", Address: " << adress << endl;
    }
    
    void getdata(int ag, int d, string n) {
        if(ag>0 && ag<=100){
            age = ag;
        }
        else{
            cout<<"incorrect age";
        }
        // age = ag;
        DOB = d;
        name = n;
        cout << "Age: " << age << ", DOB: " << DOB << ", Name: " << name << endl;
    }

};

int main() {
    
    student s;
    s.setData("03452020147", "Housing colony no 2");
    s.getdata(18, 2008, "Hisaan Ahmad");

    return 0;
}