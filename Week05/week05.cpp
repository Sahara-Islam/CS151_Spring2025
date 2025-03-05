#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <ctime>

using namespace std;

int main()
{
    // srand(time(0));
    // const double PI = 3.14159;
    // cout << rand() % 100 + 1<< endl;
    /*
    cout << "Enter your name: ";
    string name;
    cin >> name;
    cin.ignore(100,'\n');
    cout << "enter your whole name: ";
    getline(cin,name);
    
    cout << endl;
    */
    // cout << fixed << setprecision(4) << PI << endl;
    // cout << showpoint << fixed << setprecision(2) << 10 / 2.0 << endl;
    int w = 20;
    cout << setw(w) << left << "Name" << setw(w) << "Major" << setw(w) << "GPA" << endl;
    cout << setw(w) << "Jonathan Skeete" << setw(w) << "Computer Science" << setw(w) << "3.7" << endl;
    cout << setw(w) << "Jane Doe" << setw(w) << "Mathematics" << setw(w) << "4.0" << endl;
    cout << setw(w) << "Mark Hamil" << setw(w) << "Biology" << setw(w) << "2.9" << endl;

    return 0;
}