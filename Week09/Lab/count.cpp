/* Count Positive and Negative Numbers

Create a file in Week09/Lab called count.cpp

Write a program that asks the user for a positive integer n within 10 to 20. The program
should loop till the user inputs a valid number. After receiving a valid input, it should
prompt the user to enter n numbers within a loop and count the total number of positive
and negative numbers separately. Display the counts*/

#include <iostream>

using namespace std;

int main() {
    int n;

    // 10 & 20
    do {
        cout << "Enter a positive integer n between 10 and 20: ";
        cin >> n;
    } while (n < 10 || n > 20);  