/* Today is Valentines day
Write a program that displays todays date and says happy valentines day
The date should be in format: MM/DD/YYYY<<this is interger
1 char varaiables for the dilimeter 
3 string variables
2 string variables for date + greeting */


#include <iostream>

using namespace std; 

int main(){
    string date = "14";
    string year = "2025";
    string month = "2";

    char seperator = '/';

    cout << "Today is Valentines day " << month << seperator << date << seperator << year << endl; 

    return 0; 


}
