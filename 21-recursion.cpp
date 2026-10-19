#include <iostream>
#include <iomanip>

using namespace std;

int factorial(int n){
    if(n==1 or n == 0){
        return 1;
    }
    else{
        return  (n*factorial(n - 1));
    };
}

int fabonchii_series(int q){
    if(q == 1){
        return 1;
    }
    else if(q == 0){
        return 0;
    }
    else{
        return (fabonchii_series(q - 1) + fabonchii_series (q - 2));
    }
}
int main() {
    
    cout<<"Factorial series of given number is "<<factorial(5)<<endl;
    cout<<"Fabonachii series of given number is "<<fabonchii_series(8)<<endl;
    return 0;
}