/*Fibonacci number

Create a file in Week10/Lab called fibonacci.cpp

Write a program that calculates the Fibonacci number for a user-defined non-negative integer.

The Fibonacci number is defined as follows:
F(0) = 0
F(1) = 1
F(n) = F(n-1) + F(n-2) for n > 1

The Fibonacci number is a sequence of numbers where each number is the sum of the two preceding ones,
starting from 0 and 1. The sequence starts as follows:

0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, ...

The program should prompt the user for a non-negative integer and then calculate the Fibonacci number using a loop and only a loop.
The program should print the Fibonacci number for the user-defined integer.

1. Declare a variable to hold the user-defined integer.
2. Declare a variable to hold the Fibonacci number.
3. Declare a variable to hold the previous Fibonacci number.
4. Declare a variable to hold the current Fibonacci number.
5. Initialize the previous Fibonacci number to 0.
6. Initialize the current Fibonacci number to 1.
7. Loop from 2 to the user-defined integer.
8. In each iteration, calculate the Fibonacci number by adding the previous and current Fibonacci numbers.
9. Assign the current Fibonacci number to the previous Fibonacci number.
10. Assign the new Fibonacci number to the current Fibnoacci number. 
11. After the loop, print the Fibonacci number for the user-defined integer.
12. Return 0 to indicate successful completion of the program.*/

#include <iostream>
#include <string> 
#include <fstream>

using namespace std; 

int main (){

    int previousFibonacci = 0, currentFibonacci = 1, fibonacciNumber, userNumber = -1;

    while (userNumber < 0) {
    cout << "Enter a non-negative number. "; 
    cin >> userNumber; 
    }
   
    if (userNumber <= 1){
        cout << userNumber << endl; 
        return 0;
    }
    for (int i = 2; i <= userNumber; i++)
    { 
       fibonacciNumber = currentFibonacci + previousFibonacci;
       previousFibonacci = currentFibonacci; 
       currentFibonacci = fibonacciNumber; 
    }
    cout << fibonacciNumber << "\n"; 
    return 0; 



    
}