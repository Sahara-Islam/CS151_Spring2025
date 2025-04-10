/* Multiplication Table

Create a file in Week10/Lab called multiply.cpp

Write a program that prints the multiplication table from 1 to 12.
Use a nested loop to print the table.
The program should print the table in a neat format. (Use setw(4) to format the output.)

The table should look like:

1   2   3   4   5   6   7   8   9   10  11  12
2   4   6   8   10  12  14  16  18  20  22  24
3   6   9   12  15  18  21  24  27  30  33  36
4   8   12  16  20  24  28  32  36  40  44  48
5   10  15  20  25  30  35  40  45  50  55  60
6   12  18  24  30  36  42  48  54  60  66  72
7   14  21  28  35  42  49  56  63  70  77  84
8   16  24  32  40  48  56  64  72  80  88  96
9   18  27  36  45  54  63  72  81  90  99  108
10  20  30  40  50  60  70  80  90  100 110 120
11  22  33  44  55  66  77  88  99  110 121 132
12  24  36  48  60  72  84  96  108 120 132 144

1. Loop from 1 to 12.
2. In each iteration, loop from 1 to 12.
3. In the inner loop, calculate the product of the outer loop variable and the inner loop variable.
4. Print the product using setw(4) to format the output.
5. After the inner loop, print a newline character to move to the next line.
6. After the outer loop, print a newline character to move to the next line.
7. Compile and run the program to see the multiplication table.
8. Return 0 to indicate successful completion of the program.*/

#include <iostream>
#include <iomanip> 
#include <fstream>

using namespace std;

int main() {
    
    for (int i = 1; i <= 12; i++) {
       
        for (int j = 1; j <= 12; j++) {

        cout << setw(4) << i * j; 
        
        }
        cout << endl;
    }
    return 0;
}
