// CSC-134
// M3Bonus - AI-Assisted Programming Assignment
// 10/18/2026
// Mario Bates
// This program will be a racing game where the player makes decisions to try to win a five-lap race.

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Function declarations
void showInstructions();
void startRace();

int main() {
    int choice;
    srand(time(0));

    cout << "Welcome to Bandit Racing!" << endl;
    cout << "1. Start Race" << endl;
    cout << "2. Instructions" << endl;
    cout << "0. Exit" << endl;

    cin >> choice;

    if (choice == 1) {
        startRace();
    }
    else if (choice == 2) {
        showInstructions();
    } 
    else if (choice == 0) {
        cout << "Thanks for Playing!" << endl;
    }
    else {
        cout << "Invalid choice." << endl;
    }
    return 0;
}

// Display game instructions
void showInstructions() {
    cout << endl;
    cout << "_____Bandit Racing Instructions______" << endl;
    cout << "You will race for 5 laps." << endl;
    cout << " Each lap, choose how to drive." << endl;
    cout << "1. Push hard" << endl;
    cout << "2. Drive conservatively" << endl;
    cout << "3. Pit Stop" << endl;
    cout << "Make good decisions to win the race!" << endl;
}

// Start the five-lap race
void startRace() {
    int lap = 1;
    int position = 5;
    int choice;
    int chance;

    cout << endl;
    cout << "_____Bandit Racing: Race Day______" << endl;
    cout << "You are starting in 5th place!" << endl;

    while (lap <= 5) {
        cout << endl;
        cout << "Lap " << lap << " of 5" << endl;
        cout << "Current position: " << position << endl;
        cout << "1. Push hard" << endl;
        cout << "2. Drive conservatively" << endl;
        cout << "3. Pit Stop" << endl;
        cout << "Choose your strategy: ";
        cin >> choice;

        chance = rand() % 10 + 1;

        // Option 1: Push hard
        if (choice == 1) {
            if (chance <= 6) {
                position--;
                cout << "You pushed hard and passed a car!" << endl;
            }
            else {
                position++;
                cout << "You pushed too hard and lost control!" << endl;
            }
        }
        // Option 2: Drive Conservatively
        else if (choice == 2) {
            if (chance <= 8){
                cout << "You drove safely and held your position!" << endl;
            }
            else {
                position++;
                cout << "Another car passed you!" << endl;
            }
        }
        // Option 3: Pit Stop
        else if (choice == 3) {
            position++;
            cout << "You made a pit stop for fresh tires!" << endl;
            cout << "You lost one position in the pits." << endl;
        }
        // Invalid choice
        else {
            cout << "Invalid choice. Try again." << endl;
            continue;
        }
        // Keep position between 1st and 5th
        if (position < 1) {
            position = 1;
        }
        if (position > 5) {
            position = 5;
        }
        // Move to the next lap
        lap++;
    }
    // Final race results
    cout << endl;
    cout << "____Race Results____" << endl;

    if (position == 1) {
        cout << "Congratulations! You won the race!" << endl;
    }
    else if (position <= 3) {
        cout << "Great job! You finished on the podium!" << endl;
    }
    else {
        cout << "You finished in position " << position << endl;
        cout << "Better luck next race!" << endl;
    }
    cout << "Thanks for racing with Bandit Racing!" << endl;
}
