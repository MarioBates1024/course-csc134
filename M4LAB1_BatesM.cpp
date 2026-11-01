// CSC 134
// M4LAB1 - Nested Loops
// BatesM
// 11/01/2026

#include <iostream>
using namespace std;

int main()
{
    int height;
    int width;

    cout << "Enter the height: ";
    cin >> height;

    cout << "Enter the width: ";
    cin >> width;

    // Outer loop controls the height (rows)
    for (int i = 0; i < height; i++)
    {
        // Inner loop controls the width (Columns)
        for (int j = 0; j < width; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}