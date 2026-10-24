#include <iostream>
#include <iomanip>

using namespace std;


float cel_to_faran(float c){
    return (1.8*(c + 32));
}
int main() {
    

    // it is not possible to convert int into float!

    // but it is possible to convert float into integer  as given below! 
    float q1 = 55.5;
    float q2 = 11.11;
    // cout<<q1<<q2<<endl; 
    cout<<"The sum of "<<q1<<" And "<<q2 << " is : "<< q1 + q2<<endl;
    // float(q1);
    // float(q2);
    int w1 = int(q1);
    int w2 = int(q2);
    // cout<<float(q1)<<float(q2);
    // cout<<w1<<w2;

    cout<<"The sum of "<<w1<<" And "<<w2 << " is : "<< w1 + w2<<endl;   

    cout<<"Cel to faran is : "<<int(cel_to_faran(50))<<endl;

    #include <iostream>
using namespace std;

    double d = 10.99;
    void* ptr = &d;
    
    // Yahan kya hoga?
    double* dptr = static_cast<double*>(ptr);
    cout << *dptr;

    
    return 0;
}
