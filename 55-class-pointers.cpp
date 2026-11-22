#include <iostream>
#include <iomanip>
using namespace std;

class Student {
private:
    int marks;

public:
    Student(int m = 0) {
        marks = m;
    }

    friend void compareMarks(Student s1, Student s2);
};

void compareMarks(Student s1, Student s2) {
    if (s1.marks > s2.marks) {
        cout << "Student 1 Gained more marks!" << endl;
    } 
    else if (s2.marks > s1.marks) {
        cout << "Student 2 Gained more marks!" << endl;
    } 
    else {
        cout << "Both std have same marks!" << endl;
    }
}

int main() {

    // Student *ptr = new ptr;
    // *ptcompareMarks(10  ,  20)
    // ptr->.compareMArks(12 , 55); 
    Student *ptr1 = new Student(85);
    Student *ptr2 = new Student(92);

    compareMarks(*ptr1, *ptr2);

    delete ptr1;
    delete ptr2;

    return 0;
}