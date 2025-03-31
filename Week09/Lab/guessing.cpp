/*Random Number Guessing Game

Create a file in Week09/Lab called guessing.cpp

Write a program that generates a random number from the first
100 natural numbers and asks the user to guess what the number is.
If the user’s guess is higher than the random number, the program should
display “Too high, try again.” If the user’s guess is lower than the random number, the
program should display “Too low, try again.” The program should use a loop that
repeats until the user correctly guesses the random number in which case the program will end
displaying “Congratulations! You guessed the number!*/


#include <iostream>
#include <cstdlib>  // this is 4 rand & srand
#include <ctime>    

using namespace std;

int main() {
    srand(time(0));

    int randomNumber = rand() % 100 + 1;

    int userGuess;

    do {
        cout << "Guess the number (between 1 and 100): ";
        cin >> userGuess;

        if (userGuess > randomNumber) {
            cout << "Too high, try again." << endl;

        } else if (userGuess < randomNumber) {
            cout << "Too low, try again." << endl;
            
        } else {
            cout << "Congratulations! You guessed the number!" << endl;
        }
    } while (userGuess != randomNumber); // Loop continues until the user guesses correctly

    return 0;
}