// CSC - 134
// M5T1 - Basic Functions
// BatesM
// 11/06/2026

#include <iostream>
#include <string>
using namespace std;

// Declare our functions
string formatAnswer(int answer);
void printAnswer(string msg);

int main()
{
    int answer = 5;
    string message;
    message = formatAnswer(answer);
    printAnswer(message);
    return 0;
}

// Define our functions

string formatAnswer(int answer)
{
    // Make a string containing the answer
    string answerMessage;
    answerMessage = "The answer is ";
    answerMessage += to_string(answer);

    return answerMessage;
}

void printAnswer(string msg)
{
    // Display our message
    cout << msg << endl;
}