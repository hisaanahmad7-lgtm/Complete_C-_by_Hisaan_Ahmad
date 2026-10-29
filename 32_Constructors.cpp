#include <iostream>
#include <string>

using namespace std;


class Demo{
    public:
    Demo(){
        cout<<"Good how are you..."<<endl;
    }
};
class Car {
private:
    string brand;
    string model;
    int year;

public:
    Car(string b, string m, int y) {
        brand = b;
        model = m;
        year = y;
    }

    void displayDetails() {
        cout << year << " " << brand << " " << model << endl;
    }
};

int main() {
    Demo d;
    Car myCar("Toyota\n", "Corolla\n", 2023);

    myCar.displayDetails(); 

    return 0;
}