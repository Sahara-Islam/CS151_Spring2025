#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

string commas(string amount) {
    int n = amount.size();
    string result = "";
    
    bool isNegative = (amount[0] == '-');
    if (isNegative) {
        amount = amount.substr(1); 
        n--;
    }

    int count = 0; 
    for (int i = n - 1; i >= 0; --i) {
        result = amount[i] + result; 
        count++;
        
        if (count % 3 == 0 && i != 0) {
            result = ',' + result;
        }
    }
    
    if (isNegative) {
        result = '-' + result;
    }
    
    return result;
}
void load(string nums[], int size) {
    
    
    char digits[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    
    for (int i = 0; i < size; ++i) {
        
        int num = rand() % 9000 + 1000;
    
        string numStr = to_string(num);
        
        nums[i] = commas(numStr);
    }
}

int main() {
    srand(time(0)); 
    
    const int SIZE = 5; 
    string nums[SIZE];
   
    load(nums, SIZE);
   
    cout << "Formatted numbers with commas: " << endl;
    for (int i = 0; i < SIZE; ++i) {
        cout << nums[i] << endl;
    }
    
    
    return 0;
}

/*Write a function called commas() that has an string parameter called amount.
The function should return a string that represents the amount with commas
separating the thousands. 
For example, "1000" should be returned as "1,000", "1000000" should be returned
as "1,000,000", and "1234567890" should be returned as "1,234,567,890".
The function should handle negative numbers by adding a minus sign before the number.
The function should not use any built in functions to format the amount.

Write a function called load() that has a string array parameter called nums
and an int parameter called size.
The function should assign each element of the array a random number between 1000 and 9999.
Each number should be formatted with commas using the commas() function.
Use a char array that holds the numbers 0-9.

Write a main function that will test the above functions.*/