#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *p = &a;

    // cout << a << endl;
    cout << &a << endl;
    cout << p << endl;
    cout << *p << endl;
    *p = 20;
    cout << a << endl;



    int x = 50;
    int *p1 = &x;
    int **p2 = &p1;
    int ***p3 = &p2;

    cout << x << endl;
    cout << &p1 << endl;
    cout << *p1 << endl;
    cout << **p2 << endl;
    cout << p2 << endl;
    **p2 = 100;
    cout << x << endl;
    cout<<p3<<endl;
    cout<<&p3<<endl;
    cout<<*p3<<endl;
    return 0;
}