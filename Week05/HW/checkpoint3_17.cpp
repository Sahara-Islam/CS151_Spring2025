/*
Write cout statements with stream manipulators that perform the following:
A) Display the number 34.789 in a field of nine spaces with two decimal places
of precision.
B) Display the number 7.0 in a field of five spaces with three decimal places of
precision.
The decimal point and any trailing zeros should be displayed.
C) Display the number 5.789e+12 in fixed-point notation.
D) Display the number 67 left-justified in a field of seven spaces.
*/

#include <iostream> 
#include <iomanip>

using namespace std; 

int main() {
    cout << setw(9) << fixed << setprecision (20) << 34.789 << endl;

    cout << setw(5) << fixed << setprecision (3) << 7.0 << endl;
    
    cout << fixed << 5.789e+12 << endl;

    cout << setw(7) << left << 67 << endl; 
    
    return 0;
}