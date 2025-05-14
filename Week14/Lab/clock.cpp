#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

string showTime(int hours, int minutes = 0) {
    string period = "AM";
    
    if (hours >= 12) {
        period = "PM";
    }
    
    if (hours > 12) {
        hours -= 12;
    }
    
    if (hours == 0) {
        hours = 12;
    }
    
    string hourstr; 
    if (hours < 10){
        hourstr += '0'; 

    }

    hourstr += to_string(hours);

    string minutestr; 
    if (minutes <10){
        minutestr += '0';
    }

    minutestr += to_string(minutes);

    return hourstr + ":" + minutestr + " " + period; 
}

int main() {

    cout << "showTime(0, 0): " << showTime(0, 0) << endl;
    cout << "showTime(12, 0): " << showTime(12, 0) << endl;
    cout << "showTime(23, 59): " << showTime(23, 59) << endl;
    cout << "showTime(12, 59): " << showTime(12, 59) << endl;
    cout << "showTime(13, 30): " << showTime(13, 30) << endl;
    cout << "showTime(14): " << showTime(14) << endl;
    cout << "showTime(15): " << showTime(15) << endl;
    
    return 0;
}


/*Write a function called showTime() that has an int parameter called hours and an int
parameter called minutes. Minutes should have a default value of 0.
Assume the hours are in the range 0-23 and the minutes are in the range 0-59.
The the function should return a string representing the time in the format 
"hh:mm AM|PM" (AM or PM) where hh is the hour in the 2 digit
12-hour format and mm is the minutes in the 2 digit format.

Write a main function that will test the above function.
The main function should call the showTime() function with the following values:
showTime(0, 0);
showTime(12, 0);
showTime(23, 59);
showTime(12, 59);
showTime(13, 30);
showTime(14);   
showTime(15);*/