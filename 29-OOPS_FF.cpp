#include <iostream>
#include <iomanip>

using namespace std;

class Y;
class X{
    private:
    int num1;

    public:

    void get_data(int a){
        num1 = a;
    }
    friend void sum_num(X , Y );
};

class Y{
    private:
    int num2;

    public:

    void Set_data(int a1){
        num2 = a1;
    }
    friend void sum_num(X , Y );
};

void sum_num(X o1 , Y o2){
    cout<<"The sum of num1 and num2 is : "<<o1.num1 + o2.num2<<endl;
}
int main() {
    
    X x1;
    x1.get_data(5);

    Y y1;
    y1.Set_data(12);

    sum_num(x1 , y1);
    return 0;
}