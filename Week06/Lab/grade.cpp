/* Create a file in your Week06/Lab folder called grade.cpp
Write a C++ program that asks the user for a number grade.

Determine the letter grade for the number using the following scale:
A: 90-100
B: 80-89
C: 70-79
D: 60-69
F: 0-59
Output the letter grade and the number grade.

Input Validation: Do not accept grades less than 0 or greater than 100.*/
#include <iostream> 

using namespace std; 

int main() {
    int score;
    char grade;

    cout << "Enter your score: ";
    cin >> score;

    if (score >= 90) {
        grade = 'A';
    }
    else if (score >= 80) {
        grade = 'B';
    }
    else if (score >= 70) {
        grade = 'C';
    }
    else if (score >= 60) {
        grade = 'D';
    }
    else 
    {
        grade = 'F';
    }

    if (score < 0 || score > 100) {
    cout << "invalid input, score must be between 0 and 100." << endl;
    return 1; 
 }
    cout << "Your grade is " << grade << " with a score of " << score << endl;

    return 0;
}