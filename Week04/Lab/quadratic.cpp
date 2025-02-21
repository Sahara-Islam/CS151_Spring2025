/* 1. Create a file in the Week04/Lab/ folder called quadratic.cpp
2. Write a program that asks the user for the coefficients of
    a quadratic equation and then prints two possible roots.
3. The program should have 5 variables,
    a, b, c, x_1, and x_2.
4. Use the quadratic formula to calculate the roots:
    x = (-b ± sqrt(b^2 - 4ac)) / 2a
5. Include the cmath library: #include <cmath>
6. Test the program with the following coefficients:
    a = 1, b = 5, c = 6
    The output should be:
    x_1 = -2
    x_2 = -3

    a = 1, b = 0, c = -9
    The output should be:
    x_1 = 3
    x_2 = -3

    a = 10, b = 20, c = 10
    The output should be:
    x_1 = -1
    x_2 = -1*/

    #include <iostream>
    #include <cmath>

    using namespace std; 

    int main(){
        int a, b, c, x_1, x_2; 

        cout << "Enter coffeicant a"; 
        cin >> a; 

        cout << "Enter coffeicent b"; 
        cin >> b; 

        cout << "Enter coffeicent c"; 
        cin >> c; 

        //(b^2sqrt(pow(_1, 2) + pow(side_b, 2));

        x_1 = (-b + sqrt(pow(b,2) - 4 * a * c)) / 2 * a;

        

        return 0; 
    }
