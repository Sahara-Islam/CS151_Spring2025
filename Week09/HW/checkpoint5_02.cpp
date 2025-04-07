/*
Write an input validation loop that asks the user to enter a number in the range
of 10 through 25.
*/

#include <iostream>
using namespace std;

int main() {
    int number;

    do {
        cout << "enter a number between 10 and 25: ";
        cin >> number;

        if (number < 10 || number > 25) {
            cout << "invalid input. please try again.\n";
        }

    } while (number < 10 || number > 25);

    cout << "you entered: " << number << endl;

    return 0;
}
