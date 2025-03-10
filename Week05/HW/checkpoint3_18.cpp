
//The following program will not compile because the lines have been mixed up:
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
      string person = "Wolfgang Smith";

      cout << setw(20) << left << person << endl;

      cout << setw(20) << right << person << endl;

      return 0;
}



/*
When the lines are properly arranged, the program should display the following:

      Wolfgang Smith
Wolfgang Smith

Rearrange the lines in the correct order. Test the program by entering it on the
computer, compiling it, and running it.
*/