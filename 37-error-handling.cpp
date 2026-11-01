#include <iostream>
using namespace std;

// This code will not execute dont try to run this this code is only written for learning purpose.....
void checkAge(int age) {
    if (age < 18) {
        throw "Access Denied!";
    }
}


int main() {
    int age = 15;
    
    try {
        if (age < 18) {
            // cerr <<"Too little age!";
            throw "Age is less than 18!";
        }
    } 
    catch (const char* msg) {
        cout << "Error caught: " << msg << endl;
    }

cout<<"yes";
    try {
        checkAge(15);
    } 
    catch (const char* msg) {
        cout << "Catch ho gaya: " << msg << endl;
    }



    int choice;
    cout << "Database se file access karne ke liye 1 dabayein: ";
    cin >> choice;

    try {
        if (choice != 1) {
            throw "Error 404: Jo resource aap dhoond rahe hain wo nahi mila!";
            throw 404;
            cerr <<"incorrect value!"; 
        }
        
        cout << "File successfully khul gayi!" << endl;
    } 
    catch (const char* errMessage) {
        cout << "Exception pakri gayi: " << errMessage << endl;
    }
    return 0;
}