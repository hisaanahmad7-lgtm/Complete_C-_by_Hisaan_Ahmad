#include <iostream>
#include <iomanip>

using namespace std;

class mycalculation {
public:
    mycalculation() {
        cout << "Constructor is called!" << endl;
        throw "Error 404: Constructor failed!";
    }
    
    ~mycalculation() {
        cout << "Destructor is called!" << endl;
    }
};

int main() {
    cout << "I am in function!" << endl;

    try {
        mycalculation obj1;
    }
    catch (const char* msg) {
        cout << "Error caught: " << msg << endl;
    }

    cout << "I am out of function!" << endl;
    return 0;
}