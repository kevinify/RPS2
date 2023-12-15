// Classic Rock Paper scissors game
// Single player
// Hide playerOne input
//convert input string to lowercase -> tolower()
#include <iostream>
using namespace std;

int play();

int main() {
    // Write C++ code here
    cout << "WELCOME TO ROCK PAPER SCISSORS!" <<endl;
    play();
    return 0;
}

int play() {
    cout << "Type s for scissors, r for rock or p for paper: \n";
    string playerOne, playerTwo;
    cout << "Player One: ";
    cin >> playerOne;
    cout << "Player Two: ";
    cin >> playerTwo;
    if((playerOne == "r" || playerOne == "p" || playerOne == "s") && (playerTwo == "r" || playerTwo == "p" || playerTwo == "s")) {
        if (playerOne == playerTwo) {
            cout << "Draw! \nPlay Again...";
            return play();
        }
        if((playerTwo == "r" && playerOne == "p") or (playerTwo == "p" && playerOne == "s") or (playerTwo == "s" && playerOne == "r")) {
            cout << "Congratulations Player One! You Won..";
            return 0;
        }
        cout << "Congratulations Player Two! You Won..";
        return 0;
        }
    else {
        cout << "Invalid input. Follow the instruction\n";
        return play();
    }
    return 0;
}