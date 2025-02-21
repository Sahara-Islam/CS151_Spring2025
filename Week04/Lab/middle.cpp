/* 1. Create a file in the Week04/Lab/ folder called middle.cpp
 2. Write a program that asks the user for two numbers and then prints the middle number.
3. The program should have 3 variables,
    num1, num2, and middle.
4. Test the program with the following numbers:
    num1 = 2, num2 = 72
    The output should be:
    middle = 37
    
    num1 = -10, num2 = -20
    The output should be:
    middle = -15
    
    num1 = -100, num2 = 100
    The output should be:
    middle = 0 

5. After displaying the middle number, assign the numbers 
     2147483640 and 2147483646 to num1 and num2, respectively.
 6. Output the middle number again.
 7. The output should be: 2147483643 */

 #include <iostream>
 using namespace std; 

 int main() {
    
    int num1, num2, middle; 
    
    cout << "Enter the first number"; 
    cin >> num1; 

    cout << "Enter the second number"; 
    cin >> num2; 

    middle = (num1 + num2)/ 2; 

    cout << "middle number = " << middle << endl;
    
    num1 = 2147483640;
    num2 = 2147483646; 


    return 0; 
 }