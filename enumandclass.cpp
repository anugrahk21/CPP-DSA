#include <iostream>
using namespace std;

// Define an enum to represent the four directions
enum Direction {
    NORTH = 1,
    EAST = 2,
    WEST = 3,
    SOUTH = 4
};

class Navigator {
public:
    void navigate(int input) {
        Direction dir; //actually not implemented
        dir=static_cast<Direction>(input); //gets direction which corresponds to the input integer
        int dirno =(input);
        //Switch case to determine the direction based on the integer value
        switch (dirno) {
            case NORTH:
                cout << "We are headed towards North." << endl;
                break;
            case EAST:
                cout << "We are headed towards East." << endl;
                break;
            case WEST:
                cout << "We are headed towards West." << endl;
                break;
            case SOUTH:
                cout << "We are headed towards South." << endl;
                break;
            default:
                cout << "Invalid Input" << endl;
                break;
        }
    }
};

int abc() {
    int input;
    cin >> input;

    Navigator navigator;
    navigator.navigate(input);

    return 0;
};

int main() {
    abc();
    return 0;
}