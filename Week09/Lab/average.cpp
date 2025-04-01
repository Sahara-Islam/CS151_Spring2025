/* Print Array

Create a file in Week09/Lab called average.cpp

Write a program that assigns a random number between 5 and 20 to a named constant N.
Declare an array of size N and assign a random number between 0 and 100 to each element of the array.
The program should then print the array elements encased in square brackets [] on a single line 
separated by a comma. (e.g. [1, 2, 3, 4, 5]) Then the program should print the sum of the
array elements followed by the average to two decimal places. */

#include <iostream>
#include <ctime> // this is 4 time()
#include <cstdlib> // this is 4 rand & srand
#include <iomanip>  

using namespace std;

int main() {

    const int N = rand() % 16 + 5; // Random number between 5 and 20
   
    srand(time(0));

    int arr[N];

    for (int i = 0; i < N; i++) {
        arr[i] = rand() % 101;  
    }
    cout << "[";
    for (int i = 0; i < N; i++) {
        cout << arr[i];
        if (i < N - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;

    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum += arr[i];
    }
    double average = static_cast<double>(sum) / N;

    cout << "Sum: " << sum << endl;
    cout << "Average: " << fixed << setprecision(2) << average << endl;

    return 0;
}


