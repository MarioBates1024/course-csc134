#include <iostream>
using namespace std;

/*
CSC - 134
M5LAB1 - Choose Your Own Adventure
Mario Bates
November 10, 2026

This program allows the user to make 
choices while playing through a story.
*/

// Function Prototypes
void main_menu();
void choice_front_door();
void choice_back_door();
void choice_go_home();

void choice_dark_hallway();
void choice_upstairs_room();

int main() {
    cout << "Welcome to Choose Your Own Adventure!" << endl;
    main_menu();
    return 0;
}

// Main Menu Function
void main_menu() {
    int choice;

    cout << endl;
    cout << "Main Menu" << endl;
    cout << "1. Go through the front door" << endl;
    cout << "2. Go through the back door" << endl;
    cout << "3. Go home" << endl;
    cout << "4. Quit" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        choice_front_door();
    }
    else if (choice == 2) {
        choice_back_door();
    }
    else if (choice == 3) {
        choice_go_home();
    }
    else if (choice == 4) {
        cout << "Thanks for playing!" << endl;
    }
    else {
        cout << "Invalid choice. Try again." << endl;
        main_menu();
    }
}

// Front Door Function
void choice_front_door() {
    int choice;

    cout << endl;
    cout << "You approach the front door." << endl;
    cout << "The door slowly creaks open..." << endl;
    cout << "You see a dark hallway." << endl;
    cout << endl;

    cout << "What do you do?" << endl;
    cout << "1. Enter the hallway" << endl;
    cout << "2. Return to the main menu" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        cout << endl;
        cout << "You step into the dark hallway." << endl;
        cout << "Suddenly, you hear footsteps behind you!" << endl;
        cout << "You turn around, but nobody is there." << endl;
        cout << "You decide to keep moving forward." << endl;
        choice_dark_hallway();
    }
    else if (choice == 2) {
        cout << "You decide to turn back." << endl;
        main_menu();
    }
    else {
        cout << "Invalid choice. Returning to menu." << endl;
        main_menu();
    }
}

// Back Door Fuction
void choice_back_door() {
    int choice;

    cout << endl;
    cout << "You walk aroud to the back of the house." << endl;
    cout << "You notice the back door is slightly open." << endl;
    cout << "You hear a strange noise oming from inside." << endl;
    cout << endl;

    cout << "What do you do?" << endl;
    cout << "1. Open the back door" << endl;
    cout << "2. Return to the main menu" << endl;

    cout << "Entr your choice: ";
    cin >> choice;

    if (choice == 1) {
        cout << endl;
        cout << "You slowly open the back door." << endl;
        cout << "You find yourself inside a dark kitchen." << endl;
        cout << "Suddenly, you hear something crash upstairs!" << endl;
        cout << "You decide to investigate the noise." << endl;
        choice_upstairs_room();
    }
    else if (choice == 2) {
        cout << "You decide to trun back." << endl;
        main_menu();
    }
    else {
        cout << "Invalid choice. Returning to menu." << endl;
        main_menu();
    }
}

// Go Home Function
void choice_go_home() {
    cout << endl;
    cout << "You decide this house is too creepy." << endl;
    cout << "You turn around and head back home." << endl;
    cout << "You make it home safely!" << endl;
    cout << "Game Over!" << endl;
}

// Dark Hallwy Function
void choice_dark_hallway() {
    int choice;

    cout << endl;
    cout << "You continue walking down the hallway." << endl;
    cout << "You notice two doors at the end." << endl;
    cout << "One door is red and the other is black." << endl;
    cout << endl;

    cout << "What do you do?" << endl;
    cout << "1. Open the red door" << endl;
    cout << "2. Open the black door" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice ==1) {
        cout << endl;
        cout << "You slowly open the red door." << endl;
        cout << "Inside, you discover a room full of treasure!" << endl;
        cout << "Congratulations! You found the hidden treasure!" << endl;
        cout << "Game Over! You Win!" << endl;
    }
    else if (choice == 2) {
        cout << endl;
        cout << "You open the black door." << endl;
        cout << "Suddenly, a monster jumps out!" << endl;
        cout << "You run as fast as you can!" << endl;
        cout << "You escape the house safely!" << endl;
        cout << "Game Over!" << endl;
    }
    else {
        cout << endl;
        cout << "Invalid choice. Returning to main menu." << endl;
        main_menu();
    }
}

// Upstairs Room Function
void choice_upstairs_room() {
    int choice;

    cout << endl;
    cout << "You carefully walk up the stairs." << endl;
    cout << "You hear another loud crash!" << endl;
    cout << "At the top, you discover two rooms." << endl;
    cout << "One room has a light on." << endl;
    cout << "The other room is completely dark." << endl;
    cout << endl;

    cout << "What do you do?" << endl;
    cout << "1. Enter the room with the light" << endl;
    cout << "2. Enter the dark room" << endl;
    cout << "Enter your choices: ";
    cin >> choice;

    if (choice == 1) {
        cout << endl;
        cout << "You slowly enter the room with the light." << endl;
        cout << "You discover an old man sitting in a chair." << endl;
        cout << "He tells you the house is haunted!" << endl;
        cout << "You quickly run downstairs and escape!" << endl;
        cout << "Game Over! You Survived!" << endl;
    }
    else if (choice == 2) {
        cout << endl;
        cout << "You carefully enter the dark room." << endl;
        cout << "Suddenly, the door slams shut behind you!" << endl;
        cout << "You hear a mysterious voice whisper your name." << endl;
        cout << "You search for a way out but find nothing!" << endl;
        cout << "You are trapped inside the haunted house!" << endl;
        cout << "Game Over!" << endl;
    }
    else {
        cout << endl;
        cout << "Invalid choice. Returning to main menu." << endl;
        main_menu();
    }
} 

// End of Program