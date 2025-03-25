/* The Fast Freight Shipping Company charges the following rates:

-------------------------------------------------------------------
Weight of Package (in Kilograms)        Rate per 500 Miles Shipped
-------------------------------------------------------------------
2 kg or less                            $1.10
Over 2 kg but not more than 6 kg        $2.20
Over 6 kg but not more than 10 kg       $3.70
Over 10 kg but not more than 20 kg      $4.80
-------------------------------------------------------------------

Create a file in your Week06/Lab folder called shipping.cpp

Write a program that asks for the weight of the package and the distance it is to be
shipped, then displays the charges.

Input Validation: Do not accept values of 0 or less for the weight of the package. Do
not accept weights of more than 20 kg (this is the maximum weight the company will
ship). Do not accept distances of less than 10 miles or more than 3,000 miles. These
are the company’s minimum and maximum shipping distances.*/

#include <iostream>
#include <iomanip> 

using namespace std; 

int main() {
    double weight, distance, rate, totalCharge; 

    cout << "Enter the weight of package in kilograms: ";
    cin >> weight; 

    if (weight <= 0 || weight > 20){
        cout << "Invalid weight! Please enter a weight that's greater than 0 and less than or equal to 20 kg." << endl;
        return 1; 
    }

    cout << "Enter the distance to be shipped in miles: "; 
    cin >> distance;

    if (weight <= 2){
        rate = 1.10;
    } else if (weight <= 6) {
        rate = 2.20;
    } else if (weight <= 10) {
        rate = 3.70; 
    } else {
        rate = 4.80; 
    }

    totalCharge = (distance / 500) * rate; 

    cout << fixed << setprecision(2);
    cout << "shipping charge: $" << totalCharge << endl; 

    return 0; 

}