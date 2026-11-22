// CSC -134
// M5HW1 - Gold Level
// BatesM
// 11/22/2026

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void averageRainfall()
{
    string month1, month2, month3;
    double rain1, rain2, rain3;
    double average;

    cout << "Enter mont: ";
    cin >> month1;
    cout << "Entr rainfall for " << month1 << ": ";
    cin >> rain1;

    cout << "Enter month: ";
    cin >> month2;
    cout << "Enter rainfall for " << month2 << ": ";
    cin >> rain2;

    cout << "Enter month: ";
    cin >> month3;
    cout << "Enter rainfall for " << month3 << ": ";
    cin >> rain3;

    average = (rain1 + rain2 + rain3) / 3.0;

    cout << fixed << setprecision(2);
    cout << "The average rainfall for "
         << month1 << ", " << month2 << ", and "
         << month3 << " is " << average
         << " inches." << endl;
}

void blockVolume()
{
    double width, length, height;
    double volume;

    cout << "Enter the width of the block: ";
    cin >> width;

    cout << "Enter the length of the block: ";
    cin >> length;

    cout << "Enter the height of the block: ";
    cin >> height;

    if (width <= 0 || length <=0 || height <=0)
    {
        cout << "All dimensions must be greater than zero." << endl;
        return;
    }

    volume = width * length * height;

    cout << "The volume of the block is "
         << volume << " cubic units." << endl;
}

void romanNumerals()
{
    int number;

    cout << "Enter a number (1 - 10): ";
    cin >> number;

    switch (number)
    {
        case 1:
            cout << "The Roman numeral is I." << endl;
            break;
        case 2:
            cout << "The Roman numeral is II." << endl;
            break;
        case 3:
            cout << "The Roman numeral is III." << endl;
            break;
        case 4:
            cout << "The Roman numeral is IV." << endl;
            break;
        case 5:
            cout << "The Roman numeral is V." << endl;
            break;
        case 6:
            cout << "The Roman numeral is VI." << endl;
            break;
        case 7:
            cout << "The Roman numeral is VII." << endl;
            break;
        case 8:
            cout << "The Roman numeral is VIII." << endl;
            break;
        case 9:
            cout << "The Roman numeral is IX." << endl;
            break;
        case 10:
            cout << "The Roman numeral is X." << endl;
            break;
        default:
            cout << "Please enter a number form 1 to 10." << endl;        
    }
}

void geometryCalculator()
{
    int choice;
    double radius, length, width, base, height, area;
    const double PI = 3.14159;

    cout << "Geometry Calculator" << endl;
    cout << "1. Calculate the Area of a Circle" << endl;
    cout << "2. Calculate the Area of a Rectangle" << endl;
    cout << "3. Calculate the Area of a Triangle" << endl;
    cout << "4. Quit" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;
    
    switch (choice)
    {
        case 1:
            cout << "Enter the circle's radius: ";
            cin >> radius;

            if (radius < 0)
            {
                cout << "The radius cannot be less than zero." << endl;
                break;
            }

            area = PI * radius * radius;
            cout << "The area is " << area << endl;
            break;

            case 2:
                cout << "Enter the rectangle's length: ";
                cin >> length;
                cout << "Enter the rectangle's width: ";
                cin >> width;

                if (length < 0 || width < 0)
                {
                    cout << "Length and width cannot be negative." << endl;
                    break;
                }

                area = length * width;
                cout << "The area is " << area << endl;
                break;

                case 3:
                    cout << "Enter the triangle's base: ";
                    cin >> base;
                    cout << "Enter the triangle's height: ";
                    cin >> height;

                    if (base < 0 || height < 0)
                    {
                        cout << "Only enter positive values for base and height." << endl;
                        break;
                    }

                    area = base * height * 0.5;
                    cout << "The area is " << area << endl;
                    break;

                    case 4:
                        cout << "Returning to the main menu." << endl;
                        break;

                    default:
                        cout << "The valid choices are 1 through 4." << endl;
                        break;
    }
}

void distanceTraveled()
{
    double speed, distance;
    int hours;

    cout << "What is the speed of the vehicle in mph? ";
    cin >> speed;

    cout << "How many hours has it traveled? ";
    cin >> hours;

    if (speed < 0 || hours < 1)
    {
        cout << "Speed cannot be negative and hours must be at least 1." << endl;
        return;
    }

    cout << "Hour\tDistance Traveled" <<endl;
    cout << "------------------------" << endl;

    for (int hour = 1; hour <= hours; hour++)
    {
        distance = speed * hour;
        cout << hour << "\t" << distance << endl;
    }
}

int main()
{
    int choice;

    do
    {
        cout << "\nMain Menu" << endl;
        cout << "1. Average Rainfall" << endl;
        cout << "2. Volume of a Block" << endl;
        cout << "3. Roman Numerals" << endl;
        cout << "4. Geometry Calculator" << endl;
        cout << "5. Distance Traveled" << endl;
        cout << "6. Exit Program" << endl;
        cout << "Enter your choice (1-6): ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                averageRainfall();
                break;
            case 2:
                blockVolume();
                break;
            case 3:
                romanNumerals();
                break;
            case 4:
                geometryCalculator();
                break;
            case 5:
                distanceTraveled();
                break;
            case 6:
                cout << "Exiting program. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please enter 1 through 6." << endl;
                break;
        }
    } while (choice != 6);

    return 0;
}