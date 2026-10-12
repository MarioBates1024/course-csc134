// CSC 134
// M3T1
// BatesM
// 10/11/2026
// Ask the user for the width and length of two rectangles
// Find the area

#include <iostream>
using namespace std;

int main() {

// Declare our variables
int widthOne, lengthOne, widthTwo, lengthTwo;
int areaOne, areaTwo;

// Ask for user input
cout << "Please enter the width and height of the first" << endl;
cout << "rectangle, separated by a space or newline" << endl;
cin >> widthOne >> lengthOne;

cout << "Please enter the width and height of the second" << endl;
cout << "rectangle, separated by a space or newline" << endl;
cin >> widthTwo >> lengthTwo;

// Calculate answer
areaOne = widthOne * lengthOne;
areaTwo = widthTwo * lengthTwo;

// Display results
cout << "Rectangle one has area of " << areaOne << endl;
cout << "Rectangle two has area of " << areaTwo << endl;

// Determine which is bigger
if (areaOne > areaTwo) {
      cout << "Rectangle one is bigger" << endl;    
}
  
if (areaTwo > areaOne) {
    cout << "Rectangle two is bigger" << endl;
}

if (areaOne == areaTwo) {
    cout << "They are the same size" << endl;
}


}