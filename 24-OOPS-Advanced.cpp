#include <iostream>
#include <iomanip>
#include<string>

using namespace std;
class is_binary{
    private:

    string num;
    public:

    void yes_binary(void);
    void check_binary(void);
    void replace_binary_number(void);

};

void is_binary :: yes_binary(void){
    cout<<"Enter a binary number"<<endl;
    cin>>num;
}

void is_binary :: check_binary(void){
    for (int  i = 0; i < num.length() ; i++)
    {
        if(num.at(i)!='0' && num.at(i)!='1'){
            cout<<"Incorrect binary format"<<endl;
            exit(0);
        }
        else{
            cout<<"100% correct binary format"<<endl;
            exit(0);
        }
    }
    
}

void is_binary :: replace_binary_number(void){
    for (int  i = 0; i < num.length() ; i++)
    {
        if(num.at(i)=='0' ){
            num.at(i) = '1';
        }
        else if(num.at(i)=='1' ){
            num.at(i) = '0';
        
        }
        else{
            cout<<"Your total format is incorrect"<<endl;
            exit(0);
        }
    }
    
}
int main() {
    
is_binary q1;
q1.yes_binary();
q1.replace_binary_number();
q1.check_binary();

    return 0;
}