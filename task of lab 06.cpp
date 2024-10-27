#include<iostream>
#include<string>
using namespace std;
int main()
{

    string correctPassword = "mypassword";
    int attempts = 0;
    const int maxAttempts = 3;

    do {
        
        attempts++; 

    } while (attempts < maxAttempts); 

    if (attempts == maxAttempts) {
        cout << "Too many attempts. Exiting the program." << endl;
    }

    return 0;
}