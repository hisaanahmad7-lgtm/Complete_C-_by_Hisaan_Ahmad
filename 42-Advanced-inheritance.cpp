#include <iostream>
#include <iomanip>

using namespace std;

class Suzuki {
public:
    int model;
    int engineCapacity;

    Suzuki(int m, int e) {
        model = m;
        engineCapacity = e;
    }


    void getSuzukiDetails(){
        cout<<"Enter the model of Suzuki: "<<endl;
        cin>>model;
        if(model < 1980 || model > 2027){
            cout<<"Invalid model for Suzuki. Please enter a model year greater than or equal to 1980."<<endl;
            exit(0);
        }
        cout<<"Enter the engine capacity of Suzuki: "<<endl;
        cin>>engineCapacity;
    }


    void display_Suzuki_Details() {
        cout << "Suzuki Model: " << model << endl;
        cout << "Suzuki Engine Capacity: " << engineCapacity << endl;
    }

    ~Suzuki() {
        cout << "Destructor called for Suzuki with model: " << model << " and engine capacity: " << engineCapacity << endl;
    }
};

class Corrola : public Suzuki {
public:
    Corrola(int m, int e) : Suzuki(m, e) {}


    void getCorrolaDetails(){
        cout<<"ENter the model of Corrola: "<<endl;
        cin>>model;
        if(model < 1980 || model > 2027){
            cout<<"Invalid model for Corrola. Please enter a model year greater than or equal to 1980."<<endl;
            exit(0);
        }
        cout<<"Enter the engine capacity of Corrola: "<<endl;
        cin>>engineCapacity;
    }


    void display_Corrola_Details() {
        cout << "Corrola Model: " << model << endl;
        cout << "Corrola Engine Capacity: " << engineCapacity << endl;
    }

    ~Corrola() {
        cout << "Destructor called for Corrola with model: " << model << " and engine capacity: " << engineCapacity << endl;
    }
};

class BMW : public Suzuki {
public:
    BMW(int m, int e) : Suzuki(m, e) {}


    void getSuzukiDetaila(){
        cout<<"ENter the model of Suzuki: "<<endl;
        cin>>model;
        if(model < 1980 || model > 2027){
            cout<<"Invalid model for BMW. Please enter a model year greater than or equal to 2000."<<endl;
            exit(0);
        }
        cout<<"Enter the engine capacity of Suzuki: "<<endl;
        cin>>engineCapacity;
    }


    void display_BMW_Details() {
        cout << "BMW Model: " << model << endl;
        cout << "BMW Engine Capacity: " << engineCapacity << endl;
    }

    ~BMW() {
        cout << "Destructor called for BMW with model: " << model << " and engine capacity: " << engineCapacity << endl;
    }
};

int main() {
    Suzuki s1(2020, 1500);
    s1.getSuzukiDetails();
    s1.display_Suzuki_Details();

    Corrola c1(2021, 2000);
    c1.getCorrolaDetails();
    c1.display_Corrola_Details();

    BMW bmwCar(2022, 3000);
    bmwCar.getSuzukiDetaila();
    bmwCar.display_BMW_Details();

    return 0;
}