/*
Review Questions 35 - 36
For each review question, there will be an accompanying void function.
Please answer the questions there.
No need to touch the main function.
*/

#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

void reviewQuestion35()
{
    /*
    Write a while loop that asks the user for a number (integer) and finds the sum of all
    the numbers entered. The process is continued till the sum of the numbers exceeds
    100. Initialize the sum as 0 and display all partial sums.
    */

    // Write your code here
    int sum = 0, num; 
    while (sum <= 100) {
        cout << "Enter a number: "; 
        cin >> num; 
        sum += num; 
            cout << "current sum: " << sum << endl; 
    }


}
void reviewQuestion36()
{
    /*
    Write a do-while loop that asks the user for a number. The square root of the number
    is then computed and displayed. The process continues as long as the user inputs a
    positive number; otherwise the loop terminates. Assume that the first number is 1.
    */

    // Write your code here

    double number = 1; 
    do {
        cout << "enter a number: "; 
        cin >> number; 
        if (number >= 0) {
            cout << "square root: " << sqrt(number) << endl; 
        }
    } while (number > 0); 
}
void reviewQuestion37()
{
    /*
    Write a for loop to display the following set of numbers:
    2, 4, 8, 16 ... 1024, 2048
    */

    // Write your code here
   
    for (int num = 2; num <= 2048; num *= 2) {
        cout << num << " "; 

    }
    cout << endl; 
}
void reviewQuestion38()
{
    /*
    Write a for loop to display all the even numbers from 100 to 250. Also include a
    counter variable that counts the number of even numbers generated.
    */

    // Write your code here
    {
        int counter = 0;
        for (int i = 100; i <= 250; i += 2) {
            cout << i << " ";
            counter++;
        }
        cout << "\nTotal even numbers: " << counter << endl;
    }

}
void reviewQuestion39()
{
    /*
    Write a nested loop that displays 10 rows of ‘#’ characters. There should be 15 ‘#’
    characters in each row.
    */

    // Write your code here
    {
    for (int row = 0; row < 10; row++) {
        for (int col = 0; col < 15; col++) {
            cout << '#';
        }
        cout << endl;
    }
}

}
void reviewQuestion40()
{
    /*
    Convert the following while loop to a do-while loop:
    int x = 1;
    while (x > 0)
    {
        cout << "enter a number: ";
        cin >> x;
    }
    */

    // Write your code here
    {
        int x = 1;
        do {
            cout << "enter a number: ";
            cin >> x;
        } while (x > 0);
    }

}
void reviewQuestion41()
{
    /*
    Convert the following do-while loop to a for loop:
    int response;
    do
    {
        cout << "Hello! Press 1 to exit loop...";
        cin >> response;
    } while ( response != 1 );
    */

    // Write your code here
    {
        for (int response = 0; response != 1;) {
            cout << "Hello! Press 1 to exit loop...";
            cin >> response;
        }
    }

}
void reviewQuestion42()
{
    /*
    Convert the following while loop to a for loop:
    int count = 0;
    while (count < 50)
    {
    cout << "count is " << count << endl;
    count++;
    }
    */

    // Write your code here
    {
        for (int count = 0; count < 50; count++) {
            cout << "count is " << count << endl;
        }
    }
}
void reviewQuestion43()
{
    /*
    Convert the following for loop to a while loop:
    for (int x = 50; x > 0; x−−)
    {
    cout << x << " seconds to go.\n";
    }
    */

    // Write your code here
    int x = 50; 
    while (x > 0){
        cout << x <<" seconds to go" << endl; 
        x--; 
    }
}
void reviewQuestion44()
{
    /*
    Write code that does the following: Opens an output file with the filename Numbers.txt,
    uses a loop to write the numbers 1 through 100 to the file, then closes the file.
    */

    // Write your code here
    ofstream outputFile("Numbers.txt"); 
    for (int i = 1; i <= 100; i++){
        outputFile << i << endl; 
    }
    outputFile.close(); 
}
void reviewQuestion45()
{
    /*
    Write code that does the following: Opens the Numbers.txt file that was created by
    the code you wrote in Question 44, reads all of the numbers from the file and displays
    them, then closes the file.
    */

    // Write your code here
    {
        ifstream inputFile("Numbers.txt");
        int num;
        while (inputFile >> num) {
            cout << num << endl;
        }
        inputFile.close();
    }
    

}
void reviewQuestion46()
{
    /*
    Modify the code that you wrote in Question 45 so it adds all of the numbers read from
    the file and displays their total.
    */

    // Write your code here
    {
        ifstream inputFile("Numbers.txt");
        int num, total = 0;
        while (inputFile >> num) {
            total += num;
        }
        inputFile.close();
        cout << "Total of all numbers: " << total << endl;
    }

}

// Do not change the main function
// Do not change the main function
// Do not change the main function

int main()
{
    void (*calls[])() = { 
        reviewQuestion35, reviewQuestion36, reviewQuestion37, reviewQuestion38,
        reviewQuestion39, reviewQuestion40, reviewQuestion41, reviewQuestion42,
        reviewQuestion43, reviewQuestion44, reviewQuestion45, reviewQuestion46
    };
    
    for (int i = 0; i < 12; i++)
    {
        cout << "Review Question " << i + 35 << ":\n";
        cout << "******************************************\n";
        calls[i]();
        cout << "******************************************\n\n";
    }
    

    return 0;
}