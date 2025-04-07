/*
Write an input validation loop that asks the user to enter ‘Y’, ‘y’, ‘N’, or ‘n’.
*/

#include <iostream>
using namespace std;

int main() {
    char choice;

   
    do {
        cout << "enter Y, y, N, or n: ";
        cin >> choice;

        if (choice != 'Y' && choice != 'y' && choice != 'N' && choice != 'n') {
            cout << "invalid input. please try again.\n";
        }

    } while (choice != 'Y' && choice != 'y' && choice != 'N' && choice != 'n');

    cout << "you entered: " << choice << endl;

    return 0;
}
