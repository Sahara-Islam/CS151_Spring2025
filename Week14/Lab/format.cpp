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
    srand(time(0)); 
    
    char digits[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    
    for (int i = 0; i < size; ++i) {
        
        int num = rand() % 9000 + 1000;
    
        string numStr = to_string(num);
        
        nums[i] = commas(numStr);
    }
}

int main() {
    const int SIZE = 5; 
    string nums[SIZE];
   
    load(nums, SIZE);
   
    cout << "Formatted numbers with commas: " << endl;
    for (int i = 0; i < SIZE; ++i) {
        cout << nums[i] << endl;
    }
    
    return 0;
}
