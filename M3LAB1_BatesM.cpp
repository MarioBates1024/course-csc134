// CSC 134
// M3LAB1 - Choices with If Statemaents
// Mario Bates
// 10/12/2026

#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "Welcome to Bandit Racing!" << endl;
    cout << "You are on the final lap of a NASCAR race" << endl;
    cout << "What will you do?" << endl;

    cout << "1. Attempt to pass the leader" << endl;
    cout << "2. Hold your position" << endl;

    cout << "Enter 1 or 2: ";
    cin >> choice;
    if (choice == 1) {
        cout << "You attempt to pass the leader!" << endl;
        cout << "You make the pass and win the race!" << endl;
    }
    else if (choice == 2) {
        cout << "You decide to hold your position." << endl;
        cout << "You finish the race in second place!" << endl;
    }
    else {
        cout << "Invalid choice. Please enter 1 or 2." << endl;
    }
    cout << "Thanks for playing Bandit Racing!" << endl;

    return 0;
}