/*
CSC 134 
M2HW
Mario Bates
10/07/2026
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    // Purpose - Create a simple banking program
    // Calculate the final account balance

    // Declare our vaiables
    string name;
    int accountNumber = 12345;
    double startingBalance;
    double deposit;
    double withdrawal;
    double finalBalance;

    // Greet the user and get account information
    cout << "Welcome to CSC 134 Banking!" << endl;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your starting balance: ";
    cin >> startingBalance;

    cout << "Enter your deposit amount: ";
    cin >> deposit;

    cout << "Enter your withdrawal amount: ";
    cin >> withdrawal;

    // Calculate the final account balance
    finalBalance = startingBalance + deposit - withdrawal;

    // Print the account information
    cout << fixed << setprecision(2);
    cout << "Thank you for banking with us!" << endl;
    cout << "______________________________" << endl;
    cout << "Account Name: " << name << endl;
    cout << "Account Number: " << accountNumber << endl;
    cout << "Final Balance: $" << finalBalance << endl;


    // Question 2 - General Crates

    // Purpose - Calculate the cost and profit of wooden crates

    // Declare our variables
    const double COST_PER_CUBIC_FOOT = 0.30;
    const double CHARGE_PER_CUBIC_FOOT = 0.52;
    
    double length;
    double width;
    double height;
    double volume;
    double cost;
    double charge;
    double profit;
    // Get the crate dimensions
    cout << endl;
    cout << "Welcome to General Crates!" << endl,

    cout << "Enter the length of the crate: ";
    cin >> length;

    cout << "Enter the width of the crate: ";
    cin >> width;

    cout << "Enter the height of the crate: ";
    cin >> height;
    // Calculate the colume, cost, charge, and profit
    volume = length * width * height;
    cost = volume * COST_PER_CUBIC_FOOT;
    charge = volume * CHARGE_PER_CUBIC_FOOT;
    profit = charge - cost;
    // Print the crate information
    cout << fixed << setprecision(2);
    cout << endl;
    cout << "General Crates Receipt" << endl;
    cout << "_____________________________" <<endl;
    cout << "Volume: " << volume << " cubic feet" << endl;
    cout << "Manufacturing Cost: $" << cost <<endl;
    cout << "Profit: $" << profit << endl;
    cout << endl; 


    // Qustion 3 - Pizza Party

    // Purpose - Calculate leftover pizza slices

    // Declare our variables
    int pizzas;
    int slicesPerPizza;
    int visitors;
    int totalSlices;
    int slicesNeeded;
    int LeftoverSlices;
    // Get the pizza party information
    cout << endl;
    cout << "Welcome to the Pizza Party!" << endl;

    cout << "Enter the number of pizzas ordered: ";
    cin >> pizzas;

    cout << "Enter the number of slices per pizza: ";
    cin >> slicesPerPizza;

    cout << "Entr the number of visitors: ";
    cin >> visitors;
    // Calculate the leftover pizza slices
    totalSlices = pizzas * slicesPerPizza;
    slicesNeeded = visitors * 3;
    LeftoverSlices = totalSlices - slicesNeeded;
    // Print the pizza party results
    cout << endl;
    cout << "Pizza Party Results" << endl;
    cout << "_____________________________" << endl;
    cout << "Total Slices: " << totalSlices << endl;
    cout << "Slices Needed: " << slicesNeeded << endl;
    cout << "Leftover Slices: " << LeftoverSlices << endl;
    cout << endl;


    // Question 4 - FTCC Cheer Program

    // Purpose - Create a cheer for FTCC

    // Declare our variables
    string letsGo;
    string school;
    string team;
    string cheerOne;
    string cheerTwo;
    // Assign values to our variables
    letsGo = "Let's go ";
    school = "FTCC";
    team = "Trojans";

    // Build our cheers
    cheerOne = letsGo + school;
    cheerTwo = letsGo + team;
    // Print the FTCC cheers
    cout << endl;
    cout << cheerOne << endl;
    cout << cheerTwo << endl;
    cout << cheerOne << endl;
    cout << cheerTwo << endl;

     return 0; // no errors
}