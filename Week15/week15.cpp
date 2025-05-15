#include <iostream>

using namespace std; 
const double PI = 3.1415;

void hello(){
    cout << "hello world" << endl; 
}

int dogyears(int age){
    return age * 7; 
}

bool isPrime(int num){
    if (num >= 2) 
    {
       for (int i = 2; i * i <= num; i++){
            if (num % i == 0){
                return false;  
            }
       }
       return true; 
    }
    return false; 
}

bool isEven(int num){
    // if (num % 2 == 0){
    //     return true;
    // }
    // else {
    //     return false;
    // }
    return (num % 2 == 0); 

}

string shift(string word){
    string result; 
    for (int i = 0; i < word.length(); i++){
        result += word[i]++;
    }
    return result; 
}

int main (){
    int creamSoda = 10; 

    cout << creamSoda-- << endl; 
    cout << --creamSoda << endl;

    while (creamSoda < 20){
        cout << ++creamSoda << endl; 
    }

    do {
        cout << creamSoda-- << endl; 
    } while (creamSoda > 0); 

    
    for (int i = 1; i <= 100; i++){
        cout << i * 2 << endl;

        for (int j = 1; j <=20; j++){
           cout << '*';  
        }
        cout << endl; 
    }

    hello();
    
    cout << dogyears(5) << endl;

    cout << isPrime(7) << endl;

    return 0; 
}