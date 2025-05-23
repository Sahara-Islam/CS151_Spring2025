/*Create a file in Week13/Lab called funcs.cpp

Write a function called sayHello() that has a string parameter with a 
    default value of "World" and prints "Hello, <string>!" to the console.
    The function should not return any value.
    sayHello("Eve") should print "Hello, Eve!".
    sayHello() should print "Hello, World!".

Write a function called allUpper() that has a string reference parameter and
    modifies the string with all characters converted to uppercase.
    The function should use a loop to iterate through each character of the string
    and convert it to uppercase.
    The function should not return any value.

Write a function called allLower() that has a string reference parameter and
    modifies the string with all characters converted to lowercase.
    The function should use a loop to iterate through each character of the string
    and convert it to lowercase.
    The function should not return any value.

Write a function called getRandom() with an int parameter max and an int
    parameter min. Assign a default value of 0 to min.
    The function should return a random integer between min and max.
    Use (max + 1 - min) + min to calculate the range of random numbers.
    The function should initialize a static boolean variable called seeded to false.
    If seeded is false, call srand() with the current time.
    The function should set seeded to true after seeding the random number generator.
    The function should use the rand() function to generate the random number.
    The function should return the random number.
    The function should handle the case when max is less than min by swapping their values.

Write a main function that calls each of the above functions
    with appropriate arguments and prints the results to the console.*/
#include <iostream> 
#include <ctime> 
#include <string> 
#include <iomanip> 
#include <cstdlib>

using namespace std; 

void sayHello(string name = "World"){
    cout << "Hello, " << name << "!" << endl; 
}

void allUpper(string& str){
    for (int i = 0; i < str.length(); i++){
        str[i] = toupper(str[i]); 
    
    }
    

}

void alllower(string& str){
    for (int i = 0; i < str.length(); i++){
        str[i] = tolower(str[i]); 
    
    }
    

}

int getRandom(int max, int min = 0){
    static bool seeded = false; 
    if (!seeded) {
        srand(time(0));
        seeded = true; 
    }
    if (max < min){
        int temp = max; 
        max = min; 
        min = temp;
    }

    return rand()%(max + 1 - min) + min;
}



int main (){
    sayHello("eve"); 
    sayHello();

    string a = "pineapple";
    allUpper(a); 
    cout << a << endl; 

    string b = "STRAWBERRY";
    alllower(b); 
    cout << b << endl; 

    cout << getRandom(1000); 

    //cout << rand() << " ";



    return 0; 
}