/*
5.22 - Write a short program that uses a for loop to write the numbers 1 through 10 to
       a file.
*/
#include <iostream>
#include <fstream> 

using namespace std; 

int main() {
       ofstream outputFile("numbers.txt");

 if (!outputFile){
          cout << "error opening the file." << endl; 
         return 1; 
       }

for (int i = 1; i <= 10; i++) {
       outputFile << i << endl;
}

outputFile.close();
cout << "numbers written to numbers.txt successfully." << endl; 

       return 0; 
}