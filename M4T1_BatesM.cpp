// CSC 134
// M4T1 - While
// BatesM
// 10/31/2026

#include <iostream>
using namespace std;

int main()
{

    // Part 1: Print Hello five times
    int count = 1;
    while (count <= 5)
    {
        cout << "Hello number " << count << endl;
        count++;
    }

    // Part 2: Display numbers and their spuares
    int num = 1;

    cout << "\nNumber\tNumber Squared" << endl;
    cout << "-----------------------" << endl;

    while (num <= 10)
    {
        cout << num << "\t" << (num * num) << endl;
        num++;
    }

    return 0;
}


