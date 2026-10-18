// CSC-134
// M3HW1 - GOLD
// Mario Bates
// 10/18/2026
// This program completes four exercises using if and else statements.

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

int main() {
// Question 1 - Simple Chatbot

string answer;

cout << "Question 1 - Chatbot" << endl;
cout << "Hello, I'm a C++ program!" << endl;
cout << "Do you like me? Please type yes or no." << endl;
cin >> answer;
// Check the user's answer
if (answer == "yes") {
    cout << "That's great! I'm sure we'll get along." << endl;
}
else if (answer == "no") {
    cout << "Well, maybe you'll learn to like me later." << endl;
}
else {
    cout << "If you're not sure, that's ok." << endl;
}
// Question 2 - Recdeipt Calculator
double mealPrice;
double tax;
double tip;
double total;

int orderType;
cout << endl;
cout << "Question 2 - Receipt Calculator" << endl;

cout << "Enter the price of your meal: $";
cin >> mealPrice;

cout << "Enter 1 for dine in or 2 for takeout: ";
cin >> orderType;
// Calculate sales tax
tax = mealPrice * 0.07;
// Calculate tip based on oreder type
if (orderType == 1) {
    tip = mealPrice * 0.15;
}
else {
    tip = 0;
}
// Calculate total amount due
total = mealPrice + tax + tip;
// Display the receipt
cout << endl;
cout << fixed << setprecision(2);
cout << "______Your Receipt______" << endl;
cout << "Meal Price: $" << mealPrice << endl;
cout << "Tax: $" << tax << endl;
cout << "tip: $" << tip << endl;
cout << "________________________" << endl;
cout << "Total: $" << total << endl;
// Qustion 3 - Bandit Racing Adventure

int choice1;
int choice2;
cout << endl;
cout << "Question 3 - Bandit Racing Adventure" << endl;
cout << "Welcome to Bandit Racing!" << endl;
cout << "Your are on the final lap of a NASCAR race!" << endl;
cout << "The leader is right in front of you." << endl;

cout << "What will you do?" << endl;
cout << "1. Press the gas and attempt to pass." << endl;
cout << "2. Slow down and play it safe." << endl;
cin >> choice1;
// check the player's first choice
if (choice1 == 1) {
    cout << "You accelerate toward the leader!" << endl;
    cout << "You have on final chance to pass!" << endl;
    cout << "1. Pass on the inside." << endl;
    cout << "2. Pass on the outside." << endl;
    cin >> choice2;

    // Check the player's second choice
    if (choice2 == 1) {
        cout << "You make the pass and win the race!" << endl;
        cout << "Victory for Bandit Racing!" << endl;
    }
    else if (choice2 == 2) {
        cout << "You get bloced and lose the race!" << endl;
        cout << "Game Over!" << endl;
    }
    else {
        cout << "Invalid choice!" << endl;
    }
}
else if (choice1 ==2) {
    cout << "You slow down and lose the race!" << endl;
    cout << "Game Over!" << endl;
}
else {
    cout << "Invalid choice!" << endl;
}
// Question 4 - Math Practice

int num1;
int num2;
int userAnswer;
int correctAnswer;
// Generate two random single-digit number
srand(time(0));
num1 = rand() % 10;
num2 = rand() % 10;
// Calculate the correct answer
correctAnswer = num1 + num2;
// Display the math question
cout << endl;
cout << "Question 4 - Math Practice" << endl;
cout << "What is " << num1 << " plus " << num2 << "?" << endl;
cin >> userAnswer;
// Check if the answer is correct
if (userAnswer == correctAnswer) {
    cout << "Correct!" << endl;
}
else {
    cout << "Incorrect!" << endl;
}

    return 0;
}