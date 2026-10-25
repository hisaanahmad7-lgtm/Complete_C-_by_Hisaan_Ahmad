#include <iostream>
using namespace std;

class Student {
private:
    int marks; 

public:
    void Students(int m) {
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

    Student s1;
    Student s2;
    s1.Students(23);
    s2.Students(12);
    // Student student1(85);
    // Student student2(92);

    // compareMarks(student1, student2);

    compareMarks(s1 , s2);

    return 0;
}


// #include <iostream>
// #include <iomanip>

// using namespace std;

// class student_marks{
//     private:
//     int mark1;
//     int mark2;

//     string std_name;
//     string std2_name;
//     public:

//     void take_marks(void){

//         cout<<"Enter the name of student 1 and student 2";
//         getline(cin , std_name);
//         cin.ignore();
//         getline(cin , std2_name);
//         cout<<"Enter marks of student 1 && student 2:";
//         cin>>mark1>>mark2;

//     }

//     void Compare_marks(void){
//         if(mark1>mark2){
//             cout<<std_name<< " gained more marks than "<<std2_name;
//         }
//         else if(mark2>mark1){
//             cout<<std2_name<< " gained more marks than "<<std_name;
//         }
//         else if (mark1 = mark2){
//             cout<<"Both student gained same marks!";
//         }
//         else{
//             cout<<"Invalid Input";
//             exit(0);
//         }
//     }
// };

// int main() {
    
//     student_marks s1;
//     s1.take_marks();
//     s1.Compare_marks();
//     return 0;
// }