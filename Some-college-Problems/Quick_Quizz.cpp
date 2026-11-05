#include <iostream>
using namespace std;

int main() {

    // Problem No 1: Multiplication Table
    int n1;
    cout << "--- Problem No 1: Multiplication Table ---" << endl;
    cout << "Enter a number: ";
    cin >> n1;
    
    for(int i = 1; i <= 12; i++) {
        cout << n1 << " x " << i << " = " << n1 * i << endl;
    }
    cout << endl;

    // ==========================================
    // Problem No 2: Sum of Even and Odd Numbers
    // ==========================================
    int n2;
    int evenSum = 0;
    int oddSum = 0;
    cout << "--- Problem No 2: Sum of Even and Odd Numbers ---" << endl;
    cout << "Enter positive integer N: ";
    cin >> n2;
    
    for(int i = 1; i <= n2; i++) {
        if(i % 2 == 0) {
            evenSum = evenSum + i;
        } else {
            oddSum = oddSum + i;
        }
    }
    cout << "Sum of even numbers: " << evenSum << endl;
    cout << "Sum of odd numbers: " << oddSum << endl;
    cout << endl;

    // ==========================================
    // Problem No 3: Factorial Calculator
    // ==========================================
    int n3;
    long long fact = 1;
    cout << "--- Problem No 3: Factorial Calculator ---" << endl;
    cout << "Enter a positive integer: ";
    cin >> n3;
    
    for(int i = 1; i <= n3; i++) {
        fact = fact * i;
    }
    cout << "Factorial = " << fact << endl;
    cout << endl;

    // ==========================================
    // Problem No 4: Number Reverser
    // ==========================================
    int n4;
    int rev = 0;
    cout << "--- Problem No 4: Number Reverser ---" << endl;
    cout << "Enter a positive integer: ";
    cin >> n4;
    
    for(; n4 > 0; n4 = n4 / 10) {
        int digit = n4 % 10;
        rev = (rev * 10) + digit;
    }
    cout << "Reversed number = " << rev << endl;
    cout << endl;

    // ==========================================
    // Problem No 5: Power Calculator
    // ==========================================
    int base, exp;
    long long result = 1;
    cout << "--- Problem No 5: Power Calculator ---" << endl;
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exp;
    
    for(int i = 1; i <= exp; i++) {
        result = result * base;
    }
    cout << "Result = " << result << endl;
    cout << endl;

    // ==========================================
    // Problem No 6: Prime Number Checker
    // ==========================================
    int n6;
    int count6 = 0;
    cout << "--- Problem No 6: Prime Number Checker ---" << endl;
    cout << "Enter an integer: ";
    cin >> n6;
    
    for(int i = 1; i <= n6; i++) {
        if(n6 % i == 0) {
            count6++;
        }
    }
    if(count6 == 2) {
        cout << "Prime Number" << endl;
    } else {
        cout << "Not a Prime Number" << endl;
    }
    cout << endl;

    // ==========================================
    // Problem No 7: Armstrong Number
    // ==========================================
    int n7;
    int sum7 = 0;
    cout << "--- Problem No 7: Armstrong Number ---" << endl;
    cout << "Enter a 3-digit number: ";
    cin >> n7;
    
    int temp7 = n7;
    for(; temp7 > 0; temp7 = temp7 / 10) {
        int digit = temp7 % 10;
        sum7 = sum7 + (digit * digit * digit);
    }
    if(sum7 == n7) {
        cout << "Armstrong Number" << endl;
    } else {
        cout << "Not an Armstrong Number" << endl;
    }
    cout << endl;

    // ==========================================
    // Problem No 8: Fibonacci Series
    // ==========================================
    int n8;
    long long t1 = 0, t2 = 1, nextTerm;
    cout << "--- Problem No 8: Fibonacci Series ---" << endl;
    cout << "Enter number of terms: ";
    cin >> n8;
    
    cout << "Fibonacci Series: ";
    for(int i = 1; i <= n8; i++) {
        if(i == 1) {
            cout << t1 << " ";
            continue;
        }
        if(i == 2) {
            cout << t2 << " ";
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        cout << nextTerm << " ";
    }
    cout << endl << endl;

    // ==========================================
    // Problem No 9: Number Pattern
    // ==========================================
    int rows;
    cout << "--- Problem No 9: Number Pattern ---" << endl;
    cout << "Enter number of rows: ";
    cin >> rows;
    
    for(int i = 1; i <= rows; i++) {
        for(int j = 1; j <= i; j++) {
            cout << j;
        }
        cout << endl;
    }
    cout << endl;

    // ==========================================
    // Problem No 10: Prime Numbers in a Range
    // ==========================================
    int start, end;
    int totalPrimes = 0;
    cout << "--- Problem No 10: Prime Numbers in a Range ---" << endl;
    cout << "Enter starting number: ";
    cin >> start;
    cout << "Enter ending number: ";
    cin >> end;
    
    cout << "Prime numbers: ";
    for(int i = start; i <= end; i++) {
        if(i <= 1) {
            continue;
        }
        
        int count10 = 0;
        for(int j = 1; j <= i; j++) {
            if(i % j == 0) {
                count10++;
            }
        }
        
        if(count10 == 2) {
            cout << i << " ";
            totalPrimes++;
        }
    }
    cout << endl;
    cout << "Total Prime Numbers Found: " << totalPrimes << endl;

    return 0;
}