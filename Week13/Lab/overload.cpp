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
    #include <ctime> 
    #include <string> 
    #include <iomanip> 
    #include <cstdlib>

    using namespace std; 

    void add(char a, char b, string &result) {
        result = string(1, a) + b;
        }
    void add(char c, int count, string &result) {
         result = string(count, c);
        }

    void area(double radius, double &result) {
        const double PI = 3.141592653589793;
        result = PI * radius * radius;
        }

     void area(double length, double width, double &result) {
        result = length * width;
        }

    int main() {
        string addResult1, addResult2;
        double areaResult1, areaResult2

        add('A', 'B', addResult1);
        cout << "add('A', 'B') = " << addResult1 << endl;

        add('X', 5, addResult2);
        cout << "add('X', 5) = " << addResult2 << endl;

        area(3.0, areaResult1);
        cout << "area of circle with radius 3.0 = " << areaResult1 << endl;

        area(4.0, 6.0, areaResult2);
        cout << "area of rectangle 4.0 x 6.0 = " << areaResult2 << endl;
        
        return 0; 
    }