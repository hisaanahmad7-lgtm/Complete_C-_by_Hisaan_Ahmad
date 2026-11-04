#include <iostream>
#include <iomanip>

using namespace std;


// class Animal{
//     public:
//     void simpleSound(){
//         cout << "Animal makes a sound" << endl;
//     }
// };

// class Dog : public Animal{
//     public:
//     void makeSound(){
//         cout << "Dog barks" << endl;
//     }
// };

class seniorStudent{
    int age;
    int study_Years;
    public:
    seniorStudent(int a, int s){
        age = a;
        study_Years = s;
    }

    ~seniorStudent(){
            cout << "Destructor called for seniorStudent with age: " << age << " and study years: " << study_Years << endl;
        }
};

class junorStudent : public seniorStudent{
    int ph_no;
    public:
    junorStudent(int a, int s ,int y) : seniorStudent(a, s){
        ph_no = y;
    }


    ~junorStudent(){
                cout << "Destructor called for junorStudent with age: " << ph_no << " and study years: " << ph_no << endl;
            }
    };


int main() {

    try{
    // Dog myDog;
    // myDog.makeSound();
    // myDog.simpleSound();

    seniorStudent student1(20, 4);

    // cout<<"Constructor called for seniorStudent"<< endl;
    junorStudent student2(18, 2, 1234567890);

    // cout<<"Constructor called for junorStudent"<< endl;

}
catch(const char* msg){
    cout<<"Error caught: "<<msg<<endl;
}
    return 0;
}