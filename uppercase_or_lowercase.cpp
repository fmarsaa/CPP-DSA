#include <iostream>
using namespace std;



void identifyCharacter(char letter) {
    if letter >= 'A' && a <= 'Z') {
        cout << "The character is uppercase." << endl;
    }
    else if (letter >= 'a' && letter <= 'z') {
        cout << "The character is lowercase." << endl;
    }
    else {
        cout << "Incorrect input" << endl;
    }
}

int main() {
    char letter;

    cout << "Enter a character: ";
    cin >> letter;

    identifyCharacter(letter);

    return 0;
}