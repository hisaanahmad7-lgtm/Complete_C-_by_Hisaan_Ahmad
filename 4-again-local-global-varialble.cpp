#include <iostream>
using namespace std;

int globalVar = 100;
int bool_value = true;
// cout<<"The value of loacal var is "<<globalVar;
void showValues() {
    globalVar = 34458;
    cout<<"global variable inside function: "<< globalVar<<"And the bool value is"<<bool_value;
    // cout<<"local variable inside func: "<< localVar;   This will show an error
}


int main() {
    int localVar = 50;

    cout<<"local variable in main func= (localVar):"<<localVar;
    cout<<"global var in main fnc (globalVar): "<<globalVar;

    showValues();

    return 0;
}