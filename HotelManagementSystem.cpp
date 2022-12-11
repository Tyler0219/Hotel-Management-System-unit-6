#include<iostream>
#include <string>
using namespace std;


int main(){
    int quant;
    int choice;
//Rooms
    int rooms = 42;
    int roomsSelection = 0;
    int roomCost = 44;
//Suite
    int suite = 10;
    int suiteSelection = 0;
    int suiteCost = 115;
//Total
    int Total = 0; 
    string name;

    m://menu
    cout << "Welcome To The Hotel Management System!\n";
    cout << "Please enter your name: ";
    cin >> name;
    cout << "Hello " << name << "!\n";
    cout << "We have " << rooms - roomsSelection << " room(s) left for reservation!\n";
    cout << "Each room will cost $" << roomCost << "\n";
    cout << "We also have " << suite - suiteSelection << " suite(s) left for reservation!\n";
    cout << "Each suite will cost $" << suiteCost << "\n";
    cout << "1: Reserve a room\n"; 
    cout << "2: Reserve a suite\n";
    cout << "3: No thanks. \n";
    cout << "Please make your selection with the number 1 or 2 or 3: ";
    cin >> choice;

    // reservation choice
    switch (choice){
    case 1:// yes
        cout << "How many rooms would you like to reserve?\n";
        cout << "Enter Here: ";
        cin >> quant;
        if (rooms - roomsSelection >= quant){
            roomsSelection = roomsSelection + quant;
            Total = roomCost * quant;
            cout << "Okay! " << quant << "  room(s) have been reserved for you" << name << "!\n";
            cout << "The cost will be $" << Total  << "!\n\n";
        } else {
            cout << "Sorry only " << rooms - roomsSelection <<" room(s) are available.\n\n";
        }
        goto m; 
    
    case 2: //suite choice
            cout << "How many suites would you like to reserve?\n";
        cout << "Enter Here: ";
        cin >> quant;
        if (suite - suiteSelection >= quant){
            suiteSelection = suiteSelection + quant;
            Total = suiteCost * quant;
            cout << "Okay! " << quant << "  suite(s) have been reserved for you" << name << "!\n";
            cout << "The cost will be $" << Total  << "!\n\n";
        } else {
            cout << "Sorry only " << suite - suiteSelection <<" suite(s) are available.\n\n";
        }
        goto m; 

    case 3://no
        cout << "Have a nice day!\n"; 
        break;
    case 0:// a number not listed
        exit(0);
        default:
            cout << "\n\nPlease choose  1 or 2 or 3.\n\n";
            goto m; 
    }
    
}