#include<iostream>
using namespace std;

int main(){
    int i = 0;
    while(i<=6){
        cout<<i<<endl;
        if (i == 3){
            break;
        }
        i+=1;
    }

    cout<<endl;
    int my_name_print = 0;
    while(my_name_print <= 6){
        if(my_name_print == 3){
            my_name_print += 1;
            continue;
        }
        cout << my_name_print << endl;
        my_name_print += 1;
    }


    cout<<endl;
    int my_loop = 10;
    int table;
    cout<<"Enter the number you wanna print reverse table..: ";
    cin>>table;
    for(my_loop = 10 ; my_loop >=0 ; my_loop--){
        cout<<table<<" X "<< my_loop << " = " << table*my_loop<<endl;
        if(my_loop == 5){
            break;
        }
    }
    return 0;
}

