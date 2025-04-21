/*Helper Functions

Create a file in Week11/Lab called helper.cpp

Write a function called isEven() that takes an integer as an argument and returns true if the integer is even, and false if it is odd.
The function should use the modulus operator to determine if the integer is even or odd.
The function should return a boolean value.

Write a function called isOdd() that takes an integer as an argument and returns true if the integer is odd, and false if it is even.
The function should use the modulus operator to determine if the integer is odd or even.
The function should return a boolean value.

Write a function called allUpper() that takes a string as an argument and returns the string with all characters converted to uppercase.
The function should use a loop to iterate through each character of the string and convert it to uppercase.
The function should return the modified string.

Write a function called allLower() that takes a string as an argument and returns the string with all characters converted to lowercase.
The function should use a loop to iterate through each character of the string and convert it to lowercase.
The function should return the modified string.

Write a function called vowelCount() that takes a string as an argument and returns the number of vowels in the string.
The function should use a loop to iterate through each character of the string and check if it is a vowel (a, e, i, o, u).
The function should return the count of vowels found in the string.
Use the allLower() function to convert the string to lowercase before checking for vowels.
Assume that the string contains only alphabetic characters.
Assume y is not a vowel.

Write a function called consonantCount() that takes a string as an argument and returns the number of consonants in the string.
The function should use a loop to iterate through each character of the string and check if it is a consonant (a letter that is not A, E, I, O, U).
The function should return the count of consonants found in the string.
Use the allUpper() function to convert the string to uppercase before checking for consonants.
Assume that the string contains only alphabetic characters.
Assume Y is a consonant.

Write a function called encode() that takes a string as an argument and returns the string with each character replaced by the next character in the alphabet.
The function should use a loop to iterate through each character of the string and replace it with the next character in the alphabet.
The function should return the modified string.
The next character in the alphabet for z is a.
The next character in the alphabet for Z is A.

Write a main function that calls each of the above functions with appropriate arguments and prints the results to the console.*/

#include <iostream> 
#include <cctype>
#include <string> 
#include <iomanip>

using namespace std; 

bool isEven(int num){
    return (num % 2) == 0; 
      //(int i = 0; i < 5; i++)
}

bool isOdd(int num){
    return (num % 2) != 0;

}

string allUpper(string str){
   for (int i = 0; i < str.length(); i++){
    str[i] = toupper(str[i]);
   }
   return str; 
}
string allLower(string str){
    for (int i = 0; i < str.length(); i++){
     str[i] = tolower(str[i]);
    }
    return str; 
 }
 
 int vowelCount(string str){
    int count = 0;
    for (int i = 0; i < str.length(); i++){
        str[i]= tolower(str[i]);
        if (str[i] == 'a' || str[i] == 'e'|| str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            count++;
        }
    }
    return count; 
 }
 int consonantCount(string str){
    int count = 0;
    for (int i = 0; i < str.length(); i++){
        str[i]= toupper(str[i]);
        if (isalpha(str[i]) && str[i] !='A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U'){
            count++;
        }
    }
    return count; 
 }

 string encode(string str){
    for (int i = 0; i < str.length(); i++){
        if (str[i] == 'z'){ 
            str[i] = 'a'; 
        }
        else if (str[i] == 'Z'){ 
            str[i] = 'A'; 
        }
        else {
            str[i]++;
        }
    }
    return str;
 }

int main() {
    cout << "isEven(4): " << isEven(4) << endl; 
    cout << "isEven(5): " << isEven(5) << endl; 

    cout << "isOdd(4): " << isOdd (4) << endl; 
    cout << "isOdd(5): " << isOdd (5) << endl; //ask question

    cout << "allUpper(\"Hello\"): " << allUpper("Hello") << endl; 
    cout << "allLower(\"Hello\"): " << allLower("Hello") << endl; 

    cout << "vowelCount(\"Hello\"): " << vowelCount("Hello") << endl; 
    cout << "consonantCount(\"Hello\"): " << consonantCount("Hello") << endl; 

    cout << "encode(\"Hello\"): " << encode("Hello") << endl; 





    return 0; 
}