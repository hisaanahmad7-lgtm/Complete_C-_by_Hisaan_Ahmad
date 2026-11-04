#include <iostream>
#include <iomanip>
#include<cstdlib>
#include<ctime>


using namespace std;

int main() {


int totalWins = 0;
int totalLosses = 0;
int tie = 0;

try{
while ((true))
{

string choices[3] = {"rock", "paper", "scissors"};
srand(time(0));

string computerChoice = choices[rand() % 3];
// cout << computerChoice;

string userChoice;
cout << "Enter your choice (Rock, Paper, Scissors) and enter exit to leave: ";
cin >> userChoice;



    if (userChoice == "Exit" || userChoice == "exit") {
        cout << "Exiting the game." << endl;

        cout << "Total Wins: " << totalWins << endl;
        cout << "Total Losses: " << totalLosses << endl;
        cout << "Total Ties: " << tie << endl;

        break;
    }


    else if (userChoice == computerChoice) {
        cout << "Computer chooses " << computerChoice << ". You choose " << userChoice << ". It's a tie!" << endl;
        tie++;
    }

    else if ((userChoice == "Rock" || userChoice == "rock") && (computerChoice == "Scissors" || computerChoice == "scissors")) {
        cout << "Computer chooses " << computerChoice << ". You choose " << userChoice << ". You win!" << endl;
        totalWins++;
    }

    else if ((userChoice == "Paper" || userChoice == "paper") && (computerChoice == "Rock" || computerChoice == "rock")) {
        cout << "Computer chooses " << computerChoice << ". You choose " << userChoice << ". You win!" << endl;
        totalWins++;
    }

    else if ((userChoice == "Scissors" || userChoice == "scissors") && (computerChoice == "Paper" || computerChoice == "paper")) {
    cout << "Computer chooses " << computerChoice << ". You choose " << userChoice << ". You win!" << endl;
        totalWins++;
    }

    else if ((userChoice == "Rock" || userChoice == "rock") || 
            (userChoice == "Paper" || userChoice == "paper") || 
            (userChoice == "Scissors" || userChoice == "scissors")) {
            cout << "Computer chooses " << computerChoice << ". You choose " << userChoice << ". Computer wins!" << endl;
            totalLosses++;
        }
    else{
        
        cout<<endl;
        cout<<endl;
        throw "Invalid input! Please enter Rock, Paper, Scissors, or Exit.";
    }
    cout << endl;
    
}

}

catch(const char* error){
    
    cout << "Error: " << error << endl;
}
    return 0;
}