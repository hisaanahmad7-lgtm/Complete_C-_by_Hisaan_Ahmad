#include <iostream>
#include <iomanip>

using namespace std;

class Employee{
    private:
    int user_input[10];

    public:
    void user_input_data(void){
        cout << "Enter 10 Employee numbers:\n";
        for (int i = 0; i < 10; i++) {
            cin >> user_input[i];
        }
    }

    void user_entered_id(void){
        for (int i = 0; i < 10; i++) {
            cout << "The employee number is " << user_input[i] << " And ID assigned to user is " << i + 1 << endl;
        }
    }
};

int main() {
    Employee e1;
    e1.user_input_data();
    e1.user_entered_id();
    return 0;
}