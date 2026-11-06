#include <iostream> 

using namespace std; 

int main() { 

    // Problem  no 1 
    int num, originalNum, remainder, sum = 0;

    cout << "Enter a three-digit number: "; 
    cin >> num; 

    originalNum = num; // Store the original number to compare later

    while (num != 0) { // Loop to process each digit until the number becomes 0
        remainder = num % 10; // Extract the last digit of the number
        sum += remainder * remainder * remainder; // Cube the digit and add it to the sum
        num /= 10; // Remove the last digit from the number
    }

    if (sum == originalNum) { 
        cout << originalNum << " is an Armstrong number.";
    } else {
        cout << originalNum << " is not an Armstrong number."; 
    }



    // Problem no 2 

    int user_Input;
    int sums = 0;
    int osum = 0;
    cout<<"Enter the number: "<<endl;
    cin>>user_Input;    

    for (int i = 1; i <= user_Input; i++){
        if(i%2==0){
            sums = sums + i;
            cout<<"The number is even and the sum is: "<<sums<<endl;
        }
        else if (i%2!=0){
        osum = osum + i;
        cout<<"The number is odd and the sum is: "<<osum<<endl;
    }
    else{
        cerr<<"Invalid input. Please enter a positive integer."<<endl;
    }
    // cout<<"The number is: "<<user_Input<<endl;
    }

    cout << "\nTotal Sum of Even numbers: " << sums << endl;
    cout << "Total Sum of Odd numbers: " << osum << endl;
    return 0; 
}
