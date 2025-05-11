/*Create a file in Week13/Lab called overload.cpp

Write a function called add() that takes two characters as arguments and
    returns a string that contains the two characters concatenated together.

Write a function called add() that takes a character and an integer as arguments and returns
    a string that contains the character repeated the number of times specified by the integer.

Write function called area() that takes a double as an argument
    and returns the area of a circle with that radius.
    The function should use the formula area = pi * radius^2 to calculate the area.
    The function should return the area as a double.
    You can assume that the radius is a positive number.

Write a function called area() that takes two doubles as arguments
    and returns the area of a rectangle with those dimensions.
    The function should use the formula area = length * width to calculate the area.
    The function should return the area as a double.

Write a main function that calls each of the above functions
 with appropriate arguments and prints the results to the console.*/

 #include <iostream> 
#include <string>
#include <iomanip>

using namespace std;

string add(char a, char b) {
    return string(1, a) + b;
}

string add(char c, int count) {
    return string(count, c);
}

double area(double radius) {
    const double PI = 3.141592653589793;
    return PI * radius * radius;
}

double area(double length, double width) {
    return length * width;
}

int main() {
    cout << "add('A', 'B') = " << add('A', 'B') << endl;
    cout << "add('X', 5) = " << add('X', 5) << endl;
    cout << "area of circle with radius 3.0 = " << area(3.0) << endl;
    cout << "area of rectangle 4.0 x 6.0 = " << area(4.0, 6.0) << endl;

    return 0;
}
