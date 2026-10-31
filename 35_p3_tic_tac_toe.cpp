// #include <iostream>
// #include <iomanip>

// using namespace std;
// class game{
//     // int user1 = 1;
//     // int user2 = 2;
//     int i = 0;
//     int user[2] = {1 , 2};
//     int a1  = 0, a2  = 0, a3 = 0;
//     int b1  = 0, b2  = 0, b3 = 0;
//     int c1  = 0, c2  = 0, c3 = 0;

//     void getData(void);
//     void setData(void);
// };

// void game :: getData(void){
//     while(true){
//         for (i = 0; i <=2 ; i++)
//         {
//             cout<<"Take your turn"<<user[i];
//         }
//         cout<<"Enter your choice";
//         cin>>a1>>a2 >>a3>>b1>>b2>>b3>>c1>>c2>>c3;

//         cout<<"Enter 100 to exit game";
//         if(user[i] == 100){
//             cout<<"Exitting..";
//             exit(0);
//         }
//     }

// }

// void game :: setData(void){
//     while ((true)){
//         if(a1 == b2 == c3 || a1 == b1 == c1 || a2 == b2 == c2 || a3 == b3 == c3 || a1 == a2 == a3|| b1 == b2 == b3 || c1 == c2 == c3){
//             cout<<user[i]<<"Wins...";
//         }
//     }
// }
// int main() {

    // game g1;
    // g1.getData();
    // g1.setData();
//     return 0;
// }


#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

class game{
    int i = 0;
    int user[2] = {1 , 2};
    int a1 = 0, a2 = 0, a3 = 0;
    int b1 = 0, b2 = 0, b3 = 0;
    int c1 = 0, c2 = 0, c3 = 0;

public:
    void getData(void);
    void setData(bool &isOver);
    void displayBoard(void);
};

void game :: displayBoard(void){
    cout << "\n " << a1 << " | " << a2 << " | " << a3 << endl;
    cout << "---|---|---" << endl;
    cout << " " << b1 << " | " << b2 << " | " << b3 << endl;
    cout << "---|---|---" << endl;
    cout << " " << c1 << " | " << c2 << " | " << c3 << "\n" << endl;
}

void game :: setData(bool &isOver){
    if((a1 != 0 && a1 == b2 && b2 == c3) || (a3 != 0 && a3 == b2 && b2 == c1) || (a1 != 0 && a1 == b1 && b1 == c1) || (a2 != 0 && a2 == b2 && b2 == c2) || (a3 != 0 && a3 == b3 && b3 == c3) || (a1 != 0 && a1 == a2 && a2 == a3) || (b1 != 0 && b1 == b2 && b2 == b3) || (c1 != 0 && c1 == c2 && c2 == c3)){
        displayBoard();
        cout << "User " << user[i] << " Wins..." << endl;
        isOver = true;
    }
}

void game :: getData(void){
    bool isOver = false;
    int choice;
    int cellValue;

    while(!isOver){
        for (i = 0; i < 2; i++)
        {
            displayBoard();
            cout << "Take your turn User " << user[i] << endl;
            cout << "Enter 100 to exit game or enter cell number (1-9): ";
            cin >> choice;

            if(choice == 100){
                cout << "Exitting.." << endl;
                exit(0);
            }

            cellValue = user[i];

            if(choice == 1) a1 = cellValue;
            else if(choice == 2) a2 = cellValue;
            else if(choice == 3) a3 = cellValue;
            else if(choice == 4) b1 = cellValue;
            else if(choice == 5) b2 = cellValue;
            else if(choice == 6) b3 = cellValue;
            else if(choice == 7) c1 = cellValue;
            else if(choice == 8) c2 = cellValue;
            else if(choice == 9) c3 = cellValue;
            else {
                cout << "Invalid move!" << endl;
                i--;
                continue;
            }

            setData(isOver);
            if(isOver) break;
        }
    }
}

int main() {
    game g1;
    g1.getData();
    return 0;
}
