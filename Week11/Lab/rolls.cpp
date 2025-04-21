/*Average Die Rolls

Create a file in Week11/Lab called rolls.cpp

Write a program that simulates rolling a die 10 times and calculates the average of the rolls.
Theoretically, the average die roll should be 3.5.

Write a function called rollDie() that simulates rolling a die and returns the result.
The function should use the rand() function to generate a random number between 1 and 6.
The function should take no parameters and return an integer.

Write a function called calculateAverage() that takes an integer argument representing the number of rolls and returns the average of the rolls.
The function should call the rollDie() function to generate the rolls and calculate the average.

Write a function called absoluteValue() that takes a double argument and returns the absolute value of the argument.

Write a function called percentError() that takes two double arguments representing the theoretical average and the calculated average.
The function should return the percent error between the theoretical average and the calculated average using the formula:

                    |theoretical average - calculated average| 
percentError = 2 x -------------------------------------------- x 100
                     theoretical average + calculated average

The function should return a double value.
Theoretical average = 3.5

Your main function should call the calculateAverage() function to get the average of the rolls and save it in a variable.
Then, it should call the percentError() function to calculate the percent error between the theoretical average and the calculated average.
Finally, print the average of the rolls and the percent error to the console.
Both values should be formatted to 2 decimal places with the percent error displayed with a percent sign.
Increase the number of rolls to improve/decrease the percent error.*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;


int rollDie() {
    return rand() % 6 + 1;
}

double calculateAverage(int rolls) {
    int sum = 0;
    for (int i = 0; i < rolls; i++) {
        sum += rollDie();
    }
    return static_cast<double>(sum) / rolls;
}


double absoluteValue(double value) {
    return value < 0 ? -value : value;
}


double percentError(double theoretical, double calculated) {
    double error = absoluteValue(theoretical - calculated);
    return 2 * (error / (theoretical + calculated)) * 100;
}

int main() {
    srand(static_cast<unsigned int>(time(0)));

    const int NUM_ROLLS = 10; 
    const double THEORETICAL_AVG = 3.5;

    double avg = calculateAverage(NUM_ROLLS);
    double error = percentError(THEORETICAL_AVG, avg);

    cout << fixed << setprecision(2);
    cout << "average of rolls: " << avg << endl;
    cout << "percent error: " << error << "%" << endl;

    return 0;
}
