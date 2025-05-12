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
    
    stringstream timeStream;
    timeStream << setfill('0') << setw(2) << hours << ":"
               << setfill('0') << setw(2) << minutes << " " << period;
    
    return timeStream.str();
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
