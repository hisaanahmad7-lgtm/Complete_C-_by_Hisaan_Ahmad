#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Problem no 1

    int unit;
    cout<<"Enter the units you have consumed: "<<endl;
    cin>>unit;


    if(unit<0){
        cout<<"Incorrect value: "<<endl;
        exit(0);
    }

    else if(unit<=100){
        cout<<"Your bill is : "<<unit*10<<endl;
    }

    else if(unit>100 && unit <=200){
        cout<<"Your bill is : "<<unit*15<<endl;
    }

    else if(unit>200 && unit <=300){
        cout<<"Your bill is : "<<unit*20<<endl;
    }

    else if(unit>300){
        cout<<"Your bill is : "<<unit*25<<endl;
    }
    else{
        cout<<"Incorrect value!"<<endl;
        exit(0);
    }


    // Problem no 2 

    float inp_balance;
    float fetch_balance;
    cout<<"Enter the amount of balance: "<<endl;
    cin>>inp_balance;
    cout<<"Your balance is :"<<inp_balance<<endl;
    cout<<"Enter the amount of balance you wanna withDraw:"<<endl;
    cin>>fetch_balance;

    if(inp_balance<=0){
        cout<<"Sorry too low balance!"<<endl;
    }
    else if (inp_balance>0){
        inp_balance = inp_balance - fetch_balance;
        cout<<"Your remaning balance is: "<<inp_balance<<endl;
    }
    else{
        cout<<"Invalid input"<<endl;
        exit(0);
    }


    // Problem no 3 

    float shp_amount;
    cout<<"ENter the shopping amount :"<<endl;
    cin>>shp_amount;
    int disc = 0;

    if(shp_amount>=10000){
        disc = ((shp_amount * 20) / 100);
        cout<<"You take "<<disc<<" Balance"<<endl;
        disc = shp_amount - disc;
        cout<<" The amount you have pay is  :"<<disc<<endl;
    }

    else if(shp_amount>=5000 && shp_amount<=9999 ){
        disc = ((shp_amount * 15) / 100);
        cout<<"You take "<<disc<<" Balance"<<endl;
        disc = shp_amount - disc;
        cout<<" The amount you have pay is  :"<<disc<<endl;
    }

    else if(shp_amount>=2000 && shp_amount<=4999 ){
        disc = ((shp_amount * 10) / 100);
        cout<<"You take "<<disc<<" Balance"<<endl;
        disc = shp_amount - disc;
        cout<<" The amount you have pay is  :"<<disc<<endl;
    }
    else if(shp_amount<2000){
        cout<<"You amount is :"<<shp_amount<<endl;
    }
    else{
        cout<<"Invalid input"<<endl;
        exit(0);
    }

    // Problem no 4 

    int user_balance;
    cout<<"Enter the balace you current have: "<<endl;
    cin>>user_balance;

    if(user_balance>=500){
        cout<<"Recommended package____20GB"<<endl;
    }

    else if(user_balance>=300 && user_balance<=499 ){
        cout<<"Recommended package____15GB"<<endl;
    }

    if(user_balance>=200 && user_balance<=299 ){
        cout<<"Recommended package____10GB"<<endl;
    }

    else if(user_balance<200){
        cout<<"NO package avalible!"<<endl;
    }

    else{
        cout<<"Invalid input!"<<endl;
        exit(0);
    }
    return 0;
}