#include <iostream>
#include <string>

using namespace std;

int main() {
    string correctPassword = "your_password_here";
    string userInput;
    int attempts = 0;
    const int maxAttempts = 3;

    do {
        cout << "Please enter your password: ";
        cin >> userInput;

        if (userInput == correctPassword) {
            cout << "Password accepted!" << endl;
            break;
        } else {
            cout << "Incorrect password. Try again." << endl;
            attempts++;
        }
    } while (attempts < maxAttempts);

    if (attempts == maxAttempts) {
        cout << "Too many incorrect attempts. Exiting the program." << endl;
    }

    return 0;
}
