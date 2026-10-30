#include <iostream>
#include <iomanip>

using namespace std;


class soEasy{
    int num1;
    int num2;
    int num3;
    public:
    soEasy(int x1 , int x2 , int x3 = 8){
        num1 = x1;
        num2 = x2;
        num3 = x3;
    }

    void PrintValue(void);
};

void soEasy :: PrintValue(void){
    cout<<" The value of num is "<< num1 << " And Value of num2 is: "<<num2<<" And the value of num3 is "<<num3<<endl;
}


class Complex {
    int a;
    int b;

public:
    Complex(int x, int y) {
        a = x;
        b = y;
    }

    Complex(int x) {
        a = x;
        b = 0;
    }

    Complex(){
        cout<<"I am a good constrcutor"<<endl; 

    }

    void showOutput() {
        cout << a << " + " << b << " i "<<endl;
    }
};

int main() {
    Complex c1(10, 11);
    c1.showOutput();

    Complex c2(10);
    c2.showOutput();

    Complex c3(0 , 12);
    c3.showOutput();

    // Complex c4();
    // c4.showOutput();
    Complex();


    soEasy s1(10 , 45);
    s1.PrintValue();
    return 0;
}
