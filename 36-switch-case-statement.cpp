#include <iostream>
using namespace std;

enum OrderStatus { PENDING, PROCESSING, SHIPPED, DELIVERED, CANCELLED };

int main() {

    int marks;
    cout << "Enter your marks (0-100): ";
    cin >> marks;

    switch (marks / 10) {
        case 10:
        case 9:
            cout << "Grade: A+ (Outstanding)";
            break;
        case 8:
            cout << "Grade: A (Excellent)";
            break;
        case 7:
            cout << "Grade: B (Good)";
            break;
        case 6:
            cout << "Grade: C (Average)";
            break;
        case 5:
            cout << "Grade: D (Pass)";
            break;
        default:
            if (marks >= 0 && marks < 50)
                cout << "Grade: F (Fail)";
            else
                cout << "Invalid marks entered!";
    }




    int inputVal;
    OrderStatus currentStatus;
    
    cout << "Enter your status:\n";
    cout << "0 - PENDING\n";
    cout << "1 - PROCESSING\n";
    cout << "2 - SHIPPED\n";
    cout << "3 - DELIVERED\n";
    cout << "4 - CANCELLED\n";
    cout << "Choice: ";
    
    cin >> inputVal;

    currentStatus = static_cast<OrderStatus>(inputVal);
try{
    switch (currentStatus) {
        case PENDING:
            cout << "Your order is recieved, verification Is pending...\n";
            break;
        case PROCESSING:
            cout << "your order is packing.\n";
            break;
        case SHIPPED:
            cout << "Good news! your order is dispatched.\n";
            break;
        case DELIVERED:
            cout << "Order is delivered successfuly.. Thank you!\n";
            break;
        case CANCELLED:
            cout << "This order has been cancelled...\n";
            break;
        default:
        cout << "Unknown order status.\n";
    }
}
catch(const char* msg){
    cout<<"Error is"<<msg;
}

    
    return 0;
}