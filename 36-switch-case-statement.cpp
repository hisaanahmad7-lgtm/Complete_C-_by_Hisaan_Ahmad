#include <iostream>
using namespace std;

enum OrderStatus { PENDING, PROCESSING, SHIPPED, DELIVERED, CANCELLED };

int main() {
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

    switch (currentStatus) {
        case PENDING:
            cout << "Aapka order mil gaya hai, verification pending hai.\n";
            break;
        case PROCESSING:
            cout << "Aapka order pack ho raha hai.\n";
            break;
        case SHIPPED:
            cout << "Good news! Aapka order dispatch ho chuka hai aur raste mein hai.\n";
            break;
        case DELIVERED:
            cout << "Order successfully deliver ho gaya hai. Thank you!\n";
            break;
        case CANCELLED:
            cout << "Yeh order cancel kar diya gaya hai.\n";
            break;
        default:
            cout << "Unknown order status.\n";
    }

    return 0;
}