/*
Write an input validation loop that asks the user to enter “Yes” or “No”.
*/
#include <iostream>
using namespace std;

int main() {
    char response;

    // y n 
    for (int i = 0; i < 1;) {
        cout << "Please enter 'Y' for Yes or 'N' for No: ";
        cin >> response;


        if (response == 'Y' || response == 'y' || response == 'N' || response == 'n') {
            if (response == 'Y' || response == 'y') {
                cout << "You entered: Yes" << endl;
            } else {
                cout << "You entered: No" << endl;
            }
    
        } else {
            cout << "Invalid input. Please try again." << endl;
        }
    }

    return 0;
}

