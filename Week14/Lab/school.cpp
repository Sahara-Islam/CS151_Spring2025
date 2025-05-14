#include <iostream>

using namespace std;

void lowestGrade100(double grades[], int size) {
    double lowest = grades[0];
    int lowestIndex = 0;
    
    for (int i = 1; i < size; ++i) {
        if (grades[i] < lowest) {
            lowest = grades[i];
            lowestIndex = i;
        }
    }

    grades[lowestIndex] = 100.0;
}

void examCurve(double grades[], int size) {
    double highest = grades[0];
    
    // Find the highest grade
    for (int i = 1; i < size; ++i) {
        if (grades[i] > highest) {
            highest = grades[i];
        }
    }

    double difference = 100.0 - highest;
    for (int i = 0; i < size; ++i) {
        grades[i] += difference;
        if (grades[i] > 100) { 
            grades[i] = 100.0;
        }
    }
}


char letterGrade(int grade) {
    
    char letterGrades[] = {'A', 'B', 'C', 'D', 'F'};
    int gradeBoundaries[] = {90, 80, 70, 60, 0};  
    
  
    if (grade < 0 || grade > 100) {
        return 'X';  
    }

    // Determine the letter grade
    for (int i = 0; i < 5; ++i) {
        if (grade >= gradeBoundaries[i]) {
            return letterGrades[i];
        }
    }
    return 'X'; 
}

int main() {
   
    double grades[10] = {58.5, 92.0, 74.5, 66.0, 89.5, 55.0, 77.5, 85.0, 90.0, 60.5};

    cout << "Initial grades: ";
    for (int i = 0; i < 10; ++i) {
        cout << grades[i] << " ";
    }
    cout << endl;

    lowestGrade100(grades, 10);

    cout << "Grades after setting the lowest grade to 100: ";
    for (int i = 0; i < 10; ++i) {
        cout << grades[i] << " ";
    }
    cout << endl;

    
    examCurve(grades, 10);

    cout << "Grades after exam curve: ";
    for (int i = 0; i < 10; ++i) {
        cout << grades[i] << " ";
    }
    cout << endl;

    
    cout << "Letter grades: ";
    for (int i = 0; i < 10; ++i) {
        cout << letterGrade(static_cast<int>(grades[i])) << " ";
    }
    cout << endl;

    return 0;
}

