/*
5.23 - Write a short program that opens the file created by the program you wrote for
       Checkpoint 5.22, reads all of the numbers from the file, and displays them.
*/
#include <iostream>
#include <fstream> 

using namespace std; 

int main(){
       ifstream inputFile ("numbers.txt"); 

       if (!inputFile) {
              cout << "error opening the file." << endl;
              return 1;
       }

       int number; 
       cout << "numbers read from file: " << endl; 

       while (inputFile >> number) {
              cout << number << endl; 
       }

       inputFile.close();

       return 0; 
}

//i give up leave me alone