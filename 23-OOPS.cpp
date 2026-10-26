#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class student {
private:
    string ph_no;
    string adress;

public:
    string name;
    int age;
    int DOOB;

    void setData(string ph, string adr) {
        ph_no = ph;
        adress = adr;
        cout << " Phone: " << ph_no << ", Address: " << adress << endl;
    }

    void getdata(int ag, int d, string n) {
        if (ag > 0 && ag <= 100) {
            age = ag;
        } else {
            cout << "incorrect age" << endl;
        }
        DOOB = d;
        name = n;
        cout << "Age: " << age << ", DOB: " << DOOB << ", Name: " << name << endl;
    }

    friend void chng_in_DOB(student &emp, int d);
};

void chng_in_DOB(student &emp, int d) {
    if (d > 2026 || d < 1900) {
        cout << "Invalid DOB!" << endl;
    } else {
        emp.DOOB = d;
        cout << "DOB updated successfully: " << emp.DOOB << endl;
    }
}



class employee {
private:
    string ph_no;
    string adress;

public:
    string name;
    int age;
    int DOB;

    void take_data(string pho, string adre);
    void put_data(int agr, int db, string n);
};

void employee::take_data(string pho, string adre) {
    ph_no = pho;
    adress = adre;
}

void employee::put_data(int agr, int db, string n) {
    if (agr > 0 && agr <= 100) {
        age = agr;
    } else {
        cout << "incorrect age" << endl;
    }
    DOB = db;
    name = n;
    cout << "Age: " << age << ", DOB: " << DOB << ", Name: " << name << endl;
}

int main() {
    student s;
    s.setData("03452020147", "Housing colony no 2");
    s.getdata(18, 2008, "Hisaan Ahmad");
    chng_in_DOB(s, 2007);

    employee emp;
    emp.take_data("03001234567", "Wah Cantt");
    emp.put_data(20, 2006, "Hisaan");

    return 0;
}