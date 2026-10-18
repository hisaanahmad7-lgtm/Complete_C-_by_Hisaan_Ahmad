#include <iostream>
#include <iomanip>

using namespace std;

int sum(int a , int b){
    return a+b;
};

int sub(int a1 , int b1){
    return a1-b1;
};

int mul(int x, int y){
    return x*y;
};

int divs(int x1 , int y1){
    return x1/y1;
};

int factorial(int n){
    if (n == 1 || n ==0){
        return 1;
    }
    else{
        return n*(factorial(n - 1));
    }
};

int fabonachii_series(int q1){
    if(q1 == 0){
        return 0;
    }
    else if (q1 == 1){
        return 1;
    }
    else{
        return (fabonachii_series(q1 - 1) + fabonachii_series(q1-2));
    }
}

string loop() {
    for(int i = 0; i <= 5; i++) {
        cout << "Hisaan Ahmad" << endl;
    }
    return "Done";
}
int main() {
    int a = 12; int b =12; int a1 = 44 ; int b1 = 22 ; int x = 22 ; int y = 22 ; int x1 = 44 ; int y1 = 22;
    cout<<"The sum of 2 number is :"<<sum(a , b)<<endl;
    cout<<"The sub of 2 number is :"<<sub(a1 , b1)<<endl;
    cout<<"The multiplication of 2 number is :"<<mul(x , y)<<endl;
    cout<<"The Division of 2 number is :"<<divs(x1 , y1)<<endl;

    cout<<"The factorial of number is "<<factorial(5)<<endl;

    cout<<"The fabonachii series of given number is :"<<fabonachii_series(6)<<endl;

    cout<<loop()<<endl;
    return 0;
}