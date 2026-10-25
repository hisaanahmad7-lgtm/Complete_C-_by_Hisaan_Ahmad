#include <iostream>
#include <iomanip>

using namespace std;

class c2;

class c1{
    int c1Value;
    public:

    void inData(int a){
        c1Value = a;
    }

    void DispVal(void){
        cout<<c1Value<<endl;
    }

    friend void ExcValue(c1 & x , c2 & y);
};

class c2{
    int c2Value;
    public:

    void inData(int a1){
        c2Value = a1;
    }

    void DispVal(void){
        cout<<c2Value<<endl;
    }

    friend void ExcValue(c1 & x , c2 & y);
};

void ExcValue(c1 & x , c2 & y){
    int temp = x.c1Value;
    x.c1Value = y.c2Value;
    y.c2Value = temp;
}

int main() {
    c1 obj1;
    c2 obj2;
    
    obj1.inData(10);
    obj2.inData(20);
    
    ExcValue(obj1, obj2);
    
    obj1.DispVal();
    obj2.DispVal();
    
    return 0;
}