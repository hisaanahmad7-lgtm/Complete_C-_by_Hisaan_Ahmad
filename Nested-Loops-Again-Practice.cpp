#include <iostream>
#include <iomanip>

using namespace std;

class pattern{
    public:
    int n;
    

    void getData(void){
        cout<<"Enter Value:";
    cin>>n;
    }

    void setData(void){
        for (int i = 1; i <=n; i++){
        for (int y = 1; y <=i; y++){
            cout<<y;
        }
        cout<<endl;
    }

    }
};
int main() {

    // pattern p1;
    // p1.getData();
    // p1.setData();
    int n;
    cout<<"Enter Value:";
    cin>>n;

    // for (int i = 1; i <=n; i++){
    //     for (int y = 1; y <=i; y++){
    //         cout<<y;
    //     }
    //     cout<<endl;
    // }

    // for (int i = n; i >=1; i--){
    //     for (int y = 1; y <=i; y++){
    //         cout<<y;
    //     }
    //     cout<<endl;
    // }

    // for (int i = n; i >=1; i--){
    //     for (int y = n; y >=i; y--){
    //         cout<<y;
    //     }
    //     cout<<endl;
    // }


    // for (int i = 1; i < n; i++){
    //     for (int x = 1; x <= i; x++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    //     cout<<endl;

    
    return 0;
}