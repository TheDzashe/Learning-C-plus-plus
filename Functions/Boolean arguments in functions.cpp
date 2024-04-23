#include <iostream>
using namespace std;

// Function that checks if a number is greater than 10
int isGreaterThan10(int number) {
    return (number > 10);
}

int main() {
    // Simple program using cout without std
    int userInput;

    // Get user input
    cout << "Enter a number: ";
    cin >> userInput;

    // Check if the number is greater than 10 and print the result
    if (isGreaterThan10(userInput)) {
        cout << "The entered number is greater than 10." << endl;
    } else {
        cout << "The entered number is not greater than 10." << endl;
    }

    return 0;


}