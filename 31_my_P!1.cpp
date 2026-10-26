#include <iostream>
#include <iomanip>

using namespace std;

class bank_mgmt_sys{
    private:
    int current_data;
    int with_draw;

    public:
    void get_data();
    void set_data(void);
    void emmit_amount();
};

void bank_mgmt_sys :: get_data(){
    cout << "Enter the amount in your bank account : ";
    cin >> current_data;
}

void bank_mgmt_sys :: set_data(){
    cout << "Your current amount is : " << current_data << endl;
}

void bank_mgmt_sys :: emmit_amount(){
    cout << "Enter the amount you want to withdraw : ";
    cin >> with_draw;
    
    if(current_data >= with_draw){
        current_data = current_data - with_draw;
        cout << "Remaining amount is : " << current_data << endl;
    }
    else{
        cout << "Too low amount you can not access this amount!" << endl;
    }
}

int main() {
    bank_mgmt_sys b1;
    b1.get_data();
    b1.set_data();
    b1.emmit_amount();
    
    return 0;
}