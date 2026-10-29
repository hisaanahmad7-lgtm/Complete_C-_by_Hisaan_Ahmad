#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    
    int Comp_choice = rand() % 100 + 1;
    int guess = 0;
    cout << "Generated Random Number: " << Comp_choice << endl;
    while (true){
    int user_choice;
    cout<<"Enter a number b/w 1 to 100 : "<<endl;
    cin>>user_choice;

    if(user_choice>Comp_choice){
        cout<<"Enter Smaller number..."<<endl;
        guess++;
    }
    else if(user_choice<Comp_choice){
        cout<<"Enter grater number!"<<endl;
        guess++;
    }
    else if(user_choice == Comp_choice){
        cout<<"you win you take "<<guess<<" Chance to win the game!"<<endl;
        break;
    }
    else{
        cout<<"Invalid input";
        exit(0);
    }

}
    guess = guess;
    if(guess<=2){
        cout<<"Insane you perform well.."<<endl;
    }
    else if(guess<=6){
        cout<<"Good Try..";
    }
    else if(guess>6){
        cout<<"Poor But Good..."<<endl;
    }
    else{
        cout<<"Idiot dont enter wrong input.."<<endl;
        exit(0);
    }
    return 0;
}
