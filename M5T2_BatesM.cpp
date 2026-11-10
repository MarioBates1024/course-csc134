// CCS - 134
// M5T2
// Mario Bates
// Partner: AI Navigator - ChatGPT
// November 10, 2026

#include <iostream>
using namespace std;

// Function Prototypes
int square(int num);
void printAnswerLine(int number, int sqared);

// Main Function
int main() {
    // Print the numbers 1 to 10 and their squares.
    for (int i = 1; i <= 10; i++) {
        int result = square(i);
        printAnswerLine(i, result);
    }
    return 0;
}

// Square Function
int square(int num) {
    int result;
    result = num * num;
    return result;
}

// Print Answer Line Function
void printAnswerLine(int number, int squared) {
    cout << number << " squared is " << squared << endl;
}

// End of Program