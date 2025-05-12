/*
The following program skeleton contains a 20-element array of ints called fish.
When completed, the program should ask how many fish were caught by
fishermen 1 through 20, and store this data in the array. Complete the program.
*/
#include <iostream>
using namespace std;

int main()
{
    const int NUM_FISH = 20;
    int fish[NUM_FISH];
    
    for (int i = 0; i < NUM_FISH; i++) {
        cout << "Enter the number of fish caught by fisherman " << (i + 1) << ": ";
        cin >> fish[i]; 
    }
    cout << "\nFish caught by fishermen 1 through 20:\n";
    for (int i = 0; i < NUM_FISH; i++) {
        cout << "Fisherman " << (i + 1) << " caught " << fish[i] << " fish." << endl;
    }
    // You must finish this program. It should ask how
    // many fish were caught by fishermen 1-20, and
    // store this data in the array fish.
    return 0;
}