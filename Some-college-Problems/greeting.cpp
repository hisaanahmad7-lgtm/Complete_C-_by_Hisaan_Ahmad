#include <iostream>
#include <iomanip>

using namespace std;

void g1(){
    cout<<"Good morning how are you";
}
void g2(){
    cout<<"Good After_noon how are you";
}
void g3(){
    cout<<"Good Evening how are you";
}
void g4(){
    cout<<"Good Night how are you";
}

int main() {
    
    string name;
    int time;
    cout<<"Enter your name : ";
    cin>>name;
    cout<<"Enter time b/w (1---24):";
    cin>>time;

    if(time>=0 && time<=10){
        g1();
        cout<<" "<<name<<endl;
    }
    else if(time>11 && time <=14){
        g2();
        cout<<" "<<name<<endl;
    }
    else if(time>15 && time<20){
        g3();
        cout<<" "<<name<<endl;
    }
    else if(time>=20 && time<24){
        g4();
        cout<<" "<<name<<endl;
    }
    else{
        cout<<"Invalid input try again.."<<endl;
    }
    return 0;
}