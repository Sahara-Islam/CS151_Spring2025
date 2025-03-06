/*
Complete the following program skeleton so it displays the volume of a
cylindrical fuel tank. The formula for the volume of a cylinder is
Volume = π(r^2)h
where
π is 3.14159,
r is the radius of the tank, and
h is the height of the tank.
*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double volume, radius, height;
    cout << "This program will tell you the volume of\n";
    cout << "a cylinder-shaped fuel tank.\n";

    cout << "How tall is the tank? ";
    cin >> height;

    volume = 3.141459 * pow(radius, 2) * height; 

    cout << "What is the radius of the tank? ";
    cin >> radius;

    cout << "The volume of the tank is: " << volume << " cubic units.\n";
    // You must complete the program.
    return 0;
}
