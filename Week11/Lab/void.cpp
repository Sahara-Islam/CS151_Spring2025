/*Helper Functions

Create a file in Week11/Lab called void.cpp

Write a function called sayHello() that takes a string as an argument and prints "Hello, <string>!" to the console.
The function should not return any value.
The function should handle the case when the string is empty by printing "Hello, World!".
<string> should be replaced with the actual string parameter.

Write a function called countdown() that takes an integer n as an argument and prints a countdown from n to 0.
The function should use a loop to print each number in the countdown.
The function should not return any value.
The function should handle the case when n is less than 0 by printing "Invalid input".

Write a function called printBlock() that takes an integer n as an argument and prints a block of asterisks with n rows and n columns.
The function should use nested loops to print the block of asterisks.
The function should not return any value.
The function should handle the case when n is less than 1 by printing "Invalid input".

Write a function called printTriangle() that takes an integer n as an argument and prints a right triangle of asterisks with n rows.
The function should use nested loops to print the triangle.
The function should not return any value.
The function should handle the case when n is less than 1 by printing "Invalid input".

Write a main function that calls each of the above functions with appropriate arguments and prints the results to the console.*/
#include <iostream>
#include <string> 
#include <cmath> 
#include <iomanip>

using namespace std; 

void sayHello(string name)
{ 
    cout << "Hello " << name << endl; 
}

void countdown(int n){
    if (n < 0) {
        cout << "Invalid Input" << endl; 
        return; 
    }

    for (int i = n; i >= 0; i--) {
        cout << i << endl; 
    } //(int i = 0; i < 5; i++)


}

void printBlock(int n){
    if (n < 1) {
        cout << "Invalid Input" << endl; 
        return; 
    }

    for (int i = 1; i <= n; i++) 
    {
        for (int j = 0; j < n; j++) 
        { 
            cout << "*"; 
        }   
        cout << endl; 
    }
    cout << endl; 
}

void printTriangle(int n){
    if (n < 1) {
        cout << "Invalid Input" << endl; 
        return; 
    }

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j <= i; j++) 
        { 
            cout << "*"; 
        }   
        cout << endl; 
    }
    cout << endl; 
}
  


int main (){

sayHello("Cotton Candy!"); 

countdown(11);

printBlock(4);

printTriangle(4);

return 0;

}






