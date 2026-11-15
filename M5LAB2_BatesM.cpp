// CSC - 134
// M5LAB2
// Mario Bates
// 11/15/2026

#include <iostream>
using namespace std;

// Decclare (Write the prototyps for)
// the getLength,
// getWidth, getArea, and displayData
// functions here.

double getLength();
double getWidth();
double getArea(double length, double width);
void displayData(double length, double width, double area);

int main()
{
    // This program calculates the area of a rectangle.
    // TODO: fix any syntax errors

    double length,
           width,
           area;

    // Get the rectangle's length.
    length = getLength();

    // Get the rectangle's width.
    width = getWidth();

    // Get the rectangle's area
    area = getArea(length, width);

    // Display the rectangle's data.
    displayData(length, width, area);

    return 0;
}

// Get the rectangle's length.
double getLength()
{
    double length;

    cout << "Enter the rectangle's length: ";
    cin >> length;

    return length; 
}

// Get the rectangle's width.
double getWidth()
{
    double width;

    cout << "Enter the rectangle's width: ";
    cin >> width;

    return width;
}

// Calculate the rectangl's area.
double getArea(double length, double width)
{
    double area;

    area = length * width;

    return area;
}

// Display the rectangle's information.
void displayData(double length, double width, double area)
{
    cout << "\nRectangle Information" << endl;
    cout << "---------------------" << endl;
    cout << "Length: " << length << endl;
    cout << "Width: " << width << endl;
    cout << "Area: " << area << endl;
}