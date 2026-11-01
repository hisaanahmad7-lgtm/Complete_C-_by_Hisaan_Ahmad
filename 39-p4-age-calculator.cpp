#include <iostream>
#include <iomanip>

using namespace std;

    class ageCalculator{
        string name;
        int cigerates;
        int alchohal;
        int parent_age;
        string wakeup_time;
        string sleep_time;
        int total_age = 100;

        public:
        void getData(void);
        void setData(void);
        void result(void);
};

void ageCalculator :: getData(void){
        cout<<"Enter your name: "<<endl;
        getline(cin,name);
        cout<<"Enter the number of cigerates you smoke per day(1____100): "<<endl;
        cin>>cigerates;
        cout<<"Enter the number of alchohal you consume per week(1____100): "<<endl;
        cin>>alchohal;
        cout<<"Enter your parents age: "<<endl;
        cin>>parent_age;
        cout<<"Enter your wakeup time in 24 hour format(3____12)am: "<<endl;
        cin.ignore();
        getline(cin,wakeup_time);


        if(wakeup_time == "3am" || wakeup_time == "8am" || wakeup_time == "4am" || wakeup_time == "5am" || wakeup_time == "6am" || wakeup_time == "7am"){
            total_age = (total_age*8)/100;
            cout<<"You have lost "<<total_age<<" years of your life due to late wakeup time!"<<endl;
        }
        else if(wakeup_time == "9am" || wakeup_time == "10am" || wakeup_time == "11am" || wakeup_time == "12am"){
            total_age = (total_age*12)/100;
            cout<<"You have lost "<<total_age<<" years of your life due to late wakeup time!"<<endl;
        }
        else{
            cout<<"Invalid input!"<<endl;
            exit(0);
        }
        cout<<"Enter your sleep time in 24 hour format(6____12)pm: "<<endl;
        getline(cin,sleep_time);

        if(sleep_time == "6pm" || sleep_time == "7pm" || sleep_time == "8pm" || sleep_time == "9pm" || sleep_time == "10pm"){
            total_age = (total_age*8)/100;
            cout<<"You have lost "<<total_age<<" years of your life due to late wakeup time!"<<endl;
        }
        else if(sleep_time == "11pm" || sleep_time == "12pm" || sleep_time == "1am" || sleep_time == "2am"){
            total_age = (total_age*12)/100;
            cout<<"You have lost "<<total_age<<" years of your life due to late wakeup time!"<<endl;
        }
        else{
            cout<<"Invalid input!"<<endl;
            exit(0);
        }
    }

void ageCalculator :: setData(void){
        if(cigerates>0 && cigerates<=100 && alchohal>0 && alchohal<=100 && parent_age>0 && parent_age<=100){
            cout<<"Your name is: "<<name<<endl;
            cout<<"You smoke "<<cigerates<<" cigerates per day."<<endl;
            cout<<"You consume "<<alchohal<<" alchohal per week."<<endl;
            cout<<"Your parents age is: "<<parent_age<<endl;
            cout<<"You wakeup at: "<<wakeup_time<<" O'clock."<<endl;
            cout<<"You sleep at: "<<sleep_time<<" O'clock."<<endl;
        }
        else{
            cout<<"Invalid input!"<<endl;
            exit(0);
        }
}

void ageCalculator :: result(void){
        if(cigerates>0 && cigerates<=50 || alchohal>0 && alchohal<=50 || parent_age>0 && parent_age<=50){
            total_age = total_age - 30;
            cout<<"Your total age is: "<<total_age<<endl;
        }

        else if(cigerates>50 && cigerates<=100 || alchohal>50 && alchohal<=100 || parent_age>50 && parent_age<=100){
            total_age = total_age - 50;
            cout<<"Your total age is: "<<total_age<<endl;
        }
        else{
            cout<<"Invalid input!"<<endl;
            exit(0);
        }
    }
int main(){
    try{
    ageCalculator c1;
    c1.getData();
    c1.setData();
    c1.result();
    }
    catch(const char* msgs){
        cout<<"Error caught: "<<msgs<<endl;
        exit(0);
    }
    return 0;
}