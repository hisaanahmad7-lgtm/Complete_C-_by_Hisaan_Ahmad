#include <iostream>
#include <string>

using namespace std;

class Car {
private:
    string brand;
    string model;
    int year;

public:
    // Constructor to initialize object values
    Car(string b, string m, int y) {
        brand = b;
        model = m;
        year = y;
    }

    // Member function to display details
    void displayDetails() {
        cout << year << " " << brand << " " << model << endl;
    }
};

int main() {
    // Creating an object and passing values to the constructor
    Car myCar("Toyota", "Corolla", 2023);

    // Calling the member function
    myCar.displayDetails(); // Output: 2023 Toyota Corolla

    return 0;
}