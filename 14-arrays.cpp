#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    int arr[5] = {111,255,33,444,888};
    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;
    cout<<arr[3]<<endl;
    cout<<arr<<endl;
    cout<<endl;


    int my_array[3];
    my_array[0] = 44;
    my_array[1] = 77;
    my_array[2] = 366;
    cout<<my_array[0]<<endl<<my_array[1]<<endl<<my_array[2]<<endl;
    my_array[1] = 565656;
    cout<<"The new value is : "<<my_array[1]<<endl; 



    int hisaan_array[5];
    cout<<"Enter the valuyes in array"<<endl;
    cin>>hisaan_array[0]>>hisaan_array[1]>>hisaan_array[2]>>hisaan_array[3]>>hisaan_array[4]>>hisaan_array[5];
    cout<<endl;
    cout<<hisaan_array[0]<<endl<<hisaan_array[1]<<endl<<hisaan_array[2]<<endl<<hisaan_array[3]<<endl<<hisaan_array[4]<<endl<<hisaan_array[5]<<endl;


    // Printing marks by using for loop 
    cout<<endl;
    int new_array[5] = {221 , 232 , 4324 , 343 , 970 };
    for (int  i = 0; i <= 5; i++){
        cout<<new_array[i]<<endl;
    }

    
    cout<<endl;
    int lap_array[2];
    cout<<"Enter the value"<<endl;
    cin>>lap_array[0]>>lap_array[1]>>lap_array[2];
    cout<<endl;
    cout<<lap_array[0]<<endl<<lap_array[1]<<endl<<lap_array[2]<<endl;
    cout<<endl;
    for (int  x = 0; x <= 5; x++){
        cout<<lap_array[x]<<endl;
    }


    // Pointers with arrays 

    cout<<endl;
    int ahmad[4] = {222 , 333 , 444 , 555};
    int * my_pointer = ahmad;
    cout<<"The value of ahmad is "<<*my_pointer<<endl;
    cout<<"The adress of ahmad is "<<&my_pointer<<endl;

    cout<<*(++my_pointer)<<endl;
    cout<<*(my_pointer++)<<endl;
    return 0;
}