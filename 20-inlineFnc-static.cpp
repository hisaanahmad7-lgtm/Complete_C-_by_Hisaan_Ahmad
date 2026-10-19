#include <iostream>
#include <iomanip>

using namespace std;

inline int sum(int a , int b){
    return a+b;
}
inline int sub(int a1 , int b1){
    return a1-b1;
}

void greet(){
    cout<<"How are you..";
}

static void showMessage() {
    cout << "Hello from local file!" << endl;
}

void countCalls() {
    static int count = 0;
    count++;
    count++;
    cout << count << endl;
}
int main() {
    cout<<"Sum is "<<sum(12 , 33)<<endl;
    cout<<"Subtraction is "<<sub(120 , 33)<<endl;
    greet();
    showMessage();
    countCalls();
    return 0;
}