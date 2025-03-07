/* Create a C++ file called fizzbuzz.cpp in your Week06/Lab folder.
Write a program that stores a random number between -10,000 and 10,000 in a variable named number.
If the number is negative, make it positive.
Check if the number is divisible by 3. If it is, print out “Fizz”.
If the number is divisible by 5, print out “Buzz”.
However, if the number is divisible by both 3 and 5, print out “FizzBuzz”.

Be sure to include the following header files in your program and add 
    srand(time(0)); 
to the beginning of your main function:

#include <iostream>
#include <cstdlib>
#include <ctime> */

#include <iostream>
#include <cstdlib> 
#include <ctime>

using namespace std; 

int main() {

    srand(time(0));

    int number = rand() % 20001 - 10000;

    if (number < 0) {
        number = -number;
    }
    cout << "Generated number: " << number << endl;

   
    if (number % 3 == 0 && number % 5 == 0) {
        cout << "FizzBuzz" << endl;
    } else if (number % 3 == 0) {
        cout << "Fizz" << endl;
    } else if (number % 5 == 0) {
        cout << "Buzz" << endl;
    }

    return 0;
}



