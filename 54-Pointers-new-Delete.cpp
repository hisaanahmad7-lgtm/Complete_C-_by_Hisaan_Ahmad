#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int x1 = 44;
    int *y1 = &x1;
    int **z1 = &y1;

    cout<<"The adress of x1 is "<<&x1<<endl;
    cout<<"The value of x1 is "<<x1<<endl;

    cout<<"The adress of y1 is "<<y1<<endl;
    cout<<"The value of y1 is "<<&y1<<endl;
    cout<<"The value of x1 stored in y1 is:  "<<*(y1)<<endl;
    
    cout<<"The adress of z1 is: "<<&z1<<endl;
    cout<<"The value of z1 is "<<**(z1)<<endl;


    int *ptr = new int(20);
    cout<<"The value of ptr is: "<<ptr<<endl;
    cout<<"The value of ptr is: "<<*(ptr)<<endl;

    delete[] ptr;
    ptr = nullptr;
    cout<<"The value of ptr is: "<<ptr<<endl;


    int *myPtr = new int[3];
    myPtr[0] = 88;
    myPtr[1] = 99;
    myPtr[2] = 18800;

    cout<<myPtr[0]<<endl<<myPtr[1]<<endl<<myPtr[2]<<endl;
    return 0;
}