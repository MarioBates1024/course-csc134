// CSC - 134
// M4HW1 - gold level
// BatesM
// 11/03/2026

#include <iostream>
using namespace std;

int main()
{
    int number;
    int count = 1;

    cout << "Enter a number from 1 to 12: ";
    cin >> number;

    // Check for invalid numbers
    while (number < 1 || number > 12)
    {
        cout << "Invalid number. Enter a number from 1 to 12: ";
        cin >> number;
    }

    // Print multiplication table
    while (count <= 12)
    {
        cout << number << " times "
             << count << " is "
             << number * count << "." << endl;

        count++;
    }

    return 0;
}