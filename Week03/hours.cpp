/*
Write a program that asks the user for the duration in minutes 
Display hours and minutes of the duration
3 integer variable for hours, minutes, and duration 
hrs divide by 60 
mins mod 60 */

#include <iostream> 

using namespace std; 

int main ()
{
    string name; 
    int duration, hours, minutes; 

    cout << "Enter the duration in minutes: ";
    cin >> duration;
    hours = duration / 60; 
    minutes = duration % 60; 
    cout << "What is the duration in an hour?"; 
    cout << "The duration is:    " << hours << "hours and  " << minutes << "minutes. \n"; 

return 0; 

}
